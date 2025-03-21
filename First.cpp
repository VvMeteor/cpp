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

//#include<iostream>
//#include<string>
//#include<cassert>
//using namespace std;
//
//#define MAX 1000
//
////联系人结构体
//typedef struct person
//{
//	string name;
//	int sex;//1-男；2-女
//	int age;
//	string tel;
//	string place;
//}person;
//
////通讯录结构体
//typedef struct conotact
//{
//	person peo[MAX];
//	int count;
//}contact;
//
////显示菜单
//void showmenu()
//{
//	cout << "************************" << endl;
//	cout << "***** 1.添加联系人 *****" << endl;
//	cout << "***** 2.显示联系人 *****" << endl;
//	cout << "***** 3.删除联系人 *****" << endl;
//	cout << "***** 4.查找联系人 *****" << endl;
//	cout << "***** 5.修改联系人 *****" << endl;
//	cout << "***** 6.清空通讯录 *****" << endl;
//	cout << "***** 0.退出通讯录 *****" << endl;
//	cout << "************************" << endl;
//}
//
////添加联系人
//void addperson(contact* con)
//{
//	assert(con);
//	if (con->count == MAX)
//	{
//		cout << "通讯录已满，无法添加联系人！" << endl;
//		return;
//	}
//	else
//	{
//		//输入姓名
//		cout << "请输入联系人姓名：" << endl;
//		cin >> (con->peo[con->count]).name;
//		//输入性别
//		while (1)
//		{
//			cout << "请输入联系人性别：" << endl;
//			cout << "1-男;2-女" << endl;
//			cin >> (con->peo[con->count]).sex;
//			if ((con->peo[con->count]).sex != 1 && con->peo[con->count].sex != 2)
//			{
//				cout << "输入有误，请重新输入性别！" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//输入年龄
//		while (1)
//		{
//			cout << "请输入联系人年龄：" << endl;
//			cin >> con->peo[con->count].age;
//			if (cin.fail()) {
//				// 清除错误标志
//				cin.clear();
//				// 忽略错误输入直到下一个换行符
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//				cout << "输入有误，请输入一个有效的数字年龄！" << endl;
//			}
//			else if ((con->peo[con->count]).age <= 0 || (con->peo[con->count]).age > 100)
//			{
//				cout << "输入有误，请重新输入年龄！" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//输入电话
//		cout << "请输入联系人号码：" << endl;
//		cin >> (con->peo[con->count]).tel;
//		//输入住址
//		cout << "请输入联系人住址：" << endl;
//		cin >> (con->peo[con->count]).place;
//		//更新通讯录人数
//		con->count++;
//		cout << "添加联系人成功！" << endl;
//		//清屏操作
//		system("pause");
//		system("cls");
//	}
//}
//
////显示联系人
//void showperson(contact* con)
//{
//	assert(con);
//	if (con->count == 0)
//	{
//		cout << "当前通讯录为空。" << endl;
//		return;
//	}
//	else
//	{
//		for (int i = 0; i < con->count; i++)
//		{
//			cout << "姓名：" << con->peo[i].name << "\t";
//			cout << "性别：" << (con->peo[i].sex == 1 ? "男" : "女") << "\t";
//			cout << "年龄：" << con->peo[i].age << "\t";
//			cout << "电话：" << con->peo[i].tel << "\t";
//			cout << "住址：" << con->peo[i].place << "\t";
//			cout << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
////查询联系人是否存在
//int isexist(contact* con, string name)
//{
//	assert(con);
//	for (int i = 0; i < con->count; i++)
//	{
//		if (con->peo[i].name == name)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////删除联系人
//void delperson(contact* con, int ret, string name)
//{
//	assert(con);
//	for (int i = ret; i < con->count; i++)
//	{
//		con->peo[i].name = con->peo[i + 1].name;
//	}
//	con->count--;
//	cout << "删除联系人成功！" << endl;
//	system("pause");
//	system("cls");
//}
//
////查找联系人
//void findperson(contact* con)
//{
//	string name;
//	cout << "请输入查找联系人姓名：" << endl;
//	cin >> name;
//	int ret = isexist(con, name);
//	if (ret == -1)
//	{
//		cout << "联系人不存在！" << endl;
//	}
//	else
//	{
//		cout << "姓名：" << con->peo[ret].name << "\t";
//		cout << "性别：" << (con->peo[ret].sex == 1 ? "男" : "女") << "\t";
//		cout << "年龄：" << con->peo[ret].age << "\t";
//		cout << "电话：" << con->peo[ret].tel << "\t";
//		cout << "住址：" << con->peo[ret].place << "\t";
//		cout << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////修改联系人
//void modifyperson(contact* con)
//{
//	assert(con);
//	string name;
//	cout << "请输入修改联系人姓名：" << endl;
//	cin >> name;
//	int ret = isexist(con, name);
//	if (ret == -1)
//	{
//		cout << "联系人不存在！" << endl;
//	}
//	else
//	{
//		//输入姓名
//		cout << "请输入联系人姓名：" << endl;
//		cin >> (con->peo[ret]).name;
//		//输入性别
//		while (1)
//		{
//			cout << "请输入联系人性别：" << endl;
//			cout << "1-男;2-女" << endl;
//			cin >> (con->peo[ret]).sex;
//			if ((con->peo[ret]).sex != 1 && con->peo[ret].sex != 2)
//			{
//				cout << "输入有误，请重新输入性别！" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//输入年龄
//		while (1)
//		{
//			cout << "请输入联系人年龄：" << endl;
//			cin >> con->peo[ret].age;
//			if (cin.fail()) {
//				// 清除错误标志
//				cin.clear();
//				// 忽略错误输入直到下一个换行符
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//				cout << "输入有误，请输入一个有效的数字年龄！" << endl;
//			}
//			else if ((con->peo[ret]).age <= 0 || (con->peo[ret]).age > 100)
//			{
//				cout << "输入有误，请重新输入年龄！" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//输入电话
//		cout << "请输入联系人号码：" << endl;
//		cin >> (con->peo[ret]).tel;
//		//输入住址
//		cout << "请输入联系人住址：" << endl;
//		cin >> (con->peo[ret]).place;
//	}
//	system("pause");
//	system("cls");
//}
//
////清空联系人
//void cleancon(contact* con)
//{
//	assert(con);
//	int input = 0;
//	cout << "是否要清空通讯录？（1.YES/0.NO）"<<endl;
//	cin >> input;
//	if (input)
//	{
//		con->count = 0;
//		cout << "通讯录已清空。" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
//int main()
//{
//	contact con;
//	con.count = 0;
//	int input = 0;
//	while (1)
//	{
//		showmenu();
//		cout << "请选择功能：" << endl;
//		cin >> input;
//		switch(input)
//		{
//		case 1://添加联系人
//			addperson(&con);
//			break;
//		case 2://显示联系人
//			showperson(&con);
//			break;
//		case 3://删除联系人
//		{
//			cout << "请输入要删除的联系人：" << endl;
//			string name;
//			cin >> name;
//			if (isexist(&con, name) == -1)
//			{
//				cout << "联系人不存在！" << endl;
//				system("pause");
//				system("cls");
//			}
//			else
//			{
//				delperson(&con, isexist(&con, name), name);
//			}
//			break;
//		}
//		case 4://查找联系人
//		{
//			findperson(&con);
//			break;
//		}
//		case 5://修改联系人
//		{
//			modifyperson(&con);
//			break;
//		}
//		case 6://清空通讯录
//			cleancon(&con);
//			break;
//		case 0://退出通讯录
//			cout << "欢迎下次使用！" << endl;
//			system("pause");
//			return  0;
//		default://选择错误
//			cout << "选择错误，请重新输入！" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//C++程序存在4个区域：代码区，全局区，栈区，堆区

//1.代码区：只读，共享

//2.全局区：存放全局变量，静态变量，常量（字符串常量和const修饰的全局常量）

//3.栈区：存放局部变量和形参；不要把局部变量的地址作为参数返回

//4.堆区：由程序员自主开辟和释放

//int* func()
//{
//	int* p = new int(10);//new是开辟堆区内存的关键字，开辟类型为int，数值为10，返回的是地址
//	int a = 10;
//	return p;//p的本质还是存放在栈区上的局部变量，该指针变量存放的是指向堆区的一个内存编号
//	//但是这里返回的不是p变量本身，而是p中存放的内容（即地址），第3点是指不要返回局部变量的地址，没说不能返回局部变量
//	//如果是return a；那么就会返回a的值，不会有问题
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	delete p;//释放堆区上的内存
//	system("pause");
//	return 0;
//}

//int* test1()
//{
//	int* p = new int(10);
//	return p;
//}
//void test2()
//{
//	int* p1 = test1();
//	cout << *p1 << endl;
//	cout << *p1 << endl;
//	delete p1;
//}
//int main()
//{
//	test2();
//	return 0;
//}

//int* test1()
//{
//	int* arr = new int[5];//开辟数组类型
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = i + 100;
//	}
//	return arr;
//}
//void test2()
//{
//	int* arr1 = test1();
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//	delete[] arr1;//数组类型的堆区内存释放要加[]
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//引用
//1.引用必须初始化，并且初始化过后就不能更改
//int main()
//{
//	//赋值
//	int a = 10;
//	int b = a;
//	cout << "a " << &a << endl;
//	cout << "b " << &b << endl;
//	//引用
//	int c = 10;
//	int &d = c;//意味着d这个符号和c等价，指向同一地址同一值
//	cout << "c " << &c << endl;
//	cout << "d " << &d << endl;
//	int e = 100;
//	d = e;
//	cout << "c " << c << endl;
//	cout << "d " << d << endl;
//
//	system("pause");
//	return 0;
//}

//2.利用引用实现通过形参修饰实参
//void exchange(int& a, int& b)//利用引用（别名）的形式接收实参，别名也是指向实参地址，和实参等效的
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	exchange(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}

////3.不能返回局部变量的引用
//int& test1()
//{
//	int a = 10;
//	return a;
//}
//int main()
//{
//	int& ret = test1();
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//
//	system("pause");
//	return 0;
//}

//4.函数调用作为左值
//int& test2()
//{
//	static int a = 10;//静态变量不会因为出函数而被销毁
//	return a;
//}
//int main()
//{
//	int& ret = test2();
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	//ret,test2()和a都是一样的
//	test2() = 1000;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//
//	system("pause");
//	return 0;
//}

//5.引用的本质：是一个指针常量
//void func(int& ref)
//{
//	ref = 100;//ref是引用，编译器自动转化为*ref
//}
//int main()
//{
//	int a = 10;
//	//自动转化为int* const ref = &a;指针常量的指向不能变
//	int& ref = a;
//	//内部发现ref是引用，所以会自动转换为*ref = 20;
//	ref = 20;
//
//	cout << "a=" << a << endl;
//	cout << "ref=" << ref << endl;//ref自动转化为*ref
//
//	func(a);
//
//	system("pause");
//	return 0;
//}

//6.常量引用：修饰形参
//void func(const int& ref)
//{
//	//ref = 100;const修饰形参，函数内不得改变形参来影响实参
//	cout << "ref=" << ref << endl;
//}
//int main()
//{
//	int a = 10;
//	//int& ref = 10;是不合法的
//	const int& ref = 10;//const的作用是将其转化为：int tmp = 10;const int& ref = tmp;
//
//	func(a);
//	system("pause");
//	return 0;
//}

//函数高级使用
//1.函数默认参数
//int add(int a, int b, int c);//函数的声明和实现只能有一处设置默认参数
//int add(int a = 10 ,int b = 20 , int c = 30 )//设置函数默认参数值，如果函数调用时传了相应的参数那就覆盖，没传那就采用默认值
//{
//	return a + b + c;
//}//采用默认参数的位置往后都必须采用默认参数
//int main()
//{
//	cout << add(20,30) << endl;
//	system("pause");
//	return 0;
//}

//2.函数占位参数
//int add(int a = 10, int b = 20,int , int = 30)//int就是占位参数，只用写一个数据类型，也可以采用默认参数
//{
//	return a + b;
//}
//int main()
//{
//	cout << add(20, 30,10) << endl;//占位参数必须填补
//	system("pause");
//	return 0;
//}

//3.函数重载
//可以让函数名相同，提高复用性
//函数重载满足的条件
//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同，或者个数不同，顺序不同
//4、函数的返回值类型不能作为函数重载的条件
//void func()
//{
//	cout << "func()" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}
//void func(char a)
//{
//	cout << "func(char a)" << endl;
//}
//void func(char a,int  b)
//{
//	cout << "func(char a,int b)" << endl;
//}
//void func(int a,char b)
//{
//	cout << "func(int a,char b)" << endl;
//}
//
//int main()
//{
//	func();
//	func(1);
//	func('a');
//	func('a', 1);
//	func(1, 'a');
//
//	system("pause");
//	return 0;
//}

