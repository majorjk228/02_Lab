#include "Route.h"
#include <iostream>
#include <string>
#include <windows.h>    // Ѕиблиотека дл€ русской локализации
using namespace std;

//конструктор без параметров
Route::Route()
{
	SetConsoleCP(1251);         // ¬вод с консоли в кодировке 1251 дл€ русской локализации.
	SetConsoleOutputCP(1251);   // ¬ывод на консоль в кодировке 1251 дл€ русской локализации.

	from = "";
	to = "";
	time = 0;
	cout << " онструктор без параметров дл€ объекта" << this << endl;
}
//конструктор с параметрами
Route::Route(string N, string K, float S)
{
	from = N;
	to = K;
	time = S;
	cout << "Constructor s parametrami dlia objecta" << this << endl;
}
//конструктор копировани€
Route::Route(const Route& t)
{
	from = t.from;
	to = t.to;
	time = t.time;
	cout << "Constructor copirovania dlia objecta" << this << endl;
}
//деструктор
Route::~Route()
{
	cout << "Destructor dlia objecta" << this << endl;
}
//селекторы
string Route::get_from()
{
	return from;
}
string Route::get_to()
{
	return to;
}
float Route::get_time()
{
	return time;
}
//модификаторы
void Route::set_from(string N)
{
	from = N;
}
void Route::set_to(string K)
{
	to = K;
}
void Route::set_time(float S)
{
	time = S;
}
//метод дл€ просмотра атрибутов
void Route::show()
{
	cout << "Punkt_otpravki :" << from << endl;
	cout << "Punkt_pribitiya :" << to << endl;
	cout << "Vremya :" << time << endl;
}