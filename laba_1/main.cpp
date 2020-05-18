#include"Son.h"
#include"Queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
template <class tmpl>

void workWithClass(tmpl* queue){ //шаблон класса  для работы c разными наследниками в основной функции, передаём указатель на класс
    int number = 0;// Номер обрабатываемой очереди
    int count = 1;// Количество очередей с которыми работает пользователь
    int value, Menu, choise;

    do{
        cout << endl;
        cout << "Работа с очередью № " << number << endl;
        cout << "1 - Добавить новый элемент в текущую очередь" << endl;
        cout << "2 - Извлечь элемент из очереди" << endl;
        cout << "3 - Вывести текущую очередь на экран" << endl;
        cout << "4 - Найти первый элемент, который больше размаха (разности между максимальным и минимальным элементами)" << endl;
        cout << "5 - Создать копию текущей очереди" << endl;
        cout << "6 - Слияние очередей" << endl;
        cout << "7 - Выбрать другую очередь для работы" << endl;
        cout << "8 - Завершение работы" << endl;
        cout << endl<< "Выберите действие: " ;
        cin >> Menu;
        switch (Menu){
            case 1:
                cout << "Введите значение элемента: ";
                cin >> value;
                queue[number].push(value);  //внесение значения в очередь
                cout << "Элемент успешно добавлен" << endl;
                break;
            case 2:
                if (!queue[number].check()) break;  //проверка очереди
                value = queue[number].pop();   //извлечение из выбранной очереди
                cout << "Был извлечён элемент, стоящий первый в очереди: " << value << endl;
                break;
            case 3:
                if (!queue[number].check()) break;
                cout << "Текущая очередь: ";
                queue[number].out();  //вывод на экран выбранной очереди
                break;
            case 4:
                if (!queue[number].check()) break;
                    cout << "Результат выполнения действия: ";
                cout << queue[number].more_scope() << endl; //Задание
                break;
            case 5:
                if (!queue[number].check()) break;
                queue[count].copy(queue[number]);//копирование текущей очереди
                cout << "Номер, присваиваемый очереди: " << count++ << endl;
                break;
            case 6:
                if (count == 1){cout << "Невозможно выполнить действие, так как существует только одна очередь" << endl; break;}

                cout << "Выберите номер очереди для слияния (0 - " << count - 1 << ") :  ";
                cin >> choise;
                if ((choise < 0) || (choise == number) || (choise >= count)){
                    cout << "Некорректное значение. Объединение не произведено" << endl;
                    break;
                }
                queue[count].merger(queue[number], queue[choise]);//слияние 2х очередей
                cout << "Номер, присваиваемый очереди: " << count << endl;
                count++;
                break;

            case 7:
                if (count == 1){cout << "Невозможно выполнить действие, так как существует только одна очередь" << endl;break;}

                cout << "Выберите номер очереди, с которой хотите продолжать работу: (0 - " << count - 1 << ") :  ";
                cin >> choise;
                if ((choise < 0) || (choise == number) || (choise >= count))
                    cout << "Некорректное значение. Переключение не выполнено" << endl;
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
    cout << "Введите количество очередей, с которыми планируете работать, учитывая, что для копии и слияния каждый раз нужна новая" << endl;
    cin >> Number_Q;
    sub1* Object1=NULL;
    sub2* Object2=NULL;
    sub3* Object3=NULL;

    cout << "Выбирете тип наследования" << endl;
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
        default: cout << "некорректный ввод"; break;
    }
    return 0;
}
