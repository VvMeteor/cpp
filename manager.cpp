#include"manager.h"
using namespace std;

//���캯��
manager::manager(int id, string name, int bid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_bmid = bid;
}

//��ʾ������Ϣ
void manager::show_info()
{
	cout << "ְ����ţ�" << m_id
		<< "\tְ��������" << m_name
		<< "\tְ����λ��" << get_job()
		<< "\tְ��ְ������ϰ��ɷ������񣬲������������ͨԱ��" << endl;
}

//��ȡ��λ��Ϣ
string manager::get_job()
{
	return "����";
}