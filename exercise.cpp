#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;


//1.判断大小端(联合体)

//union un
//{
//	int a;
//	char c;
//};
//int main()
//{
//	un u1;
//	u1.a = 1;
//	if (u1.c != 1)
//	{
//		cout << "大端存储" << endl;
//	}
//	else
//	{
//		cout << "小端存储" << endl;
//	}
//	system("pause");
//	return 0;
//}

//强制类型转换

//int main()
//{
//	int a = 1;
//	if ((char)a != 1)
//	{
//		cout << "大端存储" << endl;
//	}
//	else
//	{
//		cout << "小端存储" << endl;
//	}
//	system("pause");
//	return 0;
//}

//2.将0~65535的十进制数字转化为二进制、八进制和十六进制
void exchange(int num,int input)
{
	stack<int> s;
	int n = num;
	int radix = 0;
	if (input == 1)
	{
		radix = 2;
		cout << "0b";
	}
	else if (input == 2)
	{
		radix = 8;
		cout << "0";
	}
	else
	{
		radix = 16;
		cout << "0x";
	}
	while (num / radix != 0)
	{
		s.push(num % radix);
		n = num / radix;
		num = n;
	}
	s.push(num);
	while (s.size() != 0)
	{
		if (s.top() < 10)
		{
			cout << s.top();
		}
		else
		{
			char ch = 'a';
			ch += s.top() - 10;
			cout << ch;
		}
		s.pop();
	}
	cout << endl;
}
int main()
{
	int num = 0;
	int input = 0;
	cout << "请输入数字：" << endl;
	cin >> num;
	cout << "请输入要转化的进制：1.二进制 2.八进制 3.十六进制" << endl;
	cin >> input;
	exchange(num,input);
	system("pause");
	return 0;
}