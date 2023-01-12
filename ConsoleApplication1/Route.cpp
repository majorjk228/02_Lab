#include "Route.h"
#include <iostream>
#include <string>
#include <windows.h>    // ���������� ��� ������� �����������
using namespace std;

//����������� ��� ����������
Route::Route()
{
	SetConsoleCP(1251);         // ���� � ������� � ��������� 1251 ��� ������� �����������.
	SetConsoleOutputCP(1251);   // ����� �� ������� � ��������� 1251 ��� ������� �����������.

	from = "";
	to = "";
	time = 0;
	cout << "����������� ��� ���������� ��� �������" << this << endl;
}
//����������� � �����������
Route::Route(string N, string K, float S)
{
	from = N;
	to = K;
	time = S;
	cout << "Constructor s parametrami dlia objecta" << this << endl;
}
//����������� �����������
Route::Route(const Route& t)
{
	from = t.from;
	to = t.to;
	time = t.time;
	cout << "Constructor copirovania dlia objecta" << this << endl;
}
//����������
Route::~Route()
{
	cout << "Destructor dlia objecta" << this << endl;
}
//���������
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
//������������
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
//����� ��� ��������� ���������
void Route::show()
{
	cout << "Punkt_otpravki :" << from << endl;
	cout << "Punkt_pribitiya :" << to << endl;
	cout << "Vremya :" << time << endl;
}