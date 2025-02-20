#include"workermanager.h"
using namespace std;
#include"worker.h"

WorkerManager::WorkerManager()
{
	ifstream ifs(FILENAME, ios::in);
	if (!ifs.is_open())//文件未创建
	{
		cout << "文件不存在" << endl;
		//初始化人数和数组指针
		this->m_num = 0;
		this->m_arry = NULL;
		this->m_fileisempty = true;
		ifs.close();
		return;
	}
	//文件为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空！" << endl;
		//初始化人数和数组指针
		this->m_num = 0;
		this->m_arry = NULL;
		this->m_fileisempty = true;
		ifs.close();
		return;
	}
}
//展示菜单
void WorkerManager::show_menu()
{
	cout << "****************************" << endl;
	cout << "**  欢迎使用职工管理系统! **" << endl;
	cout << "****** 0.退出管理程序 ******" << endl;
	cout << "****** 1.增加职工信息 ******" << endl;
	cout << "****** 2.显示职工信息 ******" << endl;
	cout << "****** 3.删除职工信息 ******" << endl;
	cout << "****** 4.修改职工信息 ******" << endl;
	cout << "****** 5.查找职工信息 ******" << endl;
	cout << "****** 6.按照编号排序 ******" << endl;
	cout << "****** 7.清除所有文档 ******" << endl;
	cout << "****************************" << endl;

}
//添加职工
void WorkerManager::addworker()
{
	cout << "请输入需要添加职工的数量：" << endl;
	int input = 0;
	cin >> input;
	if (input > 0)
	{
		//实现添加
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

			cout << "请输入要添加的第" << j + 1 << "名职工的编号" << endl;
			cin >> id;

			cout << "请输入要添加的第" << j + 1 << "名职工的姓名" << endl;
			cin >> name;

			cout << "请选择该职工的岗位：" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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
			//记录职工类型指针
			newspace[m_num + j] = w;
		}
		//释放原有空间并改变其指向,更新系统人数
		delete[] m_arry;
		m_arry = newspace;
		m_num = newsize;
		cout << "成功添加" << input << "名职工" << endl;
		m_fileisempty = false;
		this->save();
	}
	else
	{
		cout << "输入有误！" << endl;
	}
	//按任意键清屏
	system("pause");
	system("cls");
}
//保存至文件
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
//退出系统
void WorkerManager::exit_system()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);//退出程序
}

WorkerManager::~WorkerManager()
{
	if (m_arry != NULL)
	{
		delete[] m_arry;
		m_arry = NULL;
	}
}