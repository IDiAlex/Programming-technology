#include"Son.h"
#include"Queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
template <class tmpl>

void workWithClass(tmpl* queue){ //������ ������  ��� ������ c ������� ������������ � �������� �������, ������� ��������� �� �����
    int number = 0;// ����� �������������� �������
    int count = 1;// ���������� �������� � �������� �������� ������������
    int value, Menu, choise;

    do{
        cout << endl;
        cout << "������ � �������� � " << number << endl;
        cout << "1 - �������� ����� ������� � ������� �������" << endl;
        cout << "2 - ������� ������� �� �������" << endl;
        cout << "3 - ������� ������� ������� �� �����" << endl;
        cout << "4 - ����� ������ �������, ������� ������ ������� (�������� ����� ������������ � ����������� ����������)" << endl;
        cout << "5 - ������� ����� ������� �������" << endl;
        cout << "6 - ������� ��������" << endl;
        cout << "7 - ������� ������ ������� ��� ������" << endl;
        cout << "8 - ���������� ������" << endl;
        cout << endl<< "�������� ��������: " ;
        cin >> Menu;
        switch (Menu){
            case 1:
                cout << "������� �������� ��������: ";
                cin >> value;
                queue[number].push(value);  //�������� �������� � �������
                cout << "������� ������� ��������" << endl;
                break;
            case 2:
                if (!queue[number].check()) break;  //�������� �������
                value = queue[number].pop();   //���������� �� ��������� �������
                cout << "��� �������� �������, ������� ������ � �������: " << value << endl;
                break;
            case 3:
                if (!queue[number].check()) break;
                cout << "������� �������: ";
                queue[number].out();  //����� �� ����� ��������� �������
                break;
            case 4:
                if (!queue[number].check()) break;
                    cout << "��������� ���������� ��������: ";
                cout << queue[number].more_scope() << endl; //�������
                break;
            case 5:
                if (!queue[number].check()) break;
                queue[count].copy(queue[number]);//����������� ������� �������
                cout << "�����, ������������� �������: " << count++ << endl;
                break;
            case 6:
                if (count == 1){cout << "���������� ��������� ��������, ��� ��� ���������� ������ ���� �������" << endl; break;}

                cout << "�������� ����� ������� ��� ������� (0 - " << count - 1 << ") :  ";
                cin >> choise;
                if ((choise < 0) || (choise == number) || (choise >= count)){
                    cout << "������������ ��������. ����������� �� �����������" << endl;
                    break;
                }
                queue[count].merger(queue[number], queue[choise]);//������� 2� ��������
                cout << "�����, ������������� �������: " << count << endl;
                count++;
                break;

            case 7:
                if (count == 1){cout << "���������� ��������� ��������, ��� ��� ���������� ������ ���� �������" << endl;break;}

                cout << "�������� ����� �������, � ������� ������ ���������� ������: (0 - " << count - 1 << ") :  ";
                cin >> choise;
                if ((choise < 0) || (choise == number) || (choise >= count))
                    cout << "������������ ��������. ������������ �� ���������" << endl;
                else number = choise;
            }
    } while (Menu<8);
}

int main(){
    setlocale(LC_ALL, "Rus");
    system("color F0");
    int Number_Q=0;
    int Type_son;
    int guide;
    cout << "������� ���������� ��������, � �������� ���������� ��������, ��������, ��� ��� ����� � ������� ������ ��� ����� �����" << endl;
    cin >> Number_Q;
    sub1* Object1=NULL;
    sub2* Object2=NULL;
    sub3* Object3=NULL;

    cout << "�������� ��� ������������" << endl;
    cout << "1 - Public" << endl;
    cout << "2 - Protected" << endl;
    cout << "3 - Private" << endl;
    cin  >> Type_son;

    switch (Type_son){
        case 1:
            Object1 = new sub1[Number_Q];
            workWithClass(Object1);
            delete[] Object1;
            break;
        case 2:
            Object2 = new sub2[Number_Q];
            workWithClass(Object2);
            delete[] Object2;
            break;
        case 3:
            Object3 = new sub3[Number_Q];
            workWithClass(Object3);
            delete[] Object3;
            break;
        default: cout << "������������ ����"; break;
    }
    return 0;
}
