#include"workermanager.h"
using namespace std;
#include"worker.h"

WorkerManager::WorkerManager()
{
	ifstream ifs(FILENAME, ios::in);
	if (!ifs.is_open())//�ļ�δ����
	{
		cout << "�ļ�������" << endl;
		//��ʼ������������ָ��
		this->m_num = 0;
		this->m_arry = NULL;
		this->m_fileisempty = true;
		ifs.close();
		return;
	}
	//�ļ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ�գ�" << endl;
		//��ʼ������������ָ��
		this->m_num = 0;
		this->m_arry = NULL;
		this->m_fileisempty = true;
		ifs.close();
		return;
	}
}
//չʾ�˵�
void WorkerManager::show_menu()
{
	cout << "****************************" << endl;
	cout << "**  ��ӭʹ��ְ������ϵͳ! **" << endl;
	cout << "****** 0.�˳�������� ******" << endl;
	cout << "****** 1.����ְ����Ϣ ******" << endl;
	cout << "****** 2.��ʾְ����Ϣ ******" << endl;
	cout << "****** 3.ɾ��ְ����Ϣ ******" << endl;
	cout << "****** 4.�޸�ְ����Ϣ ******" << endl;
	cout << "****** 5.����ְ����Ϣ ******" << endl;
	cout << "****** 6.���ձ������ ******" << endl;
	cout << "****** 7.��������ĵ� ******" << endl;
	cout << "****************************" << endl;

}
//���ְ��
void WorkerManager::addworker()
{
	cout << "��������Ҫ���ְ����������" << endl;
	int input = 0;
	cin >> input;
	if (input > 0)
	{
		//ʵ�����
		int newsize = m_num + input;
		worker** newspace = new worker * [newsize];

		if (m_arry != NULL)
		{
			for (int i = 0; i < m_num; ++i)
			{
				newspace[i] = m_arry[i];
			}
		}
		for (int j = 0; j < input; ++j)
		{
			int id;
			string name;
			int docid;

			cout << "������Ҫ��ӵĵ�" << j + 1 << "��ְ���ı��" << endl;
			cin >> id;

			cout << "������Ҫ��ӵĵ�" << j + 1 << "��ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> docid;

			worker* w = NULL;
			switch (docid)
			{
			case 1:
			{
				w = new emplyee(id, name, 1);
				break;
			}
			case 2:
			{
				w = new emplyee(id, name, 2);
				break;
			}
			case 3:
			{
				w = new emplyee(id, name, 3);
				break;
			}
			default:
			{
				break;
			}
			}
			//��¼ְ������ָ��
			newspace[m_num + j] = w;
		}
		//�ͷ�ԭ�пռ䲢�ı���ָ��,����ϵͳ����
		delete[] m_arry;
		m_arry = newspace;
		m_num = newsize;
		cout << "�ɹ����" << input << "��ְ��" << endl;
		m_fileisempty = false;
		this->save();
	}
	else
	{
		cout << "��������" << endl;
	}
	//�����������
	system("pause");
	system("cls");
}
//�������ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < m_num; i++)
	{
		ofs << m_arry[i]->m_id << " "
			<< m_arry[i]->m_name << " "
			<< m_arry[i]->m_bmid << " " << endl;
	}
	ofs.close();
}
//�˳�ϵͳ
void WorkerManager::exit_system()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);//�˳�����
}

WorkerManager::~WorkerManager()
{
	if (m_arry != NULL)
	{
		delete[] m_arry;
		m_arry = NULL;
	}
}