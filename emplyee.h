#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"worker.h"
//��ͨԱ����

class emplyee :public worker
{
public:
	//���캯��
	emplyee(int id, string name, int bid);

	//��ʾ������Ϣ
	virtual void show_info();

	//��ȡ��λ��Ϣ
	virtual string get_job();

};



























































































#pragma once
