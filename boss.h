#pragma once
#include"worker.h"
using namespace std;

//�ϰ���
class boss :public worker
{
public:
	//���캯��
	boss(int id, string name, int bid);

	//��ʾ������Ϣ
	virtual void show_info();

	//��ȡ��λ��Ϣ
	virtual string get_job();

};