//函数重载碰到引用

//void func(int& a)
//{
//	cout << "func(int& a)" << endl;
//}
//void func(const int& a)
//{
//	cout << "func(const int& a)" << endl;
//}
//
//int main()
//{
//	int a = 10;
//	const int b = 20;
//	func(a);//a本身是int类型变量，偏向走可读可写的func(int& a)路径
//	func(b);//b本身是const int类型变量，偏向走仅可读的func(const int& a)路径
//	func(10);//10如果走func(int& a),那就是int& a = 10,这是不合语法的,而走func(const int& a)，const int& a = 10是合法的
//	system("pause");
//	return 0;
//}

//函数重载遇到默认参数
//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}
//void func(int a,int b = 10)
//{
//	cout << "func(int a,int b)" << endl;
//}
//
//int main()
//{
//	//func(10);//这里报错的原因是函数调用出现二义性，两个函数都能走，编译器报错
//	system("pause");
//	return 0;
//}

//类和对象
//C++面向对象三大特性：封装、继承、多态

//1.封装的意义
//class是设计一个类，class后跟的就是类的名称
//类中的属性和行为统一称为成员
//属性：成员属性，成员变量
//行为：成员函数，成员方法

//设计一个圆，可以计算其周长
//const double pi = 3.1415;
//class circle
//{
//	//访问权限
//	//公共权限：不管是类内还是类外都可以访问
//public:
//	//属性
//	double r;
//	//行为
//	double zc()
//	{
//		return 2 * pi * r;
//	}
//};
////通过圆类来创建一个圆对象
//int main()
//{
//	circle c1;
//	c1.r = 10;
//	cout << "圆的周长为:" << c1.zc() << endl;
//	system("pause");
//	return 0;
//}

//设计一个学生类
//class stu
//{
//public:
//	string name;
//	string id;
//	void print()
//	{
//		cout << "学生姓名为：" << name << endl;
//		cout << "学生学号为：" << id << endl;
//	}
//	void set(string _name,string _id)//通过行为给属性赋值
//	{
//		name = _name;
//		id = _id;
//	}
//};
//
//int main()
//{
//	stu s1;
//	s1.name = "张三";
//	s1.id = "5556782";
//	s1.print();
//
//	stu s2;
//	s2.set("李四", "654654");
//	s2.print();
//
//	system("pause");
//	return 0;
//}

//访问权限
//三种访问权限：
//公共权限 public 成员在类内可以访问，在类外也可以访问
//保护权限 protected 成员在类内可以访问，在类外不可以访问
//私有权限 private 成员在类内可以访问，在类外不可以访问

//class person
//{
//public:
//	string name;
//protected:
//	string car;
//private:
//	string password;
//};
//
//int main()
//{
//	person p1;
//	p1.name = "zhangsan";
//	//p1.car;类外不可访问
//	//p1.password;类外不可访问，会报错
//	system("pause");
//	return 0;
//}

//class和struct的区别
//class默认权限是私有的，struct默认权限是公共的
//class c1
//{
//	int a;
//};
//struct s1
//{
//	int b;
//};
//
//int main()
//{
//	c1 _c;
//	//_c.a = 10;//私有不可访问
//
//	s1 _s;
//	_s.b = 10;//公共可以访问
//	return 0;
//}

//成员属性设置私有化
//可以有效控制读写权限
//方便检测数据有效性

//class person
//{
//public:
//	//读写姓名
//	void readname()
//	{
//		cout << name << endl;
//	}
//	void setname(string _name)
//	{
//		name = _name;
//	}
//	//写年龄
//	void setage(int _age)
//	{
//		age = _age;
//	}
//	//读id
//	void readid()
//	{
//		cout << id << endl;
//	}
//private:
//	//类外无法访问，所以通过类内访问并提供相应的读写函数
//	string name;//可读可写
//	int age;//仅可写
//	string id = "599x";//仅可读
//};
//
//int main()
//{
//	person p1;
//	p1.setname("zhangsan");
//	p1.readname();
//
//	p1.setage(18);
//
//	p1.readid();
//
//	system("pause");
//	return 0;
//}

//设计一个长方体计算其面积体积，并用全局函数和成员函数来判断两个长方体是否相同

//class cube
//{
//public:
//	//设置长宽高
//	void setnums(int lenth, int width, int hight)
//	{
//		l = lenth, w = width, h = hight;
//	}
//	//获取长宽高
//	int getl()
//	{
//		return l;
//	}
//	int getw()
//	{
//		return w;
//	}
//	int geth()
//	{
//		return h;
//	}
//	//求面积函数
//	int msize()
//	{
//		return 2 * (l * w + l * h + w * h);
//	}
//	//求体积函数
//	int tsize()
//	{
//		return l * w * h;
//	}
//	//成员函数判断两个长方体是否相同
//	bool judge(cube &c)
//	{
//		if (l == c.getl() && w == c.getw() && h == c.geth())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	//属性
//	int l;
//	int w;
//	int h;
//};
////全局函数判断
//bool cubejudge(cube &c1,cube &c2)
//{
//	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	cube c1;
//	c1.setnums(5, 4, 6);
//	cout << "msize:" << c1.msize() << endl;
//	cout << "tsize:" << c1.tsize() << endl;
//
//	//全局函数判断
//	cube c2;
//	c2.setnums(5, 4, 6);
//	if (cubejudge(c1, c2))
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "different" << endl;
//	}
//
//	//成员函数判断
//	if (c1.judge(c2))
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "different" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//设计一个判断点与圆的位置关系的封装
//class point
//{
//public:
//	//设置点坐标
//	void setpoint(int _x, int _y)
//	{
//		x1 = _x;
//		y1 = _y;
//	}
//	//获取点坐标
//	int getx()
//	{
//		return x1;
//	}
//	int gety()
//	{
//		return y1;
//	}
//private:
//	//点坐标
//	int x1;
//	int y1;
//};
//class circle
//{
//public:
//	//设置圆心坐标和半径
//	void setcore(int xc, int yc,int _r)
//	{
//		x = xc;
//		y = yc;
//		r = _r;
//	}
//	//判断关系
//	int judge(point& p1)
//	{
//		return ((p1.getx() - x)* (p1.getx() - x)) + ((p1.gety() - y)* (p1.gety() - y)) - (r*r);
//	}
//private:
//	//圆心坐标
//	int x;
//	int y;
//	//半径
//	int r;
//};
//
//int main()
//{
//	circle c1;
//	point p1;
//	p1.setpoint(10, 5);
//	c1.setcore(5, 5, 5);
//	int ret;
//	ret = c1.judge(p1);
//	if (c1.judge(p1) == 0)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (c1.judge(p1) < 0)
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout << "点在圆外" << endl;
//	}
//	system("pause");
//	return 0;
//}

//对象的初始化和清除
//一个对象或者变量没有初始状态，对其使用后果是未知
//同样的使用完一个对象或变量，没有及时清理，也会造成一定的安全问题

//c++利用了构造函数和析构函数解决上述问题，这两个函数将会被编译器自动调用，完成对象初始化和清理工作。
//对象的初始化和清理工作是编译器强制要我们做的事情，因此如果我们不提供构造和析构，编译器会提供编译器提供的构造函数和析构函数是空实现

//构造函数:主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用；
//析构函数:主要作用在于对象销毁前系统自动调用，执行一些清理工作。

//构造函数语法:类名(){}
//1.构造函数，没有返回值也不写void
//2.函数名称与类名相同
//3.构造函数可以有参数，因此可以发生重载
//4.程序在调用对象时候会自动调用构造，无须手动调用, 而且只会调用一次

//析构函数语法:~类名(){}
//1.析构函数，没有返回值也不写void
//2.函数名称与类名相同, 在名称前加上符号~
//3.析构函数不可以有参数，因此不可以发生重载
//4.程序在对象销毁前会自动调用析构，无须手动调用, 而且只会调用一次

//class person
//{
//public:
//	//构造函数
//	person()
//	{
//		cout << "构造函数的调用" << endl;
//	}
//	//析构函数
//	~person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//};
//void test()
//{
//	person p;
//}
//
//int main()
//{
//	test();//调用这个函数时，出函数对象被销毁
//	person p1;//对象没有销毁直到return 0;
//	system("pause");
//	return 0;
//}

//构造函数的分类
//1.有参构造和无参构造
//2.普通构造和拷贝构造

//三种调用方式
//1.括号法
//2.显示法
//3.隐式转换法

//class person
//{
//public:
//	//1.无参构造（默认构造）和有参构造 —（普通构造）
//	person()
//	{
//		cout << "无参构造函数调用" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "有参构造函数调用" << endl;
//	}
//	//2.拷贝构造
//	person(const person& p)
//	{
//		age = p.age;
//		cout << "拷贝构造函数调用" << endl;
//	}
//	int age;
//	~person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//};
//调用
//void test()
//{
	//1.括号法
	//person p1;//默认构造函数的调用
	//person p2(10);//有参函数调用
	//person p3(p2);//拷贝构造函数调用

	//cout << "p2.age:" << p2.age << endl;
	//cout << "p3.age:" << p3.age << endl;

	//注意事项：默认（无参）构造函数调用不要加(),否则编译器会视为函数的声明

	//2.显示法
	//person p4;//默认构造函数的调用
	//person p5 = person(10);//有参函数调用
	//person p6 = person(p5);//拷贝构造函数调用

	//person(10);//为匿名对象，使用结束后会被立即回收
	//cout << "aaaa" << endl;

	//注意事项：不要使用拷贝构造函数来初始化匿名对象
	//person(p3);//这里会和上文发生重定义，等价于person p3;

	//3.隐式转换法
//	person p7;
//	person p8 = 10;//等价于person p8 = person(10);
//	person p9 = p8;//等价于person p9 = person(p8);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//拷贝构造函数的使用时机
//class person
//{
//public:
//	person(int _age)
//	{
//		age = _age;
//		cout << "有参构造函数调用" << endl;
//	}
//	person(const person &p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//private:
//	int age;
//};
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test()
//{
//	person p1(10);
//	person p2(p1);
//}
////2.值传递的方式给函数参数传值
//void func(person p)
//{
//	;
//}
//void test1()
//{
//	person p3(100);
//	func(p3);//这里之所以调用了拷贝函数是因为p3传递给形参p是需要拷贝过程的，且形参的改变不会影响实参
//}
////用值的方式返回局部对象
//person& func1()
//{
//	person _p(50);
//	return _p;
//}
//void test2()
//{
//	person p4(func1());
//}
//
//int  main()
//{
//	//test();
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}

//构造函数调用规则
//1.默认的情况下，c++编译器会至少给一个类提供三个函数：默认无参，默认有参，默认拷贝
//如果用户自定义了有参，那默认无参将不被提供，如果自定义了拷贝，默认无参和有参都不会被提供

//深拷贝和浅拷贝
//1.浅拷贝：简单的赋值拷贝操作
//2.深拷贝：在堆区重新申请空间，进行拷贝操作

