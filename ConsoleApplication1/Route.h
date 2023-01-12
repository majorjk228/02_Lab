// Описание класса
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Route
{
	//атрибуты
	string from;						//пункт отправления
	string to;							//пункт назначения 
	float time;							//время в пути
public:
	Route();							//конструктор без параметров
	Route(string, string, float);		//конструктор с параметрами
	Route(const Route&);				//конструктор копирования
	~Route();							//деструктор
	string get_from();					//селектор
	void set_from(string);				//модификатор
	string get_to();					//селектор
	void set_to(string);				//модификатор
	float get_time();					//селектор
	void set_time(float);				//модификатор
	void show();						//просмотр атрибутов
};
