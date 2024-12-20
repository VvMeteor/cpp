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

class person
{
public:
	string name;
protected:
	string car;
private:
	string password;
};

int main()
{
	person p1;
	p1.name = "zhangsan";
	//p1.car;类外不可访问
	//p1.password;类外不可访问，会报错
	system("pause");
	return 0;
}