//class person
//{
//public:
//	person()
//	{
//		cout << "无参构造函数调用" << endl;
//	}
//	person(int _age, int _hight)
//	{
//		age = _age;
//		hight = new int(_hight);
//		cout << "有参构造函数调用" << endl;
//	}
//	person(const person& p)
//	{
//		age = p.age;
//		hight = new int(*p.hight);//重新开辟一个堆区空间指向hight数值，这样析构函数释放空间就不会重复
//	}
//	~person()//析构代码，将在堆区上开辟的空间进行释放，遵循先进后释放原则
//	{
//		if (hight != NULL)
//		{
//			delete hight;
//			hight = NULL;
//		}
//		cout << "析构构造函数调用" << endl;
//	}
//	int age;
//	int* hight;
//};
//void test()
//{
//	person p1(10,140);
//	person p2(p1);//这里涉及浅拷贝，浅拷贝会存在堆区空间的重复释放，自定义一个深拷贝函数即可解决
//	cout << "p1age:" << p1.age << endl;
//	cout << "p2age:" << p2.age << endl;
//
//	cout << "p1hight:" << *p1.hight << endl;
//	cout << "p2hight:" << *p2.hight << endl;
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//初始化列表
//class person
//{
//public:
//	//传统方法初始化
//	//person(int _age, int _hight)
//	//{
//	//	age = _age;
//	//	hight = _hight;
//	//}
//	//初始化列表方法
//	person(int _age, int _hight) :age(_age), hight(_hight)
//	{
//
//	}
//	~person()
//	{
//		cout << "析构构造函数调用" << endl;
//	}
//	int age;
//	int hight;
//};
//void test()
//{
//	person p1(10, 140);
//	person p2(p1);
//	cout << "p1age:" << p1.age << endl;
//	cout << "p2age:" << p2.age << endl;
//
//	cout << "p1hight:" << p1.hight << endl;
//	cout << "p2hight:" << p2.hight << endl;
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//C++类中的成员可以是另一个类的对象，称为对象成员
//先调用成员对象phone的构造函数，搭建部位，再调用person类的构造函数
//析构时，person先析构，组件phone类再析构
//class phone
//{
//public:
//	phone(string name)
//	{
//		_pname = name;
//		cout << "phone构造函数调用" << endl;
//	}
//	~phone()
//	{
//		cout << "phone析构函数调用" << endl;
//	}
//	string _pname;
//};
//
//class person
//{
//public:
//	person(string _name, phone _p) :name(_name), pname(_p._pname)//这里就没有下面的问题
//	{
//		cout << "person1构造函数调用" << endl;;
//	}
//	person(string _name, string _pname) :name(_name), pname(_pname)//这里pname和_pname的数据类型不一样，这里的的代码类似于phone pname = _pname(隐式转换法)
//	{
//		cout << "person2构造函数调用" << endl;;
//	}
//	~person()
//	{
//		cout << "person析构函数的调用" << endl;
//	}
//	string name;
//	phone pname;
//};
//
//void test()
//{
//	phone p1("apple");
//	person p2("zhangsan",p1);
//	person p3("lisi", "huawei");
//	cout << "姓名：" << p2.name << endl;
//	cout << "手机名称：" << p2.pname._pname << endl;
//
//	cout << "姓名：" << p3.name << endl;
//	cout << "手机名称：" << p3.pname._pname << endl;
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//静态成员
//1.静态成员变量：所有对象共享一份数据，且在编译阶段完成内存分配，类内声明，类外初始化
//class person
//{
//public:
//	//类内声明
//	static int num;
//};
////类外初始化
//int person::num = 100;
//
//void test1()//测试静态成员数据共享
//{
//	person p;
//	cout << p.num << endl;
//	person p1;
//	p1.num = 200;
//	cout << p.num << endl;
//}
//
//void test2()//测试静态成员变量的两种访问方式，静态成员变量并不属于某一个特定的对象，是共享的
//{
//	//1.通过对象访问(非静态成员变量只能这样访问)
//	person p;
//	cout << p.num << endl;
//	//2.通过类名访问
//	cout << person::num << endl;
//}
//
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}
//2.静态成员函数：所有对象共享一个函数，该函数只能访问静态成员变量

//class person
//{
//public:
//	static void func()
//	{
//		num1 = 100;
//		cout << num1 << endl;
//		//num2 = 200;调用该函数时，该函数无法分辨num2是来自于哪一个对象，因此静态成员函数不能访问非静态成员变量，和静态成员变量一样具有访问权限和两种访问方式
//	}
//	static int num1;
//	int num2;
//};
//int person::num1 = 0;
//void test()
//{
//	person p;
//	p.func();
//	person::func();
//}
//int main()
//{
//	test();
//	return 0;
//}

//成员变量和成员函数是分开储存的

//class person
//{
//public:
//	int a;//非静态成员变量属于类对象
//	static int b;//静态成员变量不属于某个类对象
//	void func(){}//成员函数不属于某个类对象
//	static void func1(){}//静态成员函数不属于某个类对象
//};
//int person::b = 0;
//
//class human
//{
//	;
//};
//int main()
//{
//	person p;
//	human h;
//	cout << "sizeof(p)=" << sizeof(p) << endl;
//	cout << "sizeof(h)=" << sizeof(h) << endl;//空对象占1个字节，目的是区分不同的空对象，不同空对象所占内存地址不同
//
//	return 0;
//}

//this指针：指向被调用的成员函数所属的对象
//无需定义，直接用就可以
//class person
//{
//public:
//	//1.解决名称冲突问题（形参和成员变量重名）
//	person(int age)
//	{
//		this->age = age;
//	}
//	int age;
//	//2.返回对象本身
//	person& func(person& p)//返回类型如果改成person，那么就会对传入的对象进行拷贝，将拷贝好的新对象返回
//	//而引用的方式则不会创建新对象，而是返回一个原传入对象的一个别名，其他的都一样，这样做的好处是可以实现链式编程
//	{
//		this->age += p.age;
//		return *this;
//	}
//};
//int main()
//{
//	person p1(10);
//	person p2(10);
//
//	cout << "p.func(p).func(p).func(p).age=" << p2.func(p1).func(p1).func(p1).age << endl;
//
//	return 0;
//}

//空指针访问成员函数

//class person
//{
//public:
//	void func()
//	{
//		cout << "classname:person" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age:" << age << endl;
//		//等价于下面的代码
//		cout << "age:" << this->age << endl;//如果创建的是空指针那就会存在问题，解决方法是在前面加上判断语句
//	}
//	int age = 10;
//};
//
//int main()
//{
//	person* p = NULL;
//	p->func();//没问题
//	p->showage();//有问题，这里没有创建具体的对象，而showage函数需要输出具体的age，一个空指针是无法做到的
//	system("pause");
//	return 0;
//}

//const修饰成员函数
//1.常函数
//成员函数后加const就称该函数为常函数
//常函数内不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中可进行修改

//class person
//{
//public:
//	//this指针的本质一个指针常量，指向的对象不能变
//	//下面成员函数后面加个const相当于const person* const this，指向对象的属性也不能变了
//	void func1()const
//	{
//		//age = 100;error
//		_age = 200;//correct
//	}
//	void func2()
//	{
//		;
//	}
//	int age;
//	mutable int _age;//加关键字在常对象和常函数里都可以被改变
//};
//2.常对象
//声明对象前加const后称该对象为常对象，常对象属性不能改变
//常对象只能调用常函数，因为如果可以调用普通函数的话，在普通函数内部可以改成员属性，这会与常对象的性质冲突
//int main()
//{
//	const person p;
//	p.func1();
//	p._age = 1000;
//	//p.func2();error
//	system("pause");
//	return 0;
//}

//友元
//在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
//友元的目的就是让一个函数或者类 访问另一个类中私有成员
//友元的关键字为 friend
//1.全局函数做友元

//class building
//{
//	//声明全局函数友元
//	friend void test1(building& b);
//public:
//	building()
//	{
//		livingroom = "客厅";
//		bedroom = "卧室";
//	}
//public:
//	string livingroom;
//private:
//	string bedroom;
//};
//void test1(building& b)
//{
//	cout << "客人进入：" << b.livingroom << endl;
//	cout << "朋友进入：" << b.bedroom << endl;
//}
//int main()
//{
//	building b;
//	test1(b);
//	system("pause");
//	return 0;
//}

//2.类做友元

//class building
//{
//	//声明goodfriend类为友元
//	friend class goodfriend;
//public:
//	building();
//public:
//	string livingroom;
//private:
//	string bedroom;
//};
//class goodfriend
//{
//public:
//	goodfriend();
//	void visit();
//	building* build;
//};
//
//building::building()//无参构造函数的类外定义方式
//{
//	livingroom = "客厅";
//	bedroom = "卧室";
//}
//
//goodfriend::goodfriend()
//{
//	build = new building;
//}
//
//void goodfriend::visit()
//{
//	cout << "拜访:" << build->livingroom << endl;
//	cout << "拜访:" << build->bedroom << endl;
//}
//
//int main()
//{
//	goodfriend f;
//	f.visit();
//	system("pause");
//	return 0;
//}

//3.成员函数做友元
//class building;
//class goodfriend
//{
//public:
//	goodfriend();
//	void visit1();//可访问building里的私有成员属性
//	void visit2();//不可访问building里的私有成员属性
//	building* build;
//};
//class building
//{
//	//声明goodfriend类中的void visit1()为友元
//	friend void goodfriend::visit1();
//public:
//	building();
//public:
//	string livingroom;
//private:
//	string bedroom;
//};
//
//building::building()//无参构造函数的类外定义方式
//{
//	livingroom = "客厅";
//	bedroom = "卧室";
//}
//
//goodfriend::goodfriend()
//{
//	build = new building;
//}
//
//void goodfriend::visit1()
//{
//	cout << "拜访:" << build->livingroom << endl;
//	//cout << "拜访:" << build->bedroom << endl;
//}
//
//void goodfriend::visit2()
//{
//	cout << "拜访:" << build->livingroom << endl;
//	//cout << "拜访:" << build->bedroom << endl;
//}
//
//int main()
//{
//	goodfriend f;
//	f.visit1();
//	f.visit2();
//
//	system("pause");
//	return 0;
//}

//运算符重载

//1.加号运算符重载
//以实现两个类相加为例

//class person
//{
//public:
//	//1.成员函数实现+重载
//	person operator+(person& p)//operator+是编译器统一起的名字，便于后续代码可以简化为直接相加
//	{
//		person tmp;
//		tmp.m_a = this->m_a + p.m_a;
//		tmp.m_b = this->m_b + p.m_b;
//		return tmp;
//	}
//	int m_a = 10;
//	int m_b = 10;
//};
////2.全局函数实现+重载
//person operator+(person& p1,person& p2)
//{
//	person tmp;
//	tmp.m_a = p1.m_a + p2.m_a;
//	tmp.m_b = p1.m_b + p2.m_b;
//	return tmp;
//}
////3.运算符重载也可以发生函数重载
//person operator+(person & p, int num)
//{
//	person tmp;
//	tmp.m_a = p.m_a + num;
//	tmp.m_b = p.m_b + num;
//	return tmp;
//}
//int main()
//{
//	person p1;
//	person p2;
//	person p3 = p1.operator+(p2);//和p1+p2等价
//	cout << "p3.m_a=" << p3.m_a << endl;
//	cout << "p3.m_b=" << p3.m_b << endl;
//
//	//person p4 = p1 + p2;
//	//cout << "p4.m_a=" << p4.m_a << endl;
//	//cout << "p4.m_b=" << p4.m_b << endl;
//
//	person p5 = operator+(p1, p2);
//	cout << "p5.m_a=" << p5.m_a << endl;
//	cout << "p5.m_b=" << p5.m_b << endl;
//
//	person p6 = p1 + 100;//不同类型相加
//	cout << "p6.m_a=" << p6.m_a << endl;
//	cout << "p6.m_b=" << p6.m_b << endl;
//	system("pause");
//	return 0;
//}

//2.左移运算符重载
//实现自定义数据类型的输出

//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//private:
//	int m_age;
//	int n_age;
//public:
//	//成员函数不能实现左移运算符重载
//	void operator<<(ostream& cout);//重载<<，需要两个参数分别放在<<的左右，成员函数的第一个参数总是隐式地指向类实例的 this 指针，
//	//所以还剩下一个参数位置，上代码简化来写就是p.operator(cout)即p<<cout，显然是无法实现cout在左侧的要求
//	person(int a,int b)
//	{
//		this->m_age = a;
//		this->n_age = b;
//	}
//};
////通过全局函数来实现
////全局函数没有默认第一参数
//ostream& operator<<(ostream& cout, person p)//cout输出流只有一个，所以采用引用的方式，为实现链式编程，返回类型为ostream&
//{
//	cout << p.m_age << " " << p.n_age << endl;
//}
//void test()
//{
//	person p(10, 10);
//	cout << p << endl;
//}

//3.递增运算符重载

//class myclass
//{
//	friend ostream& operator<<(ostream& cout, myclass c);
//public:
//	myclass()
//	{
//		m_a = 0;
//	}
//	//实现前置递增运算符重载
//	myclass& operator++()
//	{
//		++m_a;
//		return *this;
//	}
//	//实现后置递增运算符重载
//	myclass operator++(int)//int占位参数以此来区分前置和后置递增，其他的不好使
//	{
//		//先记录原先的值
//		myclass tmp = *this;
//		//处理数据
//		m_a++;
//		//返回tmp的值，不能返回引用方式，因为tmp为局部变量
//		return tmp;
//	}
//private:
//	int m_a;
//
//};
//ostream& operator<<(ostream& cout, myclass c)//这里返回引用的目的是对同一个值进行更改
//{
//	cout << "m_a=" << c.m_a << endl;
//	return cout;
//}
//void test1()
//{
//	myclass c1;
//	cout << ++c1 << endl;
//
//}
//void test2()
//{
//	myclass c2;
//	cout << c2++ << endl;
//	cout << c2 << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}

//4.赋值运算符重载
//解决浅拷贝带来的堆区内存重复释放的问题

