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

	//ͳ���ļ���ʱְ������
	int get_num();

	//�ļ���Ϊ��ʱ��ʼ��ְ������ָ��
	void init_arry();

	//ְ������ָ��
	worker** m_arry;

	//�ж��ļ��Ƿ����
	bool m_fileisempty;

	//�����ļ�
	void save();

	//���ְ��
	void addworker();

	//��ʾְ��
	void show_worker();

	//ɾ��ְ��
	void del_worker();

	//�ж�ְ���Ƿ����(���ڷ���λ�ã����򷵻�-1)
	int is_exist(int id);
	
	//�˳�ϵͳ
	void exit_system();

	~WorkerManager();

};