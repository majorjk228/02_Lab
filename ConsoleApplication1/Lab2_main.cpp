// Лабораторная работа №2, Вариант 3 (2 семестр).
//

#include "Route.h"
#include <iostream>
#include <string>
#include <windows.h>    // Библиотека для русской локализации
using namespace std;

//функция для возврата объекта как результата
Route make_tovar()
{
	string s;
	string i;
	float d;
	cout << "\n";
	cout << "Введите пункт отправления: ";
	cin >> s;
	cout << "Введите пункт прибытия: ";
	cin >> i;
	cout << "Введите время в пути: ";
	cin >> d;
	Route t(s, i, d);
	return t;
}
//функция для передачи объекта как параметра
void print_tovar(Route t)
{
	t.show();
}
void main()
{
	setlocale(LC_ALL, "Russian");

	//конструктор без параметров
	Route t1;
	t1.show();
	//коструктор с параметрами
	Route t2("Perm", "Moscow", 2.05);
	t2.show();
	//конструктор копирования
	Route t3 = t2;
	t3.set_from("Ekaterinburg");
	t3.set_to("Samara");
	t3.set_time(1.55);
	//конструктор копирования
	print_tovar(t3);
	//конструктор копирования
	t1 = make_tovar();
	t1.show();
}