//class person
//{
//public:
//	//有参构造函数
//	person(int a)
//	{
//		m_a = new int(a);//堆区创建内存存放a值，m_a指向其
//	}
//	//创建析构函数，释放堆区上开辟的空间
//	~person()
//	{
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//	}
//	//重载赋值运算符
//	person& operator=(person& p)
//	{
//		//先检查自身指向空间是否释放
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//		//开辟新的空间进行深拷贝
//		m_a = new int(*p.m_a);
//		//返回可实现链式编程的person&类型
//		return *this;
//	}
//	int *m_a;
//};
//ostream& operator<<(ostream& cout, person& p)
//{
//	cout << *p.m_a << endl;
//	return cout;
//}
//void test()
//{
//	person p1(16);
//	person p2(18);
//	person p3(20);
//	p3 = p2 = p1;//链式赋值
//	cout << p3 << p2 << p1 << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//5.关系运算符重载（== !=）
//用于比较自定义类型

//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//	//重载==
//	bool operator==(person& p)
//	{
//		if (m_name == p.m_name && m_age == p.m_age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	//重载!=
//	bool operator!=(person& p)
//	{
//		if (m_name == p.m_name && m_age == p.m_age)
//		{
//			return false;
//		}
//		else
//			return true;
//	}
//};
//void test()
//{
//	person p1("tom", 8);
//	person p2("jerry", 8);
//	if (p1 == p2)
//	{
//		cout << "相等" << endl;
//	}
//	else
//		cout << "不相等" << endl;
//	if (p1 != p2)
//	{
//		cout << "不相等" << endl;
//	}
//	else
//		cout << "相等" << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//6.函数调用运算符重载()
//因为使用起来很像函数，也称为仿函数

//class myfunc
//{
//public:
//	void operator()(string text)
//	{
//		cout << text << endl;
//	}
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//void test()
//{
//	myfunc()("hello world!");//myprint()为创建一个匿名函数对象，一次用完即销毁
//	cout << myfunc()(10, 20) << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//继承
//可以减少重复代码
//语法：class 子类: 继承方式 父类
//子类也称为派生类
//父类也称为基类

//class base
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void left()
//	{
//		cout << "python、cpp、java...（公共分类列表）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、合作交流、站内地图...（公共底部）" << endl;
//	}
//};
//class java :public base//继承，在base的基础上添加新的成员
//{
//public:
//	void ja()
//	{
//		cout << "java的学习视频" << endl;
//	}
//};
//class python :public base
//{
//public:
//	void py()
//	{
//		cout << "python的学习视频" << endl;
//	}
//};
//class cpp :public base//继承，在base的基础上添加新的成员
//{
//public:
//	void c()
//	{
//		cout << "cpp的学习视频" << endl;
//	}
//};
//void test()
//{
//	java j;
//	python p;
//	cpp c;
//
//	j.header();
//	j.footer();
//	j.left();
//	j.ja();
//	p.py();
//	c.c();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//继承有三种方式：公共继承、保护继承和私有继承
//class base
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//class son1 :public base
//{
//public:
//	void s1()
//	{
//		a = 100;//依然是公共
//		b = 100;//依然是保护
//	}
//	//父类的私有内容访问不到
//};
//
//class son2 :protected base
//{
//public:
//	void s2()
//	{
//		a = 100;//权限变为保护
//		b = 100;//依然是保护
//	}
//	//父类的私有内容访问不到
//};
//
//class son3 :private base
//{
//public:
//	void s3()
//	{
//		a = 100;//权限变为私有
//		b = 100;//权限变为私有
//	}
//	//父类的私有内容访问不到
//};

//继承的构造和析构顺序
//现有父亲后有儿子，先父类构造，再子类构造，析构顺序相反
//class father
//{
//public:
//	father()
//	{
//		cout << "father的构造函数" << endl;
//	}
//	~father()
//	{
//		cout << "father的析构函数" << endl;
//	}
//};
//
//class son:public father
//{
//public:
//	son()
//	{
//		cout << "son的构造函数" << endl;
//	}
//	~son()
//	{
//		cout << "son的析构函数" << endl;
//	}
//};
//
//void test()
//{
//	son s;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//继承中出现同名成员的处理方式
//子类直接调用即可，调用父类成员需要加作用域
//原因是一旦子类中的成员和父类成员同名，会自动隐藏父类中所有的同名成员

//class base
//{
//public:
//	int m_a;
//	base()
//	{
//		m_a = 1;
//	}
//	void func()
//	{
//		cout << "base func()" << endl;
//	}
//	void func(int a)
//	{
//		cout << "base func(int a)" << endl;
//	}
//};
//class son:public base
//{
//public:
//	int m_a;
//	son()
//	{
//		m_a = 0;
//	}
//	void func()
//	{
//		cout << "son func()" << endl;
//	}
//};
//void test()
//{
//	cout << "son下的m_a=" << son().m_a << endl;
//	cout << "base下的m_a=" << son().base::m_a << endl;
//	son().func();//子类成员函数
//	son().base::func();//父类成员函数
//	son().base::func(100);
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//继承中同名静态成员处理
//和上述一致
//class base
//{
//public:
//	static int m_a;
//};
//int base::m_a = 100;
//
//class son:public base
//{
//public:
//	static int m_a;
//};
//int son::m_a = 100;
//
//void test()
//{
//	son s;
//	//通过对象访问
//	cout << "son下的m_a=" << s.m_a << endl;
//	cout << "base下的m_a=" << s.base::m_a << endl;
//	//通过类名访问
//	cout << "son下的m_a=" << son::m_a << endl;
//	//第一个::是通过类名访问的意思，第二个::是在base的作用域下的意思
//	cout << "base下的m_a=" << son::base::m_a << endl;
//
//}
////成员函数的完全一样
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//多继承语法：class 子类名:继承方式 父类1名,继承方式 父类2名...

//菱形继承：子类所继承的两个父类拥有同一个父类
//如羊和驼都继承动物，而羊驼继承了羊和驼
//问题1：羊驼在使用数据时会出现二义性
//问题2：羊驼的数据会有两份

//class animal
//{
//public:
//	int m_Age;
//};
//
//class sheep:public animal{};
//
//class tuo:public animal{};
//
//class sheeptuo:public sheep,public tuo{};
//
//void test1()
//{
//	sheeptuo st;
//	st.sheep::m_Age = 8;
//	st.tuo::m_Age = 10;
//	//可以解决二义性的问题，但是存在两个年龄，两份数据终究是不合理的。
//	cout << "st.sheep::m_Age=" << st.sheep::m_Age << endl;
//	cout << "st.tuo::m_Age=" << st.tuo::m_Age << endl;
//}
////采用关键字virtual，虚继承来解决问题，animal称为虚基类
//class yang:virtual public animal{};
//
//class tuoo:virtual public animal{};
//
//class shtuo:public yang,public tuoo{};
//
//void test2()
//{
//	shtuo sto;
//	sto.yang::m_Age = 8;
//	sto.tuoo::m_Age = 10;
//	//原理是虚拟继承，分别继承虚拟基类指针，该指针指向虚拟基类表格，表格记录着对应的偏移量，使能够准确地找到唯一的m_Age并进行修改
//	cout << "sp.yang::m_Age=" << sto.yang::m_Age << endl;
//	cout << "sp.tuo0::m_Age=" << sto.tuoo::m_Age << endl;
//	//故无论是通过yang还是tuoo，都只是对同一个m_Age修改，输出的结果也是一样的
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//继承的多态
//多态分为静态多态和动态多态
//静态多态包括函数重载和运算符重载
//动态多态为派生类和虚函数实现运行时多态

//区别：前者函数地址早绑定-编译阶段确定函数地址；后者函数地址晚绑定-运行阶段确定函数地址。

//class animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "animal speak" << endl;
//	}
//};
//class cat :public animal
//{
//	void speak()
//	{
//		cout << "cat speak" << endl;
//	}
//};
////地址早绑定，不管输入什么都是animal speak，这里对于父类参数，是可以传子类对象的
////地址晚绑定就可以解决问题，在animal类下的成员函数前加关键字virtual，使animal speak（）函数称为虚函数，暂时不分配地址
//void dospeak(animal& anim)
//{
//	anim.speak();
//}
//void test()
//{
//	cat ct;
//	dospeak(ct);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//动态多态满足的条件
//1.有继承关系
//2.子类重写父类的虚函数（子类中的关键字virtual可有可无），重写：函数返回值类型 函数名 参数列表完全一致
//3.动态多态使用：父类的指针或引用指向子类对象

//多态的原理见文档

//纯虚函数和抽象类
//在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容，因此可以将虚函数改为纯虚函数
//纯虚函数语法: virtual 返回值类型 函数名(参数列表)=0;当类中有了纯虚函数，这个类也称为抽象类
//抽象类特点:无法实例化对象；子类必须重写抽象类中的纯虚函数，否则也属于抽象类

//class Base//抽象类
//{
//public:
//	virtual void func() = 0;//纯虚函数
//};
//class Son :public Base
//{
//public:
//	void func()
//	{
//		cout << "Son下的func" << endl;
//	}
//};
//void test()
//{
//	//Base base;抽象类无法实例化
//	Base* base = new Son;
//	base->func();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//实例应用

//class Base
//{
//public:
//	virtual void process() = 0;
//};
//class Tea :public Base
//{
//public:
//	void process()
//	{
//		cout << "煮水+冲泡茶叶+倒入杯中+加柠檬" << endl;
//	}
//};
//class Coffee :public Base
//{
//public:
//	void process()
//	{
//		cout << "煮水+冲泡咖啡+倒入杯中+加糖和牛奶" << endl;
//	}
//};
//void makedrink(Base* base)
//{
//	base->process();
//	delete base;
//}
//void test()
//{
//	makedrink(new Coffee);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//多态中的虚析构和纯虚析构
//总结:
//1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//2.如果子类中没有堆区数据，可以坏写为虚析构或纯虚析构
//3.拥有纯虚析构函数的类也属于抽象类
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "animal构造函数的调用" << endl;
//	}
//	//加上关键字virtual形成虚析构，就会执行子类析构函数
//	//virtual ~Animal()
//	//{
//	//	cout << "animal析构函数的调用" << endl;
//
//	//}
//	//纯虚析构，也需要具体的代码实现，该类称为抽象类，不能实例化对象
//	virtual ~Animal() = 0;//纯虚析构类内声明，类外实现
//	virtual void speak() = 0;
//};
//Animal::~Animal()//纯虚析构类外实现
//{
//	cout << "animal析构函数的调用" << endl;
//}
//class Cat :public Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << *Name << "小猫在说话" << endl;
//	}
//	Cat(string name)
//	{
//		cout << "Cat构造函数的调用" << endl;
//		Name = new string(name);
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数的调用" << endl;
//		if (Name != NULL)
//		{
//			delete Name;
//			Name = NULL;
//		}
//	}
//	string* Name;
//};
//void test()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;//父类指针不会走子类的析构函数，会导致子类中在堆区开辟的内存出现泄露，解决办法就是将父类中的析构函数更改为虚析构
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//多态应用实例
//电脑零件
//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//class GPU
//{
//public:
//	virtual void display() = 0;
//};
//class MemeryCard
//{
//public:
//	virtual void store() = 0;
//};
////厂商
//class InterCPU:public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "InterCPU working..." << endl;
//	}
//};
//class InterGPU :public GPU
//{
//public:
//	virtual void display()
//	{
//		cout << "InterGPU working..." << endl;
//	}
//};
//class InterMemery :public MemeryCard
//{
//public:
//	virtual void store()
//	{
//		cout << "InterMemery working..." << endl;
//	}
//};
//
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "LenovoCPU working..." << endl;
//	}
//};
//class LenovoGPU :public GPU
//{
//public:
//	virtual void display()
//	{
//		cout << "LenovoGPU working..." << endl;
//	}
//};
//class LenovoMemery :public MemeryCard
//{
//public:
//	virtual void store()
//	{
//		cout << "LenovoMemery working..." << endl;
//	}
//};
////电脑类
//class Compter
//{
//public:
//	Compter(CPU* cpu, GPU* gpu, MemeryCard* mem)
//	{
//		m_cpu = cpu;
//		m_gpu = gpu;
//		m_mem = mem;
//	}
//	~Compter()
//	{
//		cout << "Compter析构函数调用" << endl;
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_gpu != NULL)
//		{
//			delete m_gpu;
//			m_gpu = NULL;
//		}
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//	void running()
//	{
//		m_cpu->calculate();
//		m_gpu->display();
//		m_mem->store();
//	}
//private:
//	CPU* m_cpu;
//	GPU* m_gpu;
//	MemeryCard* m_mem;
//};
////测试
//void test()
//{
//	//组装Inter电脑
//	cout << "---------------" << endl;
//	Compter* compter1 = new Compter(new InterCPU(), new InterGPU(), new InterMemery());
//	compter1->running();
//	cout << "---------------" << endl;
//	//组装Lenovo电脑
//	Compter* compter2 = new Compter(new LenovoCPU(), new LenovoGPU(), new LenovoMemery());
//	compter2->running();
//	cout << "---------------" << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//文件操作
//文本文件-ASCII码值的形式存储
//二进制文件-二进制形式存储
#include<fstream>
//ofstream - 写操作
//ifstream - 读操作
//fstream - 读写操作

