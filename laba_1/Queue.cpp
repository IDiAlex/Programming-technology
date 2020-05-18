#include <stdio.h>
#include "Queue.h"
#include <iostream>
using namespace std;

Unit* Queue::get_last(){return last;}//возвращаем указательна последний элемент

bool Queue::check(){
    if (size == 0){
        cout << "Очередь пуста" << endl;
        return false;
    }
    return true;
}

Queue::Queue(){size = 0;};

Queue:: ~Queue(){
    while (size > 0){
        Unit* buf = last;
        last = buf->prev;
        delete buf;
        size--;
    }
}

void Queue::push(int data){//добавление
    Unit *buff = new Unit;
    buff->prev = last;
    last = buff;
    last->value = data;
    size++;
}

int Queue::pop(void){// извлечение
    int now_ex = 0;
    Unit* buf = last;
    if (buf->prev==nullptr){
        now_ex=buf->value;
        delete last;
        last=nullptr;
        size--;
    }
    else{
        while (buf->prev->prev!=nullptr) buf=(buf->prev);
        now_ex=buf->prev->value;
        delete buf->prev;
        buf->prev = nullptr;
        size--;
    }
    return now_ex;
}

void Queue::out(){//вывод на экран
    Unit* buf = last;
    int step = 0;
    do{
        buf = last;
        for(int i=0; i < (size - step - 1); i++)
            buf = buf->prev;
        cout << buf->value << "  ";
        step++;
    }while(size != step);
    cout << endl;
}

void Queue::copy(Queue &ob){//создание копии
    int* arr = new int[ob.size];
    Unit* ptr = ob.last;
    for (int i = ob.size - 1; i >= 0; i--){
        arr[i] = ptr->value;
        ptr = ptr->prev;
    }
    for (int i = 0; i < ob.size; i++) this->push(arr[i]);// указатель на обьект на котором вызвана функция
    delete[] arr;
    this->out();
}

void Queue::merger(Queue &ob1,Queue &ob2){//слияние
    int* arr = new int[ob1.size];
    Unit* ptr1 = ob1.last;
    for (int i = ob1.size - 1; i >= 0; i--){
        arr[i] = ptr1->value;
        ptr1 = ptr1->prev;
    }

    for (int i = 0; i < ob1.size; i++) this->push(arr[i]);

    delete[] arr;
    int* arr2 = new int[ob2.size];
    Unit* ptr2 = ob2.last;

    for (int i = ob2.size - 1; i >= 0; i--){
        arr2[i] = ptr2->value;
        ptr2 = ptr2->prev;
    }

    for (int i = 0; i < ob2.size; i++) this->push(arr2[i]);

    delete[] arr2;
    this->out();
}
