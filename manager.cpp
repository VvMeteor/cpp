#include"manager.h"
using namespace std;

//构造函数
manager::manager(int id, string name, int bid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_bmid = bid;
}

//显示个人信息
void manager::show_info()
{
	cout << "职工编号：" << m_id
		<< "\t职工姓名：" << m_name
		<< "\t职工岗位：" << get_job()
		<< "\t职工职责：完成老板派发的任务，并分配任务给普通员工" << endl;
}

//获取岗位信息
string manager::get_job()
{
	return "经理";
}