//1.写文件
//一、包含头文件
//#include<fstream>
//二、创建流对象
//ofstream ofs
//三、打开文件
//ofs.open("文件路径",打开方式)
//四、写数据
//ofs<<"写入的数据";
//五、关闭文件
//ofs.close();
//文本文件写文件
//int main()
//{
//	ofstream ofs;
//	ofs.open("text.txt", ios::out);//没有写完整路径，默认创建到与本文件同级处
//	ofs << "zhansgan" << endl;
//	ofs << "nan" << endl;
//	ofs << "18" << endl;
//  system("pause");
//	return 0;
//}
//2.读文件
//一、包含头文件
//#include<fstream>
//二、创建流对象
//ifstream ifs
//三、打开文件并判断文件是否打开成功
//ifs.open("文件路径",打开方式)
//四、读数据
//四种方式
//五、关闭文件
//ifs.close();
//文本文件读文件

//int main()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败！" << endl;
//		return 1;
//	}
//	//第一种读数据
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}
//	//ifs.close();//要想多次读取，要么关闭重新打开，要么把文件指针移到开头
//	//第二种读数据
//	char arr[1024] = { 0 };
//	while (ifs >> arr)
//	{
//		cout << arr << endl;
//	}
//	//第三种读数
//	string s;
//	while (getline(ifs, s))
//	{
//		cout << s << endl;
//	}
//	//第四种读数
//	ifs.clear();    // 清除流的状态标志
//	ifs.seekg(0);   // 将文件指针移动到文件开头
//	ifstream ifs1;
//	ifs1.open("text.txt", ios::in);
//	char c;
//	while ((c = ifs1.get())!=EOF)//EOF - end of file文件的末尾
//	{
//		cout << c;
//	}
//	ifs1.close();
//	system("pause");
//	return 0;
//}

//二进制文件写文件wirte
//打开方式要加上ios::binary
//二进制方式写文件主要利用流对象调用成员函数write
//函数原型:ostream& write(const char* buffer, int len); 
//参数解释:字符指针buffer指向内存中一段存储空间。len是读写的字节数

//class person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//void test()
//{
//	person p = { "张三",18 };
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//二进制文件读文件
//二进制方式读文件主要利用流对象调用成员函数read
//函数原型:istream& read(char* buffer, int len);
//参数解释:字符指针buffer指向内存中一段存储空间。len是读写的字节数

//class person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//void test()
//{
//	person p;
//	ifstream ifs("person.txt", ios::out | ios::binary);
//	if (!(ifs.is_open()))
//	{
//		cout << "文件打开失败！" << endl;
//		return;
//	}
//	ifs.read((char*)&p, sizeof(p));
//	cout << p.m_name << endl;
//	cout << p.m_age << endl;
//	ifs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//C++模板：面向泛式编程，大大提高复用率
//不能直接使用，模板只是一个框架，也不是万能的

//模板分函数模板和类模板

//1.函数模板
//建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表。
//语法:
//template<typename T>
//函数声明或定义
//template - 声明创建模板
//typename - 表面其后面的符号是一种数据类型，可以用class代替通用的数据类型
//T - 名称可以替换，通常为大写字母

//应用场景（数据交换）
//void exchange(int &a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Exchange(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//很麻烦，每次不同的数据类型都要换一个函数，实际上函数内的操作逻辑完全一致
//采用模板
//template<typename T>
//void myexchange(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	//1.自动类型推导
//	myexchange(a, b);
//	//2.显示指定类型
//	myexchange<int>(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//模板使用注意事项
//template<typename T>
//void myexchange(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test1()
//{
//	int a = 10;
//	char b = 'b';
//	//myexchange(a, b);错误，自动类型推导必须推导出同一类型
//}
//template<typename T>
//void func()
//{
//	cout << "func()的调用" << endl;
//}
//void test2()
//{
//	//func();错误，模板使用必须指定T的类型
//	func<int>();//显示指定，正确做法
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//函数模板案例
//降序排序
//template<class T>
//void exchange(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<class T>
//void printf(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//}
//
//template<class T>
//void sort(T arr[], int len)
//{
//	//选择排序法
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			exchange(arr[max], arr[i]);
//		}
//	}
//}
//
//void test()
//{
//	char charr[] = "afecdb";
//	int intarr[] = { 9,7,8,1,2,3,5,4,6 };
//	
//	int len1 = sizeof(charr) / sizeof(char);
//	int len2 = sizeof(intarr) / sizeof(int);
//
//	sort(charr, len1);
//	sort(intarr, len2);
//
//	printf(charr, len1);
//	printf(intarr, len2);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//模板和普通函数的区别
//1、普通函数调用可以发生隐式类型转换
//2、函数模板用自动类型推导，不可以发生隐式类型转换
//3、函数模板用显示指定类型，可以发生隐式类型转换
//普通函数
//int add(int a, int b)
//{
//	return a + b;
//}
////模板
//template<class T>
//T myadd(T a, T b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	add(a, b);
//	cout << add(a, c) << endl;//自动隐式转换
//	//myadd(a, c);//模板自动推导类型推导不出一致类型
//	cout << myadd<int>(a, c) << endl;//使用显示指定可以
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//普通函数和函数模板的调用规则
//1.如果函数模板和普通函数都可以调用，优先调用普通函数
//2.可以通过空模板参数列表 强制调用 函数模板
//3.函数模板可以发生函数重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板
//5.提供了函数模板，就不要再写同名普通函数了，避免二义性

//1.如果函数模板和普通函数都可以调用，优先调用普通函数
//void print(int a, int b)
//{
//	cout << "普通函数的调用" << endl;
//}
//template<class T>
//void print(T a, T b)
//{
//	cout << "函数模板的调用" << endl;
//}
//void test1()
//{
//	print(10, 20);
//}
////2.可以通过空模板参数列表 强制调用 函数模板
//void test2()
//{
//	print<>(10, 20);
//}
////3.函数模板可以发生函数重载
//template<class T>
//void print(T a, T b,T c)
//{
//	cout << "函数模板重载的调用" << endl;
//}
//void test3()
//{
//	print(10, 20, 30);
//}
////4.如果函数模板可以产生更好的匹配，优先调用函数模板
//void test4()
//{
//	char a = 'a';
//	char b = 'b';
//	print(a, b);//这里如果调用普通函数就会涉及隐式类型转换，而函数模板不用，匹配度高优先调用函数模板
//}
//int main()
//{
//	test4();
//	system("pause");
//	return 0;
//}

//函数模板的具体化
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//template<class T>
//bool f(T &a, T &b);//没有具体化的函数模板是不能够比较自定义类型的数据的
//template<> bool f(person &p1, person &p2)
//{
//	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test()
//{
//	person p1("Tom", 10);
//	person p2("Tom", 11);
//	bool ret = f(p1, p2);
//	if (ret)
//	{
//		cout << "=" << endl;
//	}
//	else
//	{
//		cout << "!=" << endl;
//	}
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//2.类模板
//建立一个通用类，类中的成员,数据类型可以不具体制定，用一个虚拟的类型来代表。
//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	T1 m_name;
//	T2 m_age;
//	void show()
//	{
//		cout << m_name << endl;
//		cout << m_age << endl;
//	}
//};
//void test()
//{
//	person<string, int> p1("Tom", 10);
//	p1.show();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//类模板和函数模板的区别

//template<class T1, class T2 = int>//类模板可以有默认参数
//class person
//{
//public:
//	person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	T1 m_name;
//	T2 m_age;
//	void show()
//	{
//		cout << m_name << endl;
//		cout << m_age << endl;
//	}
//};
//void test1()
//{
//	//1.类模板不能使用自动类型推导
//	//person p1("Tom", 10);error
//	person <string, int>p1("Tom", 10);
//	p1.show();
//}
//void test2()
//{
//	//2.类模板可以有默认参数
//	person <string>p2("jerry", 20);
//	p2.show();
//}
//int main()
//{
//	test1();
//	test2();
//
//	system("pause");
//	return 0;
//}

//类模板中成员函数的创建时机
//类模板和普通类的成员函数不同，类模板只有在调用成员函数的时候创建
//class person1
//{
//public:
//	void showperson1()
//	{
//		cout << "person1" << endl;
//	}
//};
//class person2
//{
//public:
//	void showperson2()
//	{
//		cout << "person2" << endl;
//	}
//};
//template<class T>
//class person
//{
//public:
//	T p;
//	void showp1()
//	{
//		p.showperson1();
//	}
//	void showp2()
//	{
//		p.showperson2();
//	}
//};
//void test()
//{
//	person<person1>p1;
//	p1.showp1();
//	//p1.showp2();//注释这一行代码时，showp2()没有被调用，所以也不会被创建，那么也不会报错
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}

//类模板对象做函数参数
//有三种方式
//template<class T1 = string, class T2 = int>
//class person
//{
//public:
//	person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	T1 m_name;
//	T2 m_age;
//	void show()
//	{
//		cout << m_name << endl;
//		cout << m_age << endl;
//	}
//};
////1.直接指定传入类型
//void print1(person<string, int>& p)
//{
//	p.show();
//}
//void test1()
//{
//	person<string, int>p1("孙悟空", 100);
//	print1(p1);
//}
////2.函数参数模板化
//template<class T1,class T2>
//void print2(person<T1, T2>& p)
//{
//	p.show();
//	cout << "T1=" << typeid(T1).name() << endl;
//	cout << "T2=" << typeid(T2).name() << endl;
//
//}
//void test2()
//{
//	person<string, int>p2("猪八戒", 80);
//	print2(p2);
//}
////3.整个类模板化
//template<class T>
//void print3(T& p)
//{
//	p.show();
//	cout << "T=" << typeid(T).name() << endl;
//
//}
//void test3()
//{
//	person<string, int>p3("唐僧", 30);
//	print3(p3);
//}
//int main()
//{
//	test3();
//
//	system("pause");
//	return 0;
//}

//类模板和继承
//template<class T>
//class base
//{
//public:
//	T m;
//};
//1.子类继承的父类是一个类模板时，需要在声明时指明父类中T的类型
//class son:public base<int>
//{
//	;
//};
//void test1()
//{
//	son s1;
//}

//2.如果想灵活指定父类中T的类型，子类也需要变成类模板
//template<class T1,class T2>
//class son1 :public base<T2>
//{
//public:
//	son1()
//	{
//		cout << "T1:" << typeid(T1).name() << endl;
//		cout << "T2:" << typeid(T2).name() << endl;
//
//	}
//	T1 n;
//};
//void test2()
//{
//	son1<char,int> s2;
//}
//int main()
//{
//	test2();
//
//	system("pause");
//	return 0;
//}

//类模板成员函数的类外实现

//template<class T1, class T2>
//class person
//{
//public:
	//person(T1 name, T2 age);
	//T1 m_name;
	//T2 m_age;
	//void show();
//};
//类外实现，首先声明模板，声明作用域并加上模板参数即可
//template<class T1, class T2>
//person<T1, T2>::person(T1 name, T2 age)
//{
//	m_name = name;
//    m_age = age;
//}
//template<class T1, class T2>
//void person<T1, T2>::show()
//{
//    cout << m_name << endl;
//    cout << m_age << endl;
//}
//void test()
//{
//	person<string, int> p1("张三", 18);
//	p1.show();
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}

//类模板的分文件编写
//会遇到的问题：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决办法1：直接包含.cpp源文件
//解决办法2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制

//类模板友元
//全局函数的类内实现和类外实现
//类外实现全局函数
//template<class T1, class T2>
//class person;//提前让编译器知道person类的存在
//template<class T1, class T2>
//void show1(person< T1, T2 > p)//
//{
//	cout << p.m_name << endl;
//	cout << p.m_age << endl;
//}
//template<class T1, class T2>
//class person
//{
//	//类内实现全局函数
//	friend void show(person< T1, T2 > p)
//	{
//		cout << p.m_name << endl;
//		cout << p.m_age << endl;
//	}
//	//类外实现全局函数
//	//如果是类外实现，要让编译器先知道它的存在，不然在类内被识别为普通函数，类外实现又是类模板成员函数
//	friend void show1<>(person< T1, T2 > p);//这里加<>的空模板的参数列表就是告诉编译器这里是一个类模板函数
//public:
//	person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//void test()
//{
//	person<string, int>p1("Tom", 18);
//	show(p1);
//	show1(p1);
//
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}

