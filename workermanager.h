#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
#include"emplyee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>

#define FILENAME "worker.text"

class WorkerManager
{
public:
	WorkerManager();

	//չʾ�˵�
	void show_menu();

	//��¼ϵͳ����
	int m_num;

	//ְ������ָ��
	worker** m_arry;

	//�ж��ļ��Ƿ����
	bool m_fileisempty;

	//�����ļ�
	void save();

	//���ְ��
	void addworker();
	
	//�˳�ϵͳ
	void exit_system();

	~WorkerManager();

};