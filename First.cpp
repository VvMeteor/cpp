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
