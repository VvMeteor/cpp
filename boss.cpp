#include"boss.h"
using namespace std;

//���캯��
boss::boss(int id, string name, int bid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_bmid = bid;
}

//��ʾ������Ϣ
void boss::show_info()
{
	cout << "ְ����ţ�" << m_id
		<< "\tְ��������" << m_name
		<< "\tְ����λ��" << get_job()
		<< "\tְ��ְ�𣺹���˾��������" << endl;
}

//��ȡ��λ��Ϣ
string boss::get_job()
{
	return "�ϰ�";
}