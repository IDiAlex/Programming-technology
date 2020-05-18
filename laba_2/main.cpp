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
        cout <<endl<< " Задание 1. Унарная операция. Работа со стеком целых чисел."<<endl;
        cout << " 1 - Ввести значения в стек"<<endl;
        cout << " 2 - Вывести элементы стека на экран"<<endl;
        cout << " 3 - Оператор ++ (префиксная форма, дружественная функция), увеличивает все значения в стеке на максимальное значение, которое в нем хранится"<<endl;
        cout << " 4 - Оператор ++ (постфиксная форма, дружественная функция), увеличивает все значения в стеке на минимальное значение, которое в нем хранится"<<endl;
        cout << " 5 - Оператор -- (префиксная форма, метод),уменьшает все значения в стеке на максимальное значение, которое в нем хранится"<<endl;
        cout << " 6 - Оператор -- (постфиксная форма, метод),уменьшает все значения в стеке на минимальное значение, которое в нем хранится"<<endl;
        cout << " 7 - Оператор !, проверяет стек на пустоту"<<endl;
        cout << " 0 - Переход ко второму заданию"<<endl;
        cout << endl << " Выберите действие: ";
        cin >> menu;

        switch(menu){
        case 1:
            element.nul_num();
            cout <<" Введите количество элементов в стеке: ";
            cin >> size;
            for(int i=0;i<size;i++){
                cout<<" Введите значение элемента стека. №"<<i<<": ";
                cin>>value;
                element.push(value);
            }
            element.maxim();
            element.minim();
            element.out();
            break;
        case 2:
            cout<<" Содержание стека: "; element.out();
            break;
        case 3:
            res_element = ++element;
            cout<<" Результат выполнения комманды: "; res_element.out();
            break;
        case 4:
            res_element = element++;
            cout<<" Результат выполнения комманды: "; res_element.out();
            break;
        case 5:
            res_element = --element;
            cout<<" Результат выполнения комманды: "; res_element.out();
            break;
        case 6:
            res_element = element--;
            cout<<" Результат выполнения комманды: "; res_element.out();
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
        cout <<endl<< " Задание 2. Бинарная операция. Работа с классом вещественных чисел."<<endl;
        cout << " 1 - Ввести вещественное значенеие для первого элемента"<<endl;
        cout << " 2 - Ввести вещественное значенеие для второго элемента"<<endl;
        cout << " 3 - Вывести элементы класса на экран"<<endl;
        cout << " 4 - Оператор - (метод)"<<endl;
        cout << " 5 - Оператор + (дружественная функция)"<<endl;
        cout << " 6 - Перегрузить <"<<endl;
        cout << " 7 - Перегрузить >"<<endl;
        cout << " 8 - Перегрузить !="<<endl;
        cout << " 9 - Перегрузить =="<<endl;
        cout << " 0 - Закончить работу программы";
        cout << endl << " Выберите действие: ";
        cin >> menu;
        switch(menu){
        case 1:
            cout << endl << " Введите значение первого элемента: ";
            cin >> x;
            object[0] = float_count(x);
            break;
        case 2:
            cout << endl << " Введите значение второго элемента: ";
            cin >> x;
            object[1] = float_count(x);
            break;
        case 3:
            cout << " Элемент №1: "; object[0].show(); cout << endl;
            cout << " Элемент №2: "; object[1].show(); cout << endl;
            break;
        case 4:
            cout << " Введите номер элемента, который будет уменьшаемым: " ;
            cin >> i;
            res_object = object[i-1] - object[2-i];
            cout << " Результат: ";
            res_object.show();
            break;
        case 5:
            res_object = object[0] + object[1];
            cout << " Результат: ";
            res_object.show();
            break;
        case 6:
            if(object[0] < object[1])
                cout << " Первый элемент меньше второго" << endl;
            else cout << " Первый элемент НЕ меньше второго" << endl;
            break;
        case 7:
            if(object[0] > object[1])
                cout << " Первый элемент больше второго" << endl;
            else cout << " Первый элемент НЕ больше второго" << endl;
            break;
        case 8:
            if(object[0] != object[1])
                cout << " Первый элемент не равен второму" << endl;
            else cout << " Первый элемент больше, меньше или равен второму(второго)" << endl;
            break;
        case 9:
            if(object[0] == object[1])
                cout << " Первый элемент равен второму" << endl;
            else cout << " Первый элемент НЕ равен второму" << endl;
            break;
        case 0:
            break;
        }
    }while((menu>0)&&(menu<10));
    return 0;
}
