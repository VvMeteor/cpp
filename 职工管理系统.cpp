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
		cout << "������ѡ�" << endl;
		cin >> input;
		switch (input)
		{
		case 0://�˳�ϵͳ
		{
			wm.exit_system();
			break;
		}
		case 1://����ְ����Ϣ
		{
			wm.addworker();
			break;
		}
		case 2://��ʾְ����Ϣ
		{
			wm.show_worker();
			break;
		}
		case 3://ɾ��ְ����Ϣ
		{
			wm.del_worker();
			break;
		}
		case 4://�޸�ְ����Ϣ
		{
			wm.mod_worker();
			break;
		}
		case 5://����ְ����Ϣ
		{
			wm.find_worker();
			break;
		}
		case 6://����
		{
			wm.sort_worker();
			break;
		}
		case 7://����ĵ�
		{
			wm.clean_worker();
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