//类模板案例
//template<class T>
//class myarr
//{
//public:
//	//有参构造
//	myarr(int capacity)
//	{
//		m_capacity = capacity;
//		m_size = 0;
//		this->address = new T[m_capacity];
//	}
//	//深拷贝
//	myarr(const myarr& arr)
//	{
//		m_capacity = arr.m_capacity;
//		m_size = arr.m_size;
//		this->address = new T[m_capacity];
//		for (int i = 0; i < m_size; i++)
//		{
//			this->address[i] = arr.address[i];
//		}
//	}
//	//重载=
//	myarr& operator=(const myarr& arr)
//	{
//		if (this->address != NULL)
//		{
//			delete[] this->address;
//			this->address = NULL;
//		}
//		m_capacity = arr.m_capacity;
//		m_size = arr.m_size;
//		this->address = new T[m_capacity];
//		for (int i = 0; i < m_size; i++)
//		{
//			this->address[i] = arr.address[i];
//		}
//		return *this;
//	}
//	//尾插法
//	void push_back(T& val)
//	{
//		if (m_capacity == m_size)
//		{
//			return;
//		}
//		this->address[m_size] = val;
//		m_size++;
//	}
//	//尾删法
//	void del_back(myarr& arr)
//	{
//		if (m_size == 0)
//		{
//			return;
//		}
//		m_size--;
//	}
//	//通过下标获取内容
//	T& operator[](int index)
//	{
//		return this->address[index];
//	}
//	//获取容量
//	int getcapacity()
//	{
//		return m_capacity;
//	}
//	//获取数组大小
//	int getsize()
//	{
//		return m_size;
//	}
//	//析构函数
//	~myarr()
//	{
//		if (this->address != NULL)
//		{
//			delete[] this->address;
//			this->address = NULL;
//		}
//	}
//private:
//	//数组
//	T* address;
//	//容量
//	int m_capacity;
//	//数组大小
//	int m_size;
//};
//class person
//{
//public:
//	person() {};//存在的意义在于3655行，需要使用到默认构造函数，即不进行初始化内容，只是创建
//	person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//void print(myarr<int>& arr)
//{
//	for (int i = 0; i < arr.getsize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//void test()
//{
//	myarr<int> arr1(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr1.push_back(i);
//	}
//	print(arr1);
//	cout << arr1.getcapacity() << endl;;
//	cout << arr1.getsize() << endl;
//	myarr<int> arr2(arr1);
//	arr2.del_back(arr2);
//	cout << arr2.getcapacity() << endl;;
//	cout << arr2.getsize() << endl;
//
//	print(arr2);
//}
//void test1()
//{
//	myarr<person> arr(5);
//	person p1("zhanfei", 35);
//	person p2("libai", 25);
//	arr.push_back(p1);
//	arr.push_back(p2);
//	for (int i = 0; i < arr.getsize(); i++)
//	{
//		cout << arr[i].m_name << " " << arr[i].m_age << endl;
//	}
//	cout << arr.getcapacity() << endl;;
//	cout << arr.getsize() << endl;
//}
//int main()
//{
//	test1();
//
//	system("pause");
//	return 0;
//}

//STL六大组件
//STL大体分为六大组件，分别是:容器、算法、迭代器、仿函数、适配器(配接器)、空间配置器
//1.容器 : 各种数据结构，如vector、list、deque、set、map等, 用来存放数据
//2.算法 : 各种常用的算法，如sort、find、copy、for_each等
//3.迭代器 : 扮演了容器与算法之间的胶合剂。
//4. 仿函数 : 行为类似函数，可作为算法的某种策略。
//5.适配器 : 一种用来修饰容器或者仿的数或迭代器接口的东西,
//6.空间配置器 : 负责空间的配置与管理。

//1.容器
//STL容器就是将运用最广泛的一些数据结构实现出来常用的数据结构:数组,链表,树,栈,队列,集合,映射表等
//这些容器分为序列式容器和关联式容器两种:
//序列式容器:强调值的排序，序列式容器中的每个元素均有固定的位置。
//关联式容器:二叉树结构，各元素之间没有严格的物理上的顺序关系

//2.算法
//有限的步骤，解决逻辑或数学上的问题，这一门学科我们叫做算法(Algorithms)
//算法分为:质变算法和非质变算法。
//质变算法: 是指运算过程中会更改区间内的元素的内容。例如拷贝，替换工删除等等
//非质变算法:是指运算过程中不会更改区间内的元素内容，例如查找、计数、遍历、寻找极值等等

//3.迭代器:容器和算法之间粘合剂
//提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式每个容器都有自己专属的迭代器
//迭代器使用非常类似于指针，初学阶段我们可以先理解迭代器为指针

//vector存放内置数据类型
#include<vector>
#include<algorithm>
//
//void print(int val)
//{
//	cout << val << endl;
//}
//void test()
//{
//	//创建名为v的容器，类似数组
//	vector<int> v;
//	//尾插法填入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//通过迭代器来访问容器中的数据
//	vector<int>::iterator itbegin = v.begin();//起始迭代器 指向容器中的第一个元素
//	vector<int>::iterator itend = v.end();//结束迭代器 指向容器中的最后一个元素的下一位
//	//1.while遍历
//	while (itbegin != itend)
//	{
//		cout << *itbegin << endl;
//		itbegin++;
//	}
//	//2.for循环遍历
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//3.STL提供的遍历算法
//	for_each(v.begin(), v.end(), print);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//vector容器存放自定义数据类型

//class person
//{
//public:
//	person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//void test()
//{
//	vector<person> v;
//	person p1("a", 11);
//	person p2("b", 12);
//	person p3("c", 14);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << it->m_name << " " << it->m_age << endl;
//	}
//	vector<person*> v1;
//	person p4("aa", 11);
//	person p5("bb", 12);
//	person p6("cc", 14);
//
//	v1.push_back(&p4);
//	v1.push_back(&p5);
//	v1.push_back(&p6);
//	for (vector<person*>::iterator it1 = v1.begin(); it1 != v1.end(); it1++)
//	{
//		cout << (*it1)->m_name << " " << (*it1)->m_age << endl;
//	}
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//容器嵌套容器

//void test()
//{
//	vector<vector<int>> v;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	for (int i = 0; i < 3; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator its = it->begin(); its != it->end(); its++)
//		{
//			cout << *its << " ";
//		}
//	}
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//string
//string是一个类，内部封装了char* 指针来管理字符串
//string 类内部封装了很多成员方法
//例如 : 查找find，拷贝copy，删除delete替换replace，插入insert
//string管理char* 所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

//1.string的构造函数
//str1ng()
//string(const char* s) :
//string(const string& str) :
//string(int n, char c) :

//void test()
//{
//	string s1;
//	string s2("hello world");
//	string s3(s2);
//	string s4(10, 'a');
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//string的赋值操作
//string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
//string& operator=(const string& s);//把字符串s赋给当前的字符串
//string& operator=(char c);//字符赋值给当前的字符串
//string& assign(const char* s);//把字符串s赋给当前的字符串
//string& assign(const char* s, int n); //把字符串s的前n个字符赋给当前的字符串
//string& assign(const string& s);//把字符串s赋给当前字符串
//string& assign(int n, char c);//用n个字符c赋给当前字符串

//int main()
//{
//	string str1;
//	str1 = "hello";
//	cout << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << str3 << endl;
//
//	string str4;
//	str4.assign("hello");
//	cout << str4 << endl;
//
//	string str5;
//	str5.assign("hello world",5);
//	cout << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << str6 << endl;
//
//	string str7;
//	str7.assign(5, 'a');
//	cout << str7 << endl;
//	
//	system("pause");
//	return 0;
//}

//string中的查找和替代

//int main()
//{
//	string str = "helloworldlo";
//	int op = str.find("lo");//找到就返回下标，找不到就返回-1
//	cout << op << endl;
//
//	//rfind和find的区别在于find是从左至右找，rfind是从右至左
//	int op1 = str.rfind("lo");
//	cout << op1 << endl;
//
//	//从下标为1的位置开始的三个字符替换为1111
//	str.replace(1, 3, "1111");
//
//	system("pause");
//	return 0;
//}

//string中的比较compare
//字符串比较实际上是看它们是不是相同，比较大小没有很大意义
//比较方式：逐个字母比较ASCII值
//=:相同；>:前字符串大；<:后字符串大
//int main()
//{
//	string str1 = "hello";
//	string str2 = "xello";
//	
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1=str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1>str2" << endl;
//	}
//	else
//	{
//		cout << "str1<str2" << endl;
//	}
//	return 0;
//}

//string字符串的读写

//int main()
//{
//	string str = "hello";
//	//两种访问方式：[]和at
//	//1.读
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//	//2.写
//	str[0] = 'x';
//	str.at(1) = 'x';
//	cout << str << endl;
//	system("pause");
//	return 0;
//}

//string字符串的插入和删除

//int main()
//{
//	string str = "hello";
//	//1.插入
//	str.insert(1, "222");//第一个参数是插入位置
//	cout << str << endl;
//	//2.删除
//	str.erase(1, 3);//第一个参数是擦除开始位置，第二个参数是要擦除的个数
//	cout << str << endl;
//	system("pause");
//	return 0;
//}

//string的字串获取

//int main()
//{
//	string str = "hello";
//	string str1 = str.substr(1, 2);//第一个参数是获取起始的位置，第二个参数是要获取的个数
//	cout << str1 << endl;
//	//实际应用
//	string str2 = "liaozhengwu@qq.com";
//	int ops = str2.find('@');
//	string str3 = str2.substr(0, ops);
//	cout << str3 << endl;
//	system("pause");
//	return 0;
//}

//vector容器-构造函数

//vector的数据结构和数组非常相似，支持尾端插入和删除，被称为单端数组
//不同之处在于，数组是静态空间，而vector是动态空间，可以根据需求动态扩展
//动态扩展：并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}
//int main()
//{
//	//默认构造
//	vector<int> v1;
//	int i = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//	cout << endl;
//	//通过区间的形式构造
//	vector<int> v2(v1.begin(), v1.end());
//	print(v2);
//	cout << endl;
//	//n个elm构造
//	vector<int> v3(10, 100);//第一个参数是个数，第二个参数是元素
//	print(v3);
//	cout << endl;
//	//拷贝构造
//	vector<int> v4(v3);//第一个参数是个数，第二个参数是元素
//	print(v4);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//vector的赋值

//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//	//1
//	vector<int> v2;
//	v2 = v1;
//	print(v2);
//	//2
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	print(v3);
//	//3
//	vector<int> v4;
//	v4.assign(10, 100);
//	print(v4);
//
//	system("pause");
//	return 0;
//}

//vector容器的容量和大小
//empty()判断是否为空
//size()元素个数
//capacity()容器总容量
//resize()重新指定元素长度：超过则默认补0，也可以设置补充的元素；少于则删除多余元素

//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//	if (v1.empty())
//	{
//		cout << "容器为空" << endl;
//	}
//
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器中元素个数:" << v1.size() << endl;
//		cout << "容器容量:" << v1.capacity() << endl;
//
//	}
//	v1.resize(13);
//	print(v1);
//	v1.resize(15,100);
//	print(v1);
//	v1.resize(5);
//	print(v1);
//
//	system("pause");
//	return 0;
//}

//vector的插入和删除
//push back(ele);//尾部插入元素ele
//pop_back();//删除最后一个元素
//insert(const iterator pos, ele)//迭代器指向位置pos插入元素ele
//insert(const_iterator pos，int count, ele);//迭代器指向位置pos插入count个元索ele
//erase(const iterator pos);//删除迭代器指向的元素
//erase(const_iterator start, const iterator end);//删除选代器从start到end之间的元素
//clear();//删除容器中所有元素

//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//	//尾删
//	v1.pop_back();
//	print(v1);
//	//插入元素
//	v1.insert(v1.begin(), 100);
//	print(v1);
//	v1.insert(v1.begin(), 2, 100);
//	print(v1);
//	//删除元素
//	v1.erase(v1.begin());
//	print(v1);
//	v1.erase(v1.begin(), v1.end() - 1);
//	print(v1);
//	//清空容器
//	v1.clear();
//	print(v1);
//
//	system("pause");
//	return 0;
//}

//vector内容的存取

//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//	//[]访问
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] <<" ";
//	}
//	cout << endl;
//	//at()访问
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	cout << "容器第一个元素：" << v1.front() << endl;
//	cout << "容器最后一个元素：" << v1.back() << endl;
//
//	system("pause");
//	return 0;
//}

//vector互换容器

