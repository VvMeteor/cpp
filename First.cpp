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

class person
{
public:
	//this指针的本质一个指针常量，指向的对象不能变
	//下面成员函数后面加个const相当于const person* const this，指向对象的属性也不能变了
	void func1()const
	{
		//age = 100;error
		_age = 200;//correct
	}
	void func2()
	{
		;
	}
	int age;
	mutable int _age;//加关键字在常对象和常函数里都可以被改变
};
//2.常对象
//声明对象前加const后称该对象为常对象，常对象属性不能改变
//常对象只能调用常函数，因为如果可以调用普通函数的话，在普通函数内部可以改成员属性，这会与常对象的性质冲突
int main()
{
	const person p;
	p.func1();
	p._age = 1000;
	//p.func2();error
	system("pause");
	return 0;
}
