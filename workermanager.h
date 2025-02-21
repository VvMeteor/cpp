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

	//统计文件打开时职工人数
	int get_num();

	//文件不为空时初始化职工数组指针
	void init_arry();

	//职工数组指针
	worker** m_arry;

	//判断文件是否存在
	bool m_fileisempty;

	//保存文件
	void save();

	//添加职工
	void addworker();

	//显示职工
	void show_worker();

	//删除职工
	void del_worker();

	//判断职工是否存在(存在返回位置，否则返回-1)
	int is_exist(int id);
	
	//退出系统
	void exit_system();

	~WorkerManager();

};