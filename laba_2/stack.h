#pragma once

struct Unit{
    int value=0;
    Unit *prev=nullptr;
};

class stack{
    public:
        stack();
        ~stack();
        void push(int value);//добавление нового значения в стек
        void nul_num();
        void out();
        friend stack operator ++(stack &tmp); //пре
        friend stack operator ++(stack &tmp,  int); //пост
        stack &operator --(); // пре
        stack operator--(int); //пост
        stack &operator !();//пре
        int get_value();
        void maxim();
        void minim();
    private:
        int num;
        Unit *END;// указатель на конец стека
        int max;
        int min;
};
