#pragma once
#include"worker.h"
using namespace std;

//老板类
class boss :public worker
{
public:
	//构造函数
	boss(int id, string name, int bid);

	//显示个人信息
	virtual void show_info();

	//获取岗位信息
	virtual string get_job();

};