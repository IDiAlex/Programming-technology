#include "stack.h"
#include <iostream>
using namespace std;

stack::stack(){
    num = 0;
    END = nullptr;
}

stack::~stack(){
    while (num != 0){
        Unit *tmp = END;
        END = tmp->prev;
        delete tmp;
        --num;
    }
}

void stack::push(int value){
    Unit* newelmt = new Unit;// новый элемент
    if (END != nullptr)
        newelmt->prev=END;
    END = newelmt;
    newelmt->value = value;
    num++;
}
void stack::nul_num(){
    num =0;
    END = nullptr;
}

void stack::out(){
    Unit* tmp = END;
    while (tmp->prev!=nullptr){
        cout << " "<<tmp->value;
        tmp=tmp->prev;
    }
     cout << " " <<tmp->value<<endl;
     cout << " " << max << " " << min;
}

void stack::maxim(){
    Unit* tmp = END;
    if(num==0){
        cout << " В стеке нет элементов" << endl;
    }
    else{
        max = tmp->value;
        while (tmp->prev!=nullptr){
            tmp=tmp->prev;
            if(tmp->value>max)
                max = tmp->value;
        }
    }
}

void stack::minim(){
    Unit* tmp = END;
    if(num==0){
        cout << " В стеке нет элементов" << endl;
    }
    else{
        min = tmp->value;
        while(tmp->prev!=nullptr){
            tmp=tmp->prev;
            if(tmp->value<min)
                min = tmp->value;
        }
    }
}

stack operator ++ (stack &tmp){// пре
    Unit *tmp_unit = tmp.END;
    tmp_unit->value+=tmp.max;
    while(tmp_unit->prev!=nullptr){
        tmp_unit=tmp_unit->prev;
        tmp_unit->value+=tmp.max;
    }
    int temp = tmp.max;
    tmp.max += temp;
    tmp.min += temp;
    return tmp;
}

stack operator ++ (stack &tmp, int){//пост
    Unit *tmp_unit = tmp.END;
    tmp_unit->value+=tmp.min;
    while(tmp_unit->prev!=nullptr){
        tmp_unit=tmp_unit->prev;
        tmp_unit->value+=tmp.min;
    }
    int temp = tmp.min;
    tmp.min += temp;
    tmp.max += temp;
    return tmp;
}

stack& stack::operator --(){//пре
    Unit *tmp = END;
    tmp->value-=max;
    while(tmp->prev!=nullptr){
        tmp=tmp->prev;
        tmp->value-=max;
    }
    int temp = max;
    max -= temp;
    min -= temp;
    return *this;
}

stack stack::operator--(int){//пост
    Unit *tmp = END;
    tmp->value-=min;
    while(tmp->prev!=nullptr){
        tmp=tmp->prev;
        tmp->value-=min;
    }
    int temp = min;
    min -= temp;
    max -= temp;
    return *this;
}

stack& stack::operator !(){//пре
    if(!num) cout << " В стеке нет элементов" << endl;
    else cout << " В стеке " << num << " элементов" << endl;
}
