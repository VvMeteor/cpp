#include<iostream>
#include<string>
using namespace std;

//int main()
//{
//	cout << "hello world!" << endl;
//	int a = 10;
//	cout << "a=" << a << endl;
//
//	//单精度float和双精度double，输出小数默认最多6位有效数字
//	float f1 = 3.1415926f;//编译器默认小数为双精度，加f转化，不加也没问题，float会起作用
//	cout << "f1=" << f1 << endl;
//
//	//科学计数法
//	float b = 3e2;//等效于3*10^2=300
//	cout << "b=" << b << endl;
//
//	//常用的转义字符
//	cout << "hehe\n";
//	cout << "hahaha\taaaaa" << endl;//\t加上前面字符串一共8个空格位，用于水平制表
//	cout << "haha\tbbbbb" << endl;
//	cout << "hahaha\tcccc" << endl;
//	cout << "\\" << endl;
//
//	return 0;
//}

//输出字符串
//int main()
//{
//	//c语言风格
//	char str[] = "hello world!";
//	cout << str << endl;
//	//c++分格,需要引入头文件<string>
//	string str1 = "hello world!";
//	cout << str1 << endl;
//	return 0;
//}

//布尔类型
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;
//	flag = false;
//	cout << flag << endl;
//	cout << "bool类型的大小是：" << sizeof(bool) << endl;
//	return 0;
//}

//输入数据
//int  main()
//{
//	int a = 0;
//	cout << "请输入a的值：" << endl;
//	cin >> a;
//	cout << "变量a的值为：" << a<<endl;
//
//	string str = "";
//	cin >> str;
//	cout << str << endl;
//	return 0;
//}

//三个小猪称体重

//int main()
//{
//	int pig1w = 0;
//	int pig2w = 0;
//	int pig3w = 0;
//	cin >> pig1w;
//	cin >> pig2w;
//	cin >> pig3w;
//
//	int maxweight = pig1w;
//	if (pig2w >= maxweight)
//	{
//		if (pig2w >= pig3w)
//		{
//			maxweight = pig2w;
//		}
//		else
//		{
//			maxweight = pig3w;
//		}
//	}
//	else if (pig3w >= maxweight)
//	{
//		maxweight = pig3w;
//	}
//	cout << maxweight << endl;
//}

//猜数字
//#include<cstdlib>
//#include<ctime>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a = 0;
//	a = rand() % 100 + 1;
//	int b = 0;
//	while (1)
//	{
//		cout << "猜数字：" << endl;
//		cin >> b;
//		if (a == b)
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//		else if (a > b)
//		{
//			cout << "猜小了" << endl;
//		}
//		else
//		{
//			cout << "猜大了" << endl;
//		}
//	}
//	return 0;
//}

//找出三位数的水仙花数
//#include<cmath>
//int main()
//{
//	int i = 100;
//	double sum = 0;
//	do
//	{
//		int a = i % 10;
//		int b = (i / 10) % 10;
//		int c = (i / 100) % 10;
//
//		double sum = pow(a, 3)+pow(b, 3)+ pow(c, 3);
//		if (sum == i)
//		{
//			cout << i <<" ";
//		}
//		i++;
//	} while (i < 1000);
//}

//敲桌子

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
//		{
//			cout << "敲桌子" << endl;
//			continue;
//		}
//		cout << i << endl;
//	}
//	return 0;
//}

//乘法口诀表
//#include <iomanip>
//int  main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << i << "*" << j << "=" << i * j << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//数组

//int main()
//{
//	int arr[10];
//	cout << arr << endl;//输出数组首元素地址
//	cout << &arr[0] << endl;
//	return 0;
//}

//数组元素逆置

//int main()
//{
//	int arr[5] = { 2,5,4,3,1 };
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++,right--;
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//数组元素排序

//int main()
//{
//	int arr[] = { 5,3,7,1,5,6,4,9,2,0,4,1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size - 1; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				count = 1;
//			}
//		}
//		if (count == 0)
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//指针

