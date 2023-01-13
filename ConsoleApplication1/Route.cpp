#include "Route.h"
#include <iostream>
#include <string>
#include <windows.h>    // Библиотека для русской локализации

using namespace std;

//конструктор без параметров
Route::Route()
{

	from = "";
	to = "";
	time = 0;
	cout << "Конструктор без параметров для объекта" << this << endl;
}
//конструктор с параметрами
Route::Route(string N, string K, float S)
{
	from = N;
	to = K;
	time = S;
	cout << "Конструктор с параметрами для объекта" << this << endl;
}
//конструктор копирования
Route::Route(const Route& t)
{
	from = t.from;
	to = t.to;
	time = t.time;
	cout << "Конструктор копирования  для объекта" << this << endl;
}
//деструктор
Route::~Route()
{
	cout << "Деструктор для объекта" << this << endl;
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
//метод для просмотра атрибутов
void Route::show()
{
	cout << "Пункт отправки :" << from << endl;
	cout << "Пункт прибытия :" << to << endl;
	cout << "Время в пути :" << time << endl;
}