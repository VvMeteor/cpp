#include<iostream>
#include<string>
using namespace std;

//int main()
//{
//	cout << "hello world!" << endl;
//	int a = 10;
//	cout << "a=" << a << endl;
//
//	//������float��˫����double�����С��Ĭ�����6λ��Ч����
//	float f1 = 3.1415926f;//������Ĭ��С��Ϊ˫���ȣ���fת��������Ҳû���⣬float��������
//	cout << "f1=" << f1 << endl;
//
//	//��ѧ������
//	float b = 3e2;//��Ч��3*10^2=300
//	cout << "b=" << b << endl;
//
//	//���õ�ת���ַ�
//	cout << "hehe\n";
//	cout << "hahaha\taaaaa" << endl;//\t����ǰ���ַ���һ��8���ո�λ������ˮƽ�Ʊ�
//	cout << "haha\tbbbbb" << endl;
//	cout << "hahaha\tcccc" << endl;
//	cout << "\\" << endl;
//
//	return 0;
//}

//����ַ���
//int main()
//{
//	//c���Է��
//	char str[] = "hello world!";
//	cout << str << endl;
//	//c++�ָ�,��Ҫ����ͷ�ļ�<string>
//	string str1 = "hello world!";
//	cout << str1 << endl;
//	return 0;
//}

//��������
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;
//	flag = false;
//	cout << flag << endl;
//	cout << "bool���͵Ĵ�С�ǣ�" << sizeof(bool) << endl;
//	return 0;
//}

//��������
//int  main()
//{
//	int a = 0;
//	cout << "������a��ֵ��" << endl;
//	cin >> a;
//	cout << "����a��ֵΪ��" << a<<endl;
//
//	string str = "";
//	cin >> str;
//	cout << str << endl;
//	return 0;
//}

//����С�������

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

//������
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
//		cout << "�����֣�" << endl;
//		cin >> b;
//		if (a == b)
//		{
//			cout << "�¶���" << endl;
//			break;
//		}
//		else if (a > b)
//		{
//			cout << "��С��" << endl;
//		}
//		else
//		{
//			cout << "�´���" << endl;
//		}
//	}
//	return 0;
//}

//�ҳ���λ����ˮ�ɻ���
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

//������

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
//		{
//			cout << "������" << endl;
//			continue;
//		}
//		cout << i << endl;
//	}
//	return 0;
//}

//�˷��ھ���
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

//����

//int main()
//{
//	int arr[10];
//	cout << arr << endl;//���������Ԫ�ص�ַ
//	cout << &arr[0] << endl;
//	return 0;
//}

//����Ԫ������

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

//����Ԫ������

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

//ָ��

//int main()
//{
//	//��ָ��ָ����Ϊ0���ڴ�ռ�
//	int* p = NULL;
//	//0~255Ϊϵͳռ�ã����ɷ���
//	//Ұָ��
//	int* p = (int*)0x11456;
//	//��ָ���Ұָ�붼���ܷ���
//	//����ָ��
//	int a = 0;
//	const int* p1 = &a;
//	//ָ��ָ����Ըı�,ָ��ֵ���ܸı�
//	//ָ�볣��
//	int b = 0;
//	int* const p = &b;
//	//ָ��ָ���ܱ䣬ָ��ֵ���Ըı�
//	return 0;
//}