//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前：" << endl;
//	print(v1);
//	vector<int> v2;
//	for (int i = 1; i < 11; i++)
//	{
//		v2.push_back(i);
//	}
//	print(v2);
//	//swap()互换元素
//	cout << "互换后：" << endl;
//	v1.swap(v2);
//	print(v1);
//	print(v2);
//
//	//实际应用：收缩内存效果
//	vector<int> v3;
//	for (int i = 1; i < 10000; i++)
//	{
//		v3.push_back(i);
//	}
//	cout << "容量：" << v3.capacity() << endl;
//	cout << "元素个数：" << v3.size() << endl;
//	v3.resize(3);//当进行缩减操作时，元素个数是减少了，但是容器容量不变，占用空间过大
//	cout << "容量：" << v3.capacity() << endl;
//	cout << "元素个数：" << v3.size() << endl;
//	//利用匿名对象和swap()来解决
//	vector<int>(v3).swap(v3);//这行代码前半部分是匿名对象，括号里面v3意思是按照v3的个数来创建并初始化一个匿名对象，
//	//后部分是让匿名对象容器和v3进行容器交换，交换完以后v3这个对象实际上就指向了匿名对象容器，之前大容量的容器被匿名对象容器管理，
//	//而匿名对象的特点是过了这一行，对象立马释放，也就达到了空间释放的目的
//	cout << "容量：" << v3.capacity() << endl;
//	cout << "元素个数：" << v3.size() << endl;
//
//	system("pause");
//	return 0;
//}

//vector的预留空间
//减少vector在动态扩展容量时的扩展次数
//reserve(int 1en);//容器预留len个元素长度，预留位置不初始化，元素不可访问。

//int main()
//{
//	vector<int> v1;
//	v1.reserve(10000);//让系统提前知道，预留这么大的空间，可以有效减少扩展次数
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 10000; i++)//因为要存储的数据量过大，系统要不断的寻求新的更大空间
//	{
//		v1.push_back(i);
//		if (p != &v1[0])
//		{
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << num << endl;
//	system("pause");
//	return 0;
//}

//deque容器
//双端数组，可在头部和尾部进行插删，迭代器支持随机访问

//和vector的区别：
//vector对于头部的插入速度没有deque快
//vector访问元素的速度要比deque快，和实现原理有关（中控器）
#include<deque>
//
//void print(const deque<int>& d)//限定只读权限
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//	//构造函数
//	deque<int> d2(d1.begin(), d1.end());
//	print(d2);
//	deque<int> d3(10, 100);
//	print(d3);
//	deque<int> d4(d3);
//	print(d4);
//	//赋值
//	deque<int> d5;
//	d5 = d1;
//	print(d5);
//
//	deque<int> d6;
//	d6.assign(d1.begin(), d1.end());
//	print(d6);
//
//	deque<int> d7;
//	d7.assign(10, 100);
//	print(d7);
//
//	system("pause");
//	return 0;
//}

//deque容器的大小操作

//deque容器没有容量的概念，因为它能一直开辟下去
//size,resize,empty和vector完全一致

//deque容器的插入和删除

void print(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//int main()
//{
//	//1.插入
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(100);
//	d1.push_front(200);
//	print(d1);
//
//	d1.insert(d1.begin(), 1);
//	print(d1);
//
//	d1.insert(d1.begin(), 2, 3);
//	print(d1);
//
//	deque<int> d2;
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	print(d2);
//
//	//2.删除
//	deque<int> d3;
//	d3.push_back(1);
//	d3.push_back(2);
//	d3.push_back(4);
//	d3.push_back(3);
//	d3.push_back(3);
//
//
//	print(d3);
//	d3.pop_back();
//	d3.pop_front();
//	print(d3);
//
//	d3.erase(d3.begin());
//	print(d3);
//
//	d3.erase(d3.begin(),d3.end());
//	print(d3);
//
//	d3.clear();
//	print(d3);
//	system("pause");
//	return 0;
//}

//deque容器的数据存取

//int main()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_back(40);
//	d1.push_back(50);
//	d1.push_back(60);
//
//	for (int i = 0; i < 6; i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0l; i < 6; i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "容器的第一个元素：" << d1.front() << endl;
//	cout << "容器最后一个元素：" << d1.back() << endl;
//
//	system("pause");
//	return 0;
//}

//deque容器的排序
//sort对于支持随机访问的迭代器的容器，都支持排序
//默认排序方式，升序
//#include<algorithm>
//int main()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_back(40);
//	d1.push_back(50);
//	d1.push_back(60);
//	d1.push_front(100);
//	cout << "未排序：" << endl;
//	print(d1);
//	cout << "排序后：" << endl;
//	sort(d1.begin(), d1.end());
//	print(d1);
//
//	system("pause");
//	return 0;
//}

//容器实用案例
#include<ctime>
//class person
//{
//public:
//	person(string name,int score)
//	{
//		this->m_name = name;
//		this->m_score = score;
//	}
//	string m_name;
//	int m_score;
//};
//void createplayer(vector<person>& v)
//{
//	string str = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += str[i];
//		int score = 0;
//		v.push_back(person(name, score));//person类构造函数初始化姓名和得分
//	}
//}
//void setscore(vector<person>& v)
//{
//	srand((unsigned int)time(NULL));//设计随机数种子
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)//遍历每一个选手
//	{
//		deque<int> d;
//		for (int i = 0; i < 10; i++)//为每个选手打分
//		{
//			d.push_back(rand() % 41 + 60);//60-100
//		}
//		//删除最高和最低分
//		d.pop_back();
//		d.pop_front();
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//		int avg = sum / d.size();
//		//赋值给每一个选手
//		it->m_score = avg;
//	}
//}
//void showscore(vector<person>& v)
//{
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << it->m_name << " " << "得分：" << it->m_score << endl;
//	}
//}
//int main()
//{
//	//创建5名选手
//	vector<person> v;
//	createplayer(v);
//	//测试
//	//for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "姓名：" << it->m_name << "得分" << it->m_score << endl;
//	//}
//	//为选手打分
//	setscore(v);
//
//	//展示分数
//	showscore(v);
//
//	system("pause");
//	return 0;
//}

//栈stack容器
//先进后出，不能遍历，支持empty，size，top，
//出栈pop，入栈push
#include<stack>
//int main()
//{
//	stack<int> s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	s.push(50);
//	cout << "栈的大小：" << s.size() << endl;
//	while (!empty(s))
//	{
//		cout << "栈顶元素为：" << s.top() << endl;
//		s.pop();
//	}
//	cout << "栈的大小：" << s.size() << endl;
//
//	system("pause");
//	return 0;
//}

//队列queue容器
//先进先出，可以访问队首队尾，不能遍历
//支持pop，push，front，back

//#include<queue>
//class person
//{
//public:
//	person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//int main()
//{
//	queue<person> q;
//	person p1("唐僧", 30);
//	person p2("孙悟空", 300);
//	person p3("猪八戒", 100);
//	person p4("沙僧", 200);
//	person p5("小白龙", 80);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	q.push(p5);
//
//	cout << "队列大小：" << q.size() << endl;
//
//	while (!empty(q))
//	{
//		cout << "队首：" << q.front().m_name << " " << q.front().m_age << endl;
//		cout << "队尾：" << q.back().m_name << " " << q.back().m_age << endl;
//		q.pop();
//	}
//
//	cout << "队列大小：" << q.size() << endl;
//
//	system("pause");
//	return 0;
//}

//list链表
//功能:将数据进行链式存储
//链表(list)是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表的组成 : 链表由一系列结点组成
//结点的组成 : 一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域
//由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器
//list的优点:
//1.采用动态存储分配，不会造成内存浪费和溢出
//2.链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素list的
//缺点 :
//1.链表灵活，但是空间(指针域)和 时间(遍历)额外耗费较大
//List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的
//总结 : STL中List和vector是两个最常被使用的容器，各有优缺点

