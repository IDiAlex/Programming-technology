#pragma once

struct Unit{
    int value=0;
    Unit *prev=nullptr;
};

class stack{
    public:
        stack();
        ~stack();
        void push(int value);//���������� ������ �������� � ����
        void nul_num();
        void out();
        friend stack operator ++(stack &tmp); //���
        friend stack operator ++(stack &tmp,  int); //����
        stack &operator --(); // ���
        stack operator--(int); //����
        stack &operator !();//���
        int get_value();
        void maxim();
        void minim();
    private:
        int num;
        Unit *END;// ��������� �� ����� �����
        int max;
        int min;
};
