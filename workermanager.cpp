#include"workermanager.h"
using namespace std;
#include"worker.h"

//统计文件打开时的人数
int WorkerManager::get_num()
{
	ifstream ifs(FILENAME, ios::in);
	string s;
	int num = 0;
	while (getline(ifs, s))
	{
		num++;
	}
	return num;
}
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
	//文件不为空
	m_num = get_num();
	//cout << "职工人数为" << m_num << "人" << endl;
	//开辟空间并导入数据
	this->m_arry = new worker* [m_num];
	this->init_arry();

}
//初始化文件不为空时的数据
void WorkerManager::init_arry()
{
	ifstream ifs(FILENAME, ios::in);
	int id;
	string name;
	int did;

	int i = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* w = NULL;
		if (did == 1)
		{
			w = new emplyee(id, name, 1);
		}
		else if (did == 2)
		{
			w = new manager(id, name, 2);
		}
		else if (did == 3)
		{
			w = new boss(id, name, 3);
		}
		this->m_arry[i] = w;
		i++;
	}
	ifs.close();
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
//显示职工
void WorkerManager::show_worker()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或数据为空" << endl;
	}
	else
	{
		for (int i = 0; i < m_num; i++)
		{
			m_arry[i]->show_info();
		}
	}
	//按任意键清屏
	system("pause");
	system("cls");
}
//删除职工
void WorkerManager::del_worker()
{
	if (m_fileisempty)
	{
		cout << "文件不存在或数据为空，删除失败" << endl;
	}
	else
	{
		cout << "请输入要删除的职工编号：" << endl;
		int id = 0;
		cin >> id;
		if (is_exist(id) != -1)
		{
			for (int i = is_exist(id); i < m_num - 1; i++)
			{
				//数据前移
				m_arry[i] = m_arry[i + 1];
			}
			cout << "删除成功" << endl;
			//更新人数
			m_num--;
			this->save();
		}
		else
		{
			cout << "无法找到该职工，删除失败" << endl;
		}
		//按任意键清屏
		system("pause");
		system("cls");
	}
}

//判断职工是否存在
int WorkerManager::is_exist(int id)
{
	int index = -1;
	for (int i = 0; i < m_num; i++)
	{
		if (m_arry[i]->m_id == id)
		{
			index = i;
			break;
		}
	}
	return index;
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