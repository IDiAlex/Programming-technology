#include <stdio.h>
#include "Son.h"
#include <iostream>

using namespace std;

int sub1:: more_scope(){
    int razmah=0;
    int max=0;
    int min=10000;
    int cnt_ex=0;
    Unit* last=get_last();
    int size_f=size;
    while (size_f>0){
        if ((last->value)>max)
            max=last->value;
        if ((last->value)<min)
            min=last->value;
        last=last->prev;
        size_f--;
    }
    size_f=size;
    last=get_last();
    razmah=max-min;
    while (size_f>0){
        if ((last->value)>razmah)
            cnt_ex=last->value;
        last=last->prev;
        size_f--;
    }
    return cnt_ex;
}

int sub2::more_scope(){
    int razmah=0;
    int max=0;
    int min=10000;
    int cnt_ex=0;
    Unit* last=get_last();
    int size_f=size;
    while (size_f>0){
        if ((last->value)>max)
            max=last->value;
        if ((last->value)<min)
            min=last->value;
        last=last->prev;
        size_f--;
    }
    size_f=size;
    last=get_last();
    razmah=max-min;
    while (size_f>0){
        if ((last->value)>razmah)
        cnt_ex=last->value;
        last=last->prev;
        size_f--;
    }
    return cnt_ex;
}

int sub2::pop(){return Queue::pop();}

void sub2::push(int Value){return Queue::push(Value);}

void sub2::out(){return Queue::out();}

void sub2::copy(sub2& ob){return Queue::copy(ob);}

void sub2::merger(sub2& ob1, sub2& ob2){return Queue::merger(ob1, ob2);}

bool sub2::check(){return Queue::check();}


int sub3::more_scope(){
    int razmah=0;
    int max=0;
    int min=10000;
    int cnt_ex=0;
    Unit* last=get_last();
    int size_f=size;
    while (size_f>0){
        if ((last->value)>max)
            max=last->value;
        if ((last->value)<min)
            min=last->value;
        last=last->prev;
        size_f--;
    }
    size_f=size;
    last=get_last();
    razmah=max-min;
    while (size_f>0){
        if ((last->value)>razmah)
            cnt_ex=last->value;
        last=last->prev;
        size_f--;
    }
    return cnt_ex;
}

int sub3::pop(){return Queue::pop();}

void sub3::push(int Value){return Queue::push(Value);}

void sub3::out(){return Queue::out();}

void sub3::copy(sub3& ob){return Queue::copy(ob);}

void sub3::merger(sub3 &ob1, sub3 &ob2){return Queue::merger(ob1, ob2);}

bool sub3::check(){return Queue::check();}
