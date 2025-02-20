#include"workermanager.h"
#include<iostream>
#include"worker.h"
#include"emplyee.h"
#include"manager.h"
#include"boss.h"



using namespace std;

int main()
{
	WorkerManager wm;
	int input = 0;
	while (true)
	{
		wm.show_menu();
		cout << "请输入选项：" << endl;
		cin >> input;
		switch (input)
		{
		case 0://退出系统
		{
			wm.exit_system();
			break;
		}
		case 1://增加职工信息
		{
			wm.addworker();
			break;
		}
		case 2://显示职工信息
		{
			break;
		}
		case 3://删除职工信息
		{
			break;
		}
		case 4://修改职工信息
		{
			break;
		}
		case 5://查找职工信息
		{
			break;
		}
		case 6://排序
		{
			break;
		}
		case 7://清除文档
		{
			break;
		}
		default:
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;
}