#include"boss.h"
using namespace std;

//构造函数
boss::boss(int id, string name, int bid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_bmid = bid;
}

//显示个人信息
void boss::show_info()
{
	cout << "职工编号：" << m_id
		<< "\t职工姓名：" << m_name
		<< "\t职工岗位：" << get_job()
		<< "\t职工职责：管理公司所有事务" << endl;
}

//获取岗位信息
string boss::get_job()
{
	return "老板";
}