#include <stack.h>
#include <float_count.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Rus");
    system("color F0");
    int menu=0, value=0, size=0;
    stack element, res_element;
    do{
        cout <<endl<< " ������� 1. ������� ��������. ������ �� ������ ����� �����."<<endl;
        cout << " 1 - ������ �������� � ����"<<endl;
        cout << " 2 - ������� �������� ����� �� �����"<<endl;
        cout << " 3 - �������� ++ (���������� �����, ������������� �������), ����������� ��� �������� � ����� �� ������������ ��������, ������� � ��� ��������"<<endl;
        cout << " 4 - �������� ++ (����������� �����, ������������� �������), ����������� ��� �������� � ����� �� ����������� ��������, ������� � ��� ��������"<<endl;
        cout << " 5 - �������� -- (���������� �����, �����),��������� ��� �������� � ����� �� ������������ ��������, ������� � ��� ��������"<<endl;
        cout << " 6 - �������� -- (����������� �����, �����),��������� ��� �������� � ����� �� ����������� ��������, ������� � ��� ��������"<<endl;
        cout << " 7 - �������� !, ��������� ���� �� �������"<<endl;
        cout << " 0 - ������� �� ������� �������"<<endl;
        cout << endl << " �������� ��������: ";
        cin >> menu;

        switch(menu){
        case 1:
            element.nul_num();
            cout <<" ������� ���������� ��������� � �����: ";
            cin >> size;
            for(int i=0;i<size;i++){
                cout<<" ������� �������� �������� �����. �"<<i<<": ";
                cin>>value;
                element.push(value);
            }
            element.maxim();
            element.minim();
            element.out();
            break;
        case 2:
            cout<<" ���������� �����: "; element.out();
            break;
        case 3:
            res_element = ++element;
            cout<<" ��������� ���������� ��������: "; res_element.out();
            break;
        case 4:
            res_element = element++;
            cout<<" ��������� ���������� ��������: "; res_element.out();
            break;
        case 5:
            res_element = --element;
            cout<<" ��������� ���������� ��������: "; res_element.out();
            break;
        case 6:
            res_element = element--;
            cout<<" ��������� ���������� ��������: "; res_element.out();
            break;
        case 7:
            !element;
            break;
        case 0:
            break;
        }
    }while((menu>0)&&(menu<8));

    float_count *object = new float_count[2];
    float_count res_object;
    int x, i;
    do{
        cout <<endl<< " ������� 2. �������� ��������. ������ � ������� ������������ �����."<<endl;
        cout << " 1 - ������ ������������ ��������� ��� ������� ��������"<<endl;
        cout << " 2 - ������ ������������ ��������� ��� ������� ��������"<<endl;
        cout << " 3 - ������� �������� ������ �� �����"<<endl;
        cout << " 4 - �������� - (�����)"<<endl;
        cout << " 5 - �������� + (������������� �������)"<<endl;
        cout << " 6 - ����������� <"<<endl;
        cout << " 7 - ����������� >"<<endl;
        cout << " 8 - ����������� !="<<endl;
        cout << " 9 - ����������� =="<<endl;
        cout << " 0 - ��������� ������ ���������";
        cout << endl << " �������� ��������: ";
        cin >> menu;
        switch(menu){
        case 1:
            cout << endl << " ������� �������� ������� ��������: ";
            cin >> x;
            object[0] = float_count(x);
            break;
        case 2:
            cout << endl << " ������� �������� ������� ��������: ";
            cin >> x;
            object[1] = float_count(x);
            break;
        case 3:
            cout << " ������� �1: "; object[0].show(); cout << endl;
            cout << " ������� �2: "; object[1].show(); cout << endl;
            break;
        case 4:
            cout << " ������� ����� ��������, ������� ����� �����������: " ;
            cin >> i;
            res_object = object[i-1] - object[2-i];
            cout << " ���������: ";
            res_object.show();
            break;
        case 5:
            res_object = object[0] + object[1];
            cout << " ���������: ";
            res_object.show();
            break;
        case 6:
            if(object[0] < object[1])
                cout << " ������ ������� ������ �������" << endl;
            else cout << " ������ ������� �� ������ �������" << endl;
            break;
        case 7:
            if(object[0] > object[1])
                cout << " ������ ������� ������ �������" << endl;
            else cout << " ������ ������� �� ������ �������" << endl;
            break;
        case 8:
            if(object[0] != object[1])
                cout << " ������ ������� �� ����� �������" << endl;
            else cout << " ������ ������� ������, ������ ��� ����� �������(�������)" << endl;
            break;
        case 9:
            if(object[0] == object[1])
                cout << " ������ ������� ����� �������" << endl;
            else cout << " ������ ������� �� ����� �������" << endl;
            break;
        case 0:
            break;
        }
    }while((menu>0)&&(menu<10));
    return 0;
}
