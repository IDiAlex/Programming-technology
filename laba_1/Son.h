#pragma once

#include"Queue.h"

class sub1 : public Queue{
    public:
        int more_scope();
};

class sub2 : protected Queue{
    public:
        void push(int data);//добавление элемента в очередь
        int pop();// извлечения элемента
        void out();// вывод на экран
        void copy(sub2& ob);// Копирование очереди
        void merger(sub2& ob1, sub2& ob2);
        bool check();//Проверяем пуста ли очередь
        int more_scope();
};

class sub3 : private Queue{
    public:
        void push(int data);
        int pop();
        void out();
        void copy(sub3& ob);
        void merger(sub3& ob1, sub3& ob2);
        bool check();
        int more_scope();
};
