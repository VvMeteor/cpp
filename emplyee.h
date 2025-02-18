#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"worker.h"
//普通员工类

class emplyee :public worker
{
public:
	//构造函数
	emplyee(int id, string name, int bid);

	//显示个人信息
	virtual void show_info();

	//获取岗位信息
	virtual string get_job();

};



























































































#pragma once
