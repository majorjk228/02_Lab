// �������� ������
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Route
{
	//��������
	string from;						//����� �����������
	string to;							//����� ���������� 
	float time;							//����� � ����
public:
	Route();							//����������� ��� ����������
	Route(string, string, float);		//����������� � �����������
	Route(const Route&);				//����������� �����������
	~Route();							//����������
	string get_from();					//��������
	void set_from(string);				//�����������
	string get_to();					//��������
	void set_to(string);				//�����������
	float get_time();					//��������
	void set_time(float);				//�����������
	void show();						//�������� ���������
};
