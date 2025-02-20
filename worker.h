#pragma once
#include<iostream>
#include<string>
using namespace std;
//职工抽象类（什么东西是普通职员，经理和老板所共有的，就写在这个父类，让子类去继承）
class worker
{
public:
	//显示个人信息
	virtual void show_info() = 0;
	
	//获取岗位信息
	virtual string get_job()= 0;
	
	//职工编号
	int m_id;

	//职工姓名
	string m_name;

	//部门编号
	int m_bmid;//1为普通员工，2为经理，3为老板
};