#include"emplyee.h"
using namespace std;

//���캯��
emplyee::emplyee(int id,string name,int bid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_bmid = bid;
}

//��ʾ������Ϣ
void emplyee::show_info()
{
	cout << "ְ����ţ�" << m_id
		<< "\tְ��������" << m_name
		<< "\tְ����λ��" << get_job()
		<< "\tְ��ְ����ɾ����ɷ�������" << endl;
}

//��ȡ��λ��Ϣ
string emplyee::get_job()
{
	return "Ա��";
}