//list构造函数以及赋值，交换
#include<list>
void printlist(list<int>& L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//int main()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//	printlist(L1);
//
//	list<int> L2(L1.begin(), L1.end());
//	printlist(L2);
//
//	list<int> L3(L1);
//	printlist(L3);
//
//	list<int> L4(5,100);
//	printlist(L4);
//
//	list<int> L5;
//	L5 = L1;
//	printlist(L5);
//
//	list<int> L6;
//	L6.assign(L1.begin(), L1.end());
//	printlist(L6);
//
//	list<int> L7;
//	L7.assign(10, 1);
//	printlist(L7);
//
//	list<int> L8;
//	L8.push_back(1);
//	L8.push_back(2);
//	L8.push_back(3);
//	L8.push_back(4);
//	L8.push_back(5);
//
//	cout << "交换前：" << endl;
//	printlist(L8);
//	printlist(L1);
//
//	L8.swap(L1);
//	cout << "交换后：" << endl;
//	printlist(L8);
//	printlist(L1);
//
//	system("pause");
//	return 0;
//}

//list的大小操作和之前的容器没有区别

//list的插入和删除
/*push_back(elem);//在容器尾部加入一个元素
pop_back();//删除容器中最后一个元素
push_front(elem);//在容器开头插入一个元素
pop_front();//从容器开头移除第一个元素
insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值
clear();//移除容器的所有数据
erase(peg,end);//删除[beg,end)区间的数据，返回下一个数据的位置
erase(pos);//删除pos位置的数据，返回下一个数据的位置
remove(elem);//删除容器中所有与elem值匹配的元素。
*/

//int main()
//{
//	list<int> L;
//	L.push_back(100);
//	L.push_back(10);
//	L.push_back(10);
//	L.push_back(1);
//	printlist(L);
//	L.remove(10);
//
//	printlist(L);
//
//	system("pause");
//	return 0;
//}

//list数据的存取

//int main()
//{
//	list<int> L;
//	L.push_back(100);
//	L.push_back(10);
//	L.push_back(10);
//	L.push_back(1);
//	cout << L.front() << endl;
//	cout << L.back() << endl;
//
//	list<int>::iterator it = L.begin();
//	it++;
//	it--;//不报错说明list支持双向
//
//	//it = it + 1;//报错说明链表迭代器不支持随机访问
//	cout << *(it++) << endl;
//
//	system("pause");
//	return 0;
//}

//list容器的反转和排序
//bool mycompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//int main()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(30);
//	L.push_back(20);
//	L.push_back(50);
//	printlist(L);
//	//反转
//	L.reverse();
//	printlist(L);
//	//排序
//	//sort(L.begin(), L.end());//这里因为list容器不支持随机访问，因此不能使用全局排序函数
//	//正确做法是使用容器内部成员函数sort
//	L.sort();//默认升序
//	printlist(L);
//	//降序做法
//	L.sort(mycompare);
//	printlist(L);
//	system("pause");
//	return 0;
//}

//排序案例
//class person
//{
//public:
//	person(string name, int age, int hight)
//	{
//		this->m_name = name;
//		this->m_age = age;
//		this->m_hight = hight;
//	}
//	string m_name;
//	int m_age;
//	int m_hight;
//};
//bool compare(person& p1, person& p2)
//{
//	if (p1.m_age == p2.m_age)
//	{
//		return p1.m_hight > p2.m_hight;
//	}
//	else
//	{
//		return p1.m_age < p2.m_age;
//	}
//}
//int main()
//{
//	list<person> L;
//	person p1("刘备", 35, 175);
//	person p2("张飞", 30, 180);
//	person p3("诸葛亮", 40, 176);
//	person p4("赵云", 34, 183);
//	person p5("关羽", 34, 185);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//
//	cout << "排序前：" << endl;
//	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：\t" << it->m_name << "\t年龄：" << it->m_age << "\t身高：" << it->m_hight << endl;
//	}
//	cout << "排序后：" << endl;
//	L.sort(compare);
//	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：\t" << it->m_name << "\t年龄：" << it->m_age << "\t身高：" << it->m_hight << endl;
//	}
//	system("pause");
//	return 0;
//}

//set集合
//所有元素在被插入的时候就会被自动排序
//set和multiset是关联式容器，底层结构是二叉树
//区别：set不能插入重复值，multiset可以
//只能用insert插入元素
#include<set>

void printset(multiset<int>s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//int main()
//{
//	multiset<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//	s.insert(10);
//	s.insert(10);
//	printset(s);
//
//	multiset<int>s1(s);
//	printset(s1);
//
//	multiset<int> s2;
//	s2 = s1;
//	printset(s2);
//
//	system("pause");
//	return 0;
//}

//set的大小和交换
//set没有resize的操作
//int main()
//{
//	multiset<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//	s.insert(10);
//	s.insert(10);
//	multiset<int> s1;
//	s1.insert(100);
//	s1.insert(200);
//	s1.insert(300);
//	s1.insert(400);
//	s1.insert(500);
//	if (!s.empty())
//	{
//		cout << "set不为空" << endl;
//		cout << "set容器大小为：" << s.size() << endl;
//	}
//	else
//	{
//		cout << "set容器为空" << endl;
//	}
//	//交换前
//	cout << "交换前：" << endl;
//	printset(s);
//	printset(s1);
//	//交换后
//	cout << "交换后：" << endl;
//	s1.swap(s);
//	printset(s);
//	printset(s1);
//	system("pause");
//	return 0;
//}

//set的删除、清空

//int main()
//{
//	multiset<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//	s.insert(10);
//	s.insert(10);
//	printset(s);
//
//	s.erase(s.begin());
//	printset(s);
//
//	s.erase(10);
//	printset(s);
//
//	s.erase(s.begin(), s.end());
//	printset(s);
//
//	s.clear();
//	printset(s);
//
//	system("pause");
//	return 0;
//}

//set容器的查找和统计

//int main()
//{
//	multiset<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//	s.insert(10);
//	s.insert(10);
//	printset(s);
//	multiset<int>::iterator pos = s.find(30);
//	if (pos != s.end())
//	{
//		cout << "找到元素：" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到该元素" << endl;
//	}
//	int count = s.count(10);
//	cout << "要统计的元素个数为：" << count << endl;
//	system("pause");
//	return 0;
//}

//set和multiset的区别
//set不可以插入重复数据，而multiset可以
//set插入数据的同时会返回插入结果，表示插入是否成功
//nultiset不会检测数据，因此可以插入重复数据
//不需要重复数据就用set
//int main()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);//插入操作会返回两个值，一个是迭代器，一个是bool值
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//	system("pause");
//	return 0;
//}

//pair对组创建
//如果想返回两个数据则可以用对组

//int main()
//{
//	//1
//	pair<string, int> p1("Tom", 12);
//	cout << "姓名：" << p1.first << "年龄：" << p1.second << endl;
//
//	//2
//	pair<string, int> p2 = make_pair("jerry", 10);
//	cout << "姓名：" << p2.first << "年龄：" << p2.second << endl;
//
//	system("pause");
//	return 0;
//}

//set内置数据类型排序规则设置
//class compare
//{
//public:
//	bool const operator()(int v1, int v2)const//加const的原因是这里只对传入的数据进行比较，而不能改变，如果不加编译器会拒绝传递
//	{
//		return v1 > v2;//利用仿函数实现降序
//	}
//};
//int main()
//{
//	multiset<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//	s.insert(10);
//	printset(s);
//
//	multiset<int,compare> s1;//提前告诉set容器排序规则
//	s1.insert(50);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(10);
//	for (multiset<int, compare>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//set自定义类型排序规则

//class person
//{
//public:
//	person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//class compare
//{
//public:
//	bool operator()(const person& p1, const person& p2)const
//	{
//		return  p1.m_age > p2.m_age;
//	}
//};
//int main()
//{
//	set<person,compare> s;//对于自定义类型的数据类型，必须一开始就指定排序规则
//	person p1("刘备", 35);
//	person p2("关羽", 32);
//	person p3("张飞", 34);
//	person p4("赵云", 30);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<person,compare>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << it->m_name << " " << it->m_age << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//哈希表map/multimap容器
//map中所有元素都是pair,pair中第一个元素为key(键值)，起到索引作用，第二个元素为vaue(实值)
//所有元素都会根据元素的键值自动排序
//可以根据key值迅速找到value值
//map/multimap属于关联式容器，底层结构是用二叉树实现。
//map不允许容器中有重复key值元素
//multimap允许容器中有重复key值元素
#include<map>
//int main()
//{
//	map<int, int> mp;
//	mp.insert(pair<int, int>(1, 10));
//	mp.insert(pair<int, int>(2, 100));
//	mp.insert(pair<int, int>(3, 101));
//	mp.insert(pair<int, int>(4, 103));
//	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	system("pause");
//	return 0;
//}

//map的大小和交换
void printmap(map<int, int>mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
}
//int main()
//{
//	map<int, int> mp;
//	mp.insert(pair<int, int>(1, 10));
//	mp.insert(pair<int, int>(2, 100));
//	mp.insert(pair<int, int>(3, 101));
//	mp.insert(pair<int, int>(4, 103));
//	map<int, int> mp1;
//	mp1.insert(pair<int, int>(11, 10));
//	mp1.insert(pair<int, int>(21, 100));
//	mp1.insert(pair<int, int>(31, 101));
//	mp1.insert(pair<int, int>(41, 103));
//	if (mp.empty())
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器大小为：" << mp.size() << endl;
//	}
//	cout << "交换前：" << endl;
//	printmap(mp);
//	printmap(mp1);
//
//	cout << "交换后：" << endl;
//	mp1.swap(mp);
//	printmap(mp);
//	printmap(mp1);
//
//	system("pause");
//	return 0;
//}

//map容器的插入和删除

//int main()
//{
//	map<int, int> mp;
//	//1.
//	mp.insert(pair<int, int>(1, 10));
//	//2.
//	mp.insert(make_pair(2, 100));
//	//3.
//	mp.insert(map<int,int>::value_type(3, 101));
//	//4.
//	mp[4]=40;//一般不建议用这种[]括号的形式来插入，怕不注意创建不存在的键值对，一般用来用key值快速找到对应的值
//
//	printmap(mp);
//
//	cout << "-------------" << endl;
//	mp.erase(mp.begin());
//	printmap(mp);
//
//	cout << "-------------" << endl;
//	mp.erase(3);
//	printmap(mp);
//
//	cout << "-------------" << endl;
//	mp.erase(++mp.begin(),mp.end());
//	printmap(mp);
//
//	cout << "-------------" << endl;
//	mp.clear();
//	printmap(mp);
//
//	system("pause");
//	return 0;
//}

//map查找和统计

//int main()
//{
//	map<int, int> mp;
//	mp.insert(pair<int, int>(1, 10));
//	mp.insert(pair<int, int>(2, 100));
//	mp.insert(pair<int, int>(3, 101));
//	mp.insert(pair<int, int>(4, 103));
//	//查找
//	map<int, int>::iterator pos = mp.find(3);
//	if (pos != mp.end())
//	{
//		cout << "找到元素：" << "key=" << pos->first << "value=" << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//	//统计
//	int count = mp.count(3);
//	cout << "个数：" << count << endl;
//	system("pause");
//	return 0;
//}

//map排序

//class person
//{
//public:
//	person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	int m_age;
//	string m_name;
//};
//class compare
//{
//public:
//	bool operator()(const person& p1, const person& p2)const
//	{
//		return p1.m_age > p2.m_age;
//	}
//};
//int main()
//{
//	map<person,int,compare>mp;
//	person p1("刘备", 45);
//	person p2("张飞", 35);
//	person p3("关羽", 40);
//
//	mp.insert(pair<person,int>(p1,1));
//	mp.insert(pair<person, int>(p2, 1));
//	mp.insert(pair<person, int>(p3, 1));
//
//	for (map<person,int>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "姓名：" << (it->first).m_name << " 年龄：" << (it->first).m_age << endl;
//	}
//	system("pause");
//	return 0;
//}

//函数对象--仿函数

//重载函数调用操作符的类，其对象常称为函数对象
//函数对象使用重载的()时，行为类似函数调用，也叫仿函数
//函数对象本质是一个类，不是函数

//1.函数对象在使用时，可以像普通的数那样调用,可以有参数，可以有返回值
//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
//3.函数对象可以作为参数传递

//class add
//{
//public:
//	add()
//	{
//		count = 0;
//	}
//	int operator()(int v1, int v2)
//	{
//		count++;
//		return v1 + v2;
//	}
//	int count;//对应第二点，可以有自己的状态，进行记录
//};
//void myprint(add& ad, int v1, int v2)
//{
//	cout << ad(v1, v2) << endl;
//}
//int main()
//{
//	add myadd;
//	cout << myadd(1, 2) << endl;//对应第一点，可以有参数和返回值，以及形式类似于函数调用
//
//	myprint(myadd, 1, 2);//对应第三点，函数对象可以作为参数传递
//
//	system("pause");
//	return 0;
//}

//谓词
//返回bool类型的仿函数称为谓词
//如果operator()接受一个参数，那么叫做一元谓词
//如果operator()接受两个参数，那么叫做二元谓词
#include<algorithm>
//class greaterfive
//{
//public:
//	bool operator()(int val)//一元谓词
//	{
//		return 5 < val;
//	}
//};
//class mysort
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//int main()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive());
//	if (it != v.end())
//	{
//		cout << "找到了大于5的数：" << *it << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	vector<int> v1;
//	v1.push_back(5);
//	v1.push_back(8);
//	v1.push_back(3);
//	v1.push_back(1);
//
//	sort(v1.begin(), v1.end(), mysort());
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//内建函数对象
//1.算术仿函数
//其中negate是一元运算，其他的都是二元运算
//template<class T>T plus<T>//加法仿函数
//template<class T>T minus<T>//减法仿函数
//template<class T>T multiplies<T>//乘法仿函数
//template<class T>T divides<T>//除法仿函数
//template<class T>T modulus<T>//取模仿函数
//template<class T>T negate<T>//取反仿函数

#include<functional>
//int main()
//{
//	negate<int>n;//类模板创建一个对象
//	cout << n(10) << endl;
//	plus<int> p;
//	cout << p(10, 20) << endl;
//
//	system("pause");
//	return 0;
//}

//2.关系仿函数
//template<class T> bool equal to<T>//等于
//template<class T> bool not_equal to<T>//等于
//template<class T> bool greater<T>//大于
//template<class T> bool greater equal<T>//大于等于
//template<class T> bool less<T>//小于
//template<class T> bool less_equal<T>//小于等于
//其中大于是最常用的

//int main()
//{
//	
//	vector<int> v1;
//	v1.push_back(5);
//	v1.push_back(8);
//	v1.push_back(3);
//	v1.push_back(1);
//
//	sort(v1.begin(), v1.end(), greater<int>());
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//3.逻辑仿函数
//template<class T> bool logical _and<T>//逻辑与
//template<class T> bool logical_or<T>//逻辑或
//template<class T> bool logical not<T>//逻辑非

//int main()
//{
//	
//	vector<bool> v1;
//	v1.push_back(false);
//	v1.push_back(true);
//	v1.push_back(true);
//	v1.push_back(false);
//
//	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	vector<bool>v2;
//	v2.resize(v1.size());
//	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//常用算法
//常用遍历算法
//1.for_each
void myprint(int val)
{
	cout << val << " ";
}
class print1
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//int main()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myprint);
//	cout << endl;
//	for_each(v.begin(), v.end(), print1());
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//2.transform
//四个参数
//transform(iteratorbeg1, iterator end1, iterator beg2, _func);
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象
//class trans
//{
//public:
//	int operator()(int val)
//	{
//		return val + 100;
//	}
//};
//int main()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>v1;
//	v1.resize(v.size());//必须记得提前开辟空间
//	transform(v.begin(), v.end(), v1.begin(),trans());
//	for_each(v1.begin(), v1.end(), myprint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//常用查找算法
//find//查找元素
//find if//按条件查找元素
//adjacent find//查找相邻重复元素
//binary search//二分查找法
//count//统计元素个数
//count if//按条件统计元素个数
//class person
//{
//public:
//	person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	bool operator==(const person& p)
//	{
//		if (p.m_name == this->m_name && p.m_age == this->m_age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_name;
//	int m_age;
//};
//class greaterfive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//class greater20
//{
//public:
//	bool operator()(const person& p)
//	{
//		return p.m_age > 20;
//	}
//};
//int main()
//{
//	//内置数据类型
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it != v.end())
//	{
//		cout << "找到元素：" << *it << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//	vector<int>::iterator it1 = find_if(v.begin(), v.end(), greaterfive());
//	if (it1 != v.end())
//	{
//		cout << "找到元素：" << *it1 << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//	//自定义数据类型
//	vector<person>v1;
//	person p1("aaa", 10);
//	person p2("bbb", 20);
//	person p3("ccc", 30);
//	person p4("ddd", 40);
//	
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//
//	person p("bbb", 20);
//	vector<person>::iterator vit = find(v1.begin(), v1.end(), p);
//	if (vit != v1.end())
//	{
//		cout << "找到元素：" << vit->m_name << " " << vit->m_age << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//	vector<person>::iterator vit1 = find_if(v1.begin(), v1.end(), greater20());
//	if (vit1 != v1.end())
//	{
//		cout << "找到元素：" << vit1->m_name << " " << vit1->m_age << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//	system("pause");
//	return 0;
//}

//adjacent_find查找相邻重复元素

//int main()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(1);
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it != v.end())
//	{
//		cout << "找到元素：" << *it << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//binary_search二分查找
//仅用于有序序列,无序的结果未知
//返回false或者true

int main()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 4);
	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	system("pause");
	return 0;
}