//int main()
//{
//	//空指针指向编号为0的内存空间
//	int* p = NULL;
//	//0~255为系统占用，不可访问
//	//野指针
//	int* p = (int*)0x11456;
//	//空指针和野指针都不能访问
//	//常量指针
//	int a = 0;
//	const int* p1 = &a;
//	//指针指向可以改变,指向值不能改变
//	//指针常量
//	int b = 0;
//	int* const p = &b;
//	//指针指向不能变，指向值可以改变
//	return 0;
//}

//嵌套结构体
//typedef struct student {
//	string name;
//	int age;
//}stu;
//typedef struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student s1;
//}tcher;
//int main()
//{
//	string tname = "teacher_";
//	tname += "A";//字符串直接追加
//	cout << tname << endl;
//	tcher t1;
//	t1.id = 0000012;
//	t1.age = 46;
//	t1.name = "老王";
//	t1.s1.age = 15;
//	t1.s1.name = "小明";
//	tcher t2 = { 0000013,"李",34,{"小刚",16} };
//	cout << "老师名字为：" << t2.name<<" "<< "老师学生姓名为：" << t2.s1.name << endl;
//	return 0;
//}

//排序结构体元素

//struct hero
//{
//	string name;
//	int age;
//};
//int main()
//{
//	struct hero h1[] = { 
//		{"liubei",23},
//		{"guanyu",22},
//		{"zhangfei",20},
//		{"zhaoyun",21},
//		{"diaochan",19} 
//	};
//	for (int i = 0; i < 5 - 1; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < 5 - 1 - i; j++)
//		{
//			if (h1[j].age > h1[j + 1].age)
//			{
//				struct hero tmp = h1[j];
//				h1[j]= h1[j + 1];
//				h1[j + 1]= tmp;
//				count = 1;
//			}
//		}
//		if (count == 0)
//		{
//			break;
//		}
//	}
//	for (int n = 0; n < 5; n++)
//	{
//		cout << h1[n].name << " " << h1[n].age<<" ";
//	}
//	return 0;
//}

//通讯录

#include<iostream>
#include<string>
#include<cassert>
using namespace std;

#define MAX 1000

//联系人结构体
typedef struct person
{
	string name;
	int sex;//1-男；2-女
	int age;
	string tel;
	string place;
}person;

//通讯录结构体
typedef struct conotact
{
	person peo[MAX];
	int count;
}contact;

//显示菜单
void showmenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空通讯录 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

//添加联系人
void addperson(contact* con)
{
	assert(con);
	if (con->count == MAX)
	{
		cout << "通讯录已满，无法添加联系人！" << endl;
		return;
	}
	else
	{
		//输入姓名
		cout << "请输入联系人姓名：" << endl;
		cin >> (con->peo[con->count]).name;
		//输入性别
		while (1)
		{
			cout << "请输入联系人性别：" << endl;
			cout << "1-男;2-女" << endl;
			cin >> (con->peo[con->count]).sex;
			if ((con->peo[con->count]).sex != 1 && con->peo[con->count].sex != 2)
			{
				cout << "输入有误，请重新输入性别！" << endl;
			}
			else {
				break;
			}
		}
		//输入年龄
		while (1)
		{
			cout << "请输入联系人年龄：" << endl;
			cin >> con->peo[con->count].age;
			if (cin.fail()) {
				// 清除错误标志
				cin.clear();
				// 忽略错误输入直到下一个换行符
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "输入有误，请输入一个有效的数字年龄！" << endl;
			}
			else if ((con->peo[con->count]).age <= 0 || (con->peo[con->count]).age > 100)
			{
				cout << "输入有误，请重新输入年龄！" << endl;
			}
			else {
				break;
			}
		}
		//输入电话
		cout << "请输入联系人号码：" << endl;
		cin >> (con->peo[con->count]).tel;
		//输入住址
		cout << "请输入联系人住址：" << endl;
		cin >> (con->peo[con->count]).place;
		//更新通讯录人数
		con->count++;
		cout << "添加联系人成功！" << endl;
		//清屏操作
		system("pause");
		system("cls");
	}
}

//显示联系人
void showperson(contact* con)
{
	assert(con);
	if (con->count == 0)
	{
		cout << "当前通讯录为空。" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < con->count; i++)
		{
			cout << "姓名：" << con->peo[i].name << "\t";
			cout << "性别：" << (con->peo[i].sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << con->peo[i].age << "\t";
			cout << "电话：" << con->peo[i].tel << "\t";
			cout << "住址：" << con->peo[i].place << "\t";
			cout << endl;
		}
	}
	system("pause");
	system("cls");
}

