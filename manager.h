#pragma once
#include"worker.h"
using namespace std;

//������
class manager :public worker
{
public:
	//���캯��
	manager(int id, string name, int bid);

	//��ʾ������Ϣ
	virtual void show_info();

	//��ȡ��λ��Ϣ
	virtual string get_job();

};