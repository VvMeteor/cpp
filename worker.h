#pragma once
#include<iostream>
#include<string>
using namespace std;
//ְ�������ࣨʲô��������ְͨԱ��������ϰ������еģ���д��������࣬������ȥ�̳У�
class worker
{
public:
	//��ʾ������Ϣ
	virtual void show_info() = 0;
	
	//��ȡ��λ��Ϣ
	virtual string get_job()= 0;
	
	//ְ�����
	int m_id;

	//ְ������
	string m_name;

	//���ű��
	int m_bmid;//1Ϊ��ͨԱ����2Ϊ����3Ϊ�ϰ�
};