//查询联系人是否存在
int isexist(contact* con, string name)
{
	assert(con);
	for (int i = 0; i < con->count; i++)
	{
		if (con->peo[i].name == name)
		{
			return i;
		}
	}
	return -1;
}

//删除联系人
void delperson(contact* con, int ret, string name)
{
	assert(con);
	for (int i = ret; i < con->count; i++)
	{
		con->peo[i].name = con->peo[i + 1].name;
	}
	con->count--;
	cout << "删除联系人成功！" << endl;
	system("pause");
	system("cls");
}

//查找联系人
void findperson(contact* con)
{
	string name;
	cout << "请输入查找联系人姓名：" << endl;
	cin >> name;
	int ret = isexist(con, name);
	if (ret == -1)
	{
		cout << "联系人不存在！" << endl;
	}
	else
	{
		cout << "姓名：" << con->peo[ret].name << "\t";
		cout << "性别：" << (con->peo[ret].sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << con->peo[ret].age << "\t";
		cout << "电话：" << con->peo[ret].tel << "\t";
		cout << "住址：" << con->peo[ret].place << "\t";
		cout << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人
void modifyperson(contact* con)
{
	assert(con);
	string name;
	cout << "请输入修改联系人姓名：" << endl;
	cin >> name;
	int ret = isexist(con, name);
	if (ret == -1)
	{
		cout << "联系人不存在！" << endl;
	}
	else
	{
		//输入姓名
		cout << "请输入联系人姓名：" << endl;
		cin >> (con->peo[ret]).name;
		//输入性别
		while (1)
		{
			cout << "请输入联系人性别：" << endl;
			cout << "1-男;2-女" << endl;
			cin >> (con->peo[ret]).sex;
			if ((con->peo[ret]).sex != 1 && con->peo[ret].sex != 2)
			{
				cout << "输入有误，请重新输入性别！" << endl;
			}
			else {
				break;
			}
		}
		//输入年龄
		while (1)
		{
			cout << "请输入联系人年龄：" << endl;
			cin >> con->peo[ret].age;
			if (cin.fail()) {
				// 清除错误标志
				cin.clear();
				// 忽略错误输入直到下一个换行符
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "输入有误，请输入一个有效的数字年龄！" << endl;
			}
			else if ((con->peo[ret]).age <= 0 || (con->peo[ret]).age > 100)
			{
				cout << "输入有误，请重新输入年龄！" << endl;
			}
			else {
				break;
			}
		}
		//输入电话
		cout << "请输入联系人号码：" << endl;
		cin >> (con->peo[ret]).tel;
		//输入住址
		cout << "请输入联系人住址：" << endl;
		cin >> (con->peo[ret]).place;
	}
	system("pause");
	system("cls");
}

//清空联系人
void cleancon(contact* con)
{
	assert(con);
	int input = 0;
	cout << "是否要清空通讯录？（1.YES/0.NO）"<<endl;
	cin >> input;
	if (input)
	{
		con->count = 0;
		cout << "通讯录已清空。" << endl;
	}
	system("pause");
	system("cls");
}

int main()
{
	contact con;
	con.count = 0;
	int input = 0;
	while (1)
	{
		showmenu();
		cout << "请选择功能：" << endl;
		cin >> input;
		switch(input)
		{
		case 1://添加联系人
			addperson(&con);
			break;
		case 2://显示联系人
			showperson(&con);
			break;
		case 3://删除联系人
		{
			cout << "请输入要删除的联系人：" << endl;
			string name;
			cin >> name;
			if (isexist(&con, name) == -1)
			{
				cout << "联系人不存在！" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				delperson(&con, isexist(&con, name), name);
			}
			break;
		}
		case 4://查找联系人
		{
			findperson(&con);
			break;
		}
		case 5://修改联系人
		{
			modifyperson(&con);
			break;
		}
		case 6://清空通讯录
			cleancon(&con);
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return  0;
		default://选择错误
			cout << "选择错误，请重新输入！" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
