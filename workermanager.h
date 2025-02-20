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

	//展示菜单
	void show_menu();

	//记录系统人数
	int m_num;

	//职工数组指针
	worker** m_arry;

	//判断文件是否存在
	bool m_fileisempty;

	//保存文件
	void save();

	//添加职工
	void addworker();
	
	//退出系统
	void exit_system();

	~WorkerManager();

};