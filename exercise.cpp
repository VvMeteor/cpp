#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;


//1.�жϴ�С��(������)

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
//		cout << "��˴洢" << endl;
//	}
//	else
//	{
//		cout << "С�˴洢" << endl;
//	}
//	system("pause");
//	return 0;
//}

//ǿ������ת��

//int main()
//{
//	int a = 1;
//	if ((char)a != 1)
//	{
//		cout << "��˴洢" << endl;
//	}
//	else
//	{
//		cout << "С�˴洢" << endl;
//	}
//	system("pause");
//	return 0;
//}

//2.��0~65535��ʮ��������ת��Ϊ�����ơ��˽��ƺ�ʮ������
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
	cout << "���������֣�" << endl;
	cin >> num;
	cout << "������Ҫת���Ľ��ƣ�1.������ 2.�˽��� 3.ʮ������" << endl;
	cin >> input;
	exchange(num,input);
	system("pause");
	return 0;
}