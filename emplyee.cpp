#include"emplyee.h"
using namespace std;

//构造函数
emplyee::emplyee(int id,string name,int bid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_bmid = bid;
}

//显示个人信息
void emplyee::show_info()
{
	cout << "职工编号：" << m_id
		<< "\t职工姓名：" << m_name
		<< "\t职工岗位：" << get_job()
		<< "\t职工职责：完成经理派发的任务" << endl;
}

//获取岗位信息
string emplyee::get_job()
{
	return "员工";
}