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

//Ƕ�׽ṹ��
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
//	tname += "A";//�ַ���ֱ��׷��
//	cout << tname << endl;
//	tcher t1;
//	t1.id = 0000012;
//	t1.age = 46;
//	t1.name = "����";
//	t1.s1.age = 15;
//	t1.s1.name = "С��";
//	tcher t2 = { 0000013,"��",34,{"С��",16} };
//	cout << "��ʦ����Ϊ��" << t2.name<<" "<< "��ʦѧ������Ϊ��" << t2.s1.name << endl;
//	return 0;
//}

//����ṹ��Ԫ��

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

//ͨѶ¼

//#include<iostream>
//#include<string>
//#include<cassert>
//using namespace std;
//
//#define MAX 1000
//
////��ϵ�˽ṹ��
//typedef struct person
//{
//	string name;
//	int sex;//1-�У�2-Ů
//	int age;
//	string tel;
//	string place;
//}person;
//
////ͨѶ¼�ṹ��
//typedef struct conotact
//{
//	person peo[MAX];
//	int count;
//}contact;
//
////��ʾ�˵�
//void showmenu()
//{
//	cout << "************************" << endl;
//	cout << "***** 1.�����ϵ�� *****" << endl;
//	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
//	cout << "***** 3.ɾ����ϵ�� *****" << endl;
//	cout << "***** 4.������ϵ�� *****" << endl;
//	cout << "***** 5.�޸���ϵ�� *****" << endl;
//	cout << "***** 6.���ͨѶ¼ *****" << endl;
//	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
//	cout << "************************" << endl;
//}
//
////�����ϵ��
//void addperson(contact* con)
//{
//	assert(con);
//	if (con->count == MAX)
//	{
//		cout << "ͨѶ¼�������޷������ϵ�ˣ�" << endl;
//		return;
//	}
//	else
//	{
//		//��������
//		cout << "��������ϵ��������" << endl;
//		cin >> (con->peo[con->count]).name;
//		//�����Ա�
//		while (1)
//		{
//			cout << "��������ϵ���Ա�" << endl;
//			cout << "1-��;2-Ů" << endl;
//			cin >> (con->peo[con->count]).sex;
//			if ((con->peo[con->count]).sex != 1 && con->peo[con->count].sex != 2)
//			{
//				cout << "�������������������Ա�" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//��������
//		while (1)
//		{
//			cout << "��������ϵ�����䣺" << endl;
//			cin >> con->peo[con->count].age;
//			if (cin.fail()) {
//				// ��������־
//				cin.clear();
//				// ���Դ�������ֱ����һ�����з�
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//				cout << "��������������һ����Ч���������䣡" << endl;
//			}
//			else if ((con->peo[con->count]).age <= 0 || (con->peo[con->count]).age > 100)
//			{
//				cout << "���������������������䣡" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//����绰
//		cout << "��������ϵ�˺��룺" << endl;
//		cin >> (con->peo[con->count]).tel;
//		//����סַ
//		cout << "��������ϵ��סַ��" << endl;
//		cin >> (con->peo[con->count]).place;
//		//����ͨѶ¼����
//		con->count++;
//		cout << "�����ϵ�˳ɹ���" << endl;
//		//��������
//		system("pause");
//		system("cls");
//	}
//}
//
////��ʾ��ϵ��
//void showperson(contact* con)
//{
//	assert(con);
//	if (con->count == 0)
//	{
//		cout << "��ǰͨѶ¼Ϊ�ա�" << endl;
//		return;
//	}
//	else
//	{
//		for (int i = 0; i < con->count; i++)
//		{
//			cout << "������" << con->peo[i].name << "\t";
//			cout << "�Ա�" << (con->peo[i].sex == 1 ? "��" : "Ů") << "\t";
//			cout << "���䣺" << con->peo[i].age << "\t";
//			cout << "�绰��" << con->peo[i].tel << "\t";
//			cout << "סַ��" << con->peo[i].place << "\t";
//			cout << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
////��ѯ��ϵ���Ƿ����
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
////ɾ����ϵ��
//void delperson(contact* con, int ret, string name)
//{
//	assert(con);
//	for (int i = ret; i < con->count; i++)
//	{
//		con->peo[i].name = con->peo[i + 1].name;
//	}
//	con->count--;
//	cout << "ɾ����ϵ�˳ɹ���" << endl;
//	system("pause");
//	system("cls");
//}
//
////������ϵ��
//void findperson(contact* con)
//{
//	string name;
//	cout << "�����������ϵ��������" << endl;
//	cin >> name;
//	int ret = isexist(con, name);
//	if (ret == -1)
//	{
//		cout << "��ϵ�˲����ڣ�" << endl;
//	}
//	else
//	{
//		cout << "������" << con->peo[ret].name << "\t";
//		cout << "�Ա�" << (con->peo[ret].sex == 1 ? "��" : "Ů") << "\t";
//		cout << "���䣺" << con->peo[ret].age << "\t";
//		cout << "�绰��" << con->peo[ret].tel << "\t";
//		cout << "סַ��" << con->peo[ret].place << "\t";
//		cout << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////�޸���ϵ��
//void modifyperson(contact* con)
//{
//	assert(con);
//	string name;
//	cout << "�������޸���ϵ��������" << endl;
//	cin >> name;
//	int ret = isexist(con, name);
//	if (ret == -1)
//	{
//		cout << "��ϵ�˲����ڣ�" << endl;
//	}
//	else
//	{
//		//��������
//		cout << "��������ϵ��������" << endl;
//		cin >> (con->peo[ret]).name;
//		//�����Ա�
//		while (1)
//		{
//			cout << "��������ϵ���Ա�" << endl;
//			cout << "1-��;2-Ů" << endl;
//			cin >> (con->peo[ret]).sex;
//			if ((con->peo[ret]).sex != 1 && con->peo[ret].sex != 2)
//			{
//				cout << "�������������������Ա�" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//��������
//		while (1)
//		{
//			cout << "��������ϵ�����䣺" << endl;
//			cin >> con->peo[ret].age;
//			if (cin.fail()) {
//				// ��������־
//				cin.clear();
//				// ���Դ�������ֱ����һ�����з�
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//				cout << "��������������һ����Ч���������䣡" << endl;
//			}
//			else if ((con->peo[ret]).age <= 0 || (con->peo[ret]).age > 100)
//			{
//				cout << "���������������������䣡" << endl;
//			}
//			else {
//				break;
//			}
//		}
//		//����绰
//		cout << "��������ϵ�˺��룺" << endl;
//		cin >> (con->peo[ret]).tel;
//		//����סַ
//		cout << "��������ϵ��סַ��" << endl;
//		cin >> (con->peo[ret]).place;
//	}
//	system("pause");
//	system("cls");
//}
//
////�����ϵ��
//void cleancon(contact* con)
//{
//	assert(con);
//	int input = 0;
//	cout << "�Ƿ�Ҫ���ͨѶ¼����1.YES/0.NO��"<<endl;
//	cin >> input;
//	if (input)
//	{
//		con->count = 0;
//		cout << "ͨѶ¼����ա�" << endl;
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
//		cout << "��ѡ���ܣ�" << endl;
//		cin >> input;
//		switch(input)
//		{
//		case 1://�����ϵ��
//			addperson(&con);
//			break;
//		case 2://��ʾ��ϵ��
//			showperson(&con);
//			break;
//		case 3://ɾ����ϵ��
//		{
//			cout << "������Ҫɾ������ϵ�ˣ�" << endl;
//			string name;
//			cin >> name;
//			if (isexist(&con, name) == -1)
//			{
//				cout << "��ϵ�˲����ڣ�" << endl;
//				system("pause");
//				system("cls");
//			}
//			else
//			{
//				delperson(&con, isexist(&con, name), name);
//			}
//			break;
//		}
//		case 4://������ϵ��
//		{
//			findperson(&con);
//			break;
//		}
//		case 5://�޸���ϵ��
//		{
//			modifyperson(&con);
//			break;
//		}
//		case 6://���ͨѶ¼
//			cleancon(&con);
//			break;
//		case 0://�˳�ͨѶ¼
//			cout << "��ӭ�´�ʹ�ã�" << endl;
//			system("pause");
//			return  0;
//		default://ѡ�����
//			cout << "ѡ��������������룡" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//C++�������4�����򣺴�������ȫ������ջ��������

//1.��������ֻ��������

//2.ȫ���������ȫ�ֱ�������̬�������������ַ���������const���ε�ȫ�ֳ�����

//3.ջ������žֲ��������βΣ���Ҫ�Ѿֲ������ĵ�ַ��Ϊ��������

//4.�������ɳ���Ա�������ٺ��ͷ�

//int* func()
//{
//	int* p = new int(10);//new�ǿ��ٶ����ڴ�Ĺؼ��֣���������Ϊint����ֵΪ10�����ص��ǵ�ַ
//	int a = 10;
//	return p;//p�ı��ʻ��Ǵ����ջ���ϵľֲ���������ָ�������ŵ���ָ�������һ���ڴ���
//	//�������ﷵ�صĲ���p������������p�д�ŵ����ݣ�����ַ������3����ָ��Ҫ���ؾֲ������ĵ�ַ��û˵���ܷ��ؾֲ�����
//	//�����return a����ô�ͻ᷵��a��ֵ������������
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	delete p;//�ͷŶ����ϵ��ڴ�
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
//	int* arr = new int[5];//������������
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
//	delete[] arr1;//�������͵Ķ����ڴ��ͷ�Ҫ��[]
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//����
//1.���ñ����ʼ�������ҳ�ʼ������Ͳ��ܸ���
//int main()
//{
//	//��ֵ
//	int a = 10;
//	int b = a;
//	cout << "a " << &a << endl;
//	cout << "b " << &b << endl;
//	//����
//	int c = 10;
//	int &d = c;//��ζ��d������ź�c�ȼۣ�ָ��ͬһ��ַͬһֵ
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

//2.��������ʵ��ͨ���β�����ʵ��
//void exchange(int& a, int& b)//�������ã�����������ʽ����ʵ�Σ�����Ҳ��ָ��ʵ�ε�ַ����ʵ�ε�Ч��
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

////3.���ܷ��ؾֲ�����������
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

//4.����������Ϊ��ֵ
//int& test2()
//{
//	static int a = 10;//��̬����������Ϊ��������������
//	return a;
//}
//int main()
//{
//	int& ret = test2();
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	//ret,test2()��a����һ����
//	test2() = 1000;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//
//	system("pause");
//	return 0;
//}

//5.���õı��ʣ���һ��ָ�볣��
//void func(int& ref)
//{
//	ref = 100;//ref�����ã��������Զ�ת��Ϊ*ref
//}
//int main()
//{
//	int a = 10;
//	//�Զ�ת��Ϊint* const ref = &a;ָ�볣����ָ���ܱ�
//	int& ref = a;
//	//�ڲ�����ref�����ã����Ի��Զ�ת��Ϊ*ref = 20;
//	ref = 20;
//
//	cout << "a=" << a << endl;
//	cout << "ref=" << ref << endl;//ref�Զ�ת��Ϊ*ref
//
//	func(a);
//
//	system("pause");
//	return 0;
//}

//6.�������ã������β�
//void func(const int& ref)
//{
//	//ref = 100;const�����βΣ������ڲ��øı��β���Ӱ��ʵ��
//	cout << "ref=" << ref << endl;
//}
//int main()
//{
//	int a = 10;
//	//int& ref = 10;�ǲ��Ϸ���
//	const int& ref = 10;//const�������ǽ���ת��Ϊ��int tmp = 10;const int& ref = tmp;
//
//	func(a);
//	system("pause");
//	return 0;
//}

//�����߼�ʹ��
//1.����Ĭ�ϲ���
//int add(int a, int b, int c);//������������ʵ��ֻ����һ������Ĭ�ϲ���
//int add(int a = 10 ,int b = 20 , int c = 30 )//���ú���Ĭ�ϲ���ֵ�������������ʱ������Ӧ�Ĳ����Ǿ͸��ǣ�û���ǾͲ���Ĭ��ֵ
//{
//	return a + b + c;
//}//����Ĭ�ϲ�����λ�����󶼱������Ĭ�ϲ���
//int main()
//{
//	cout << add(20,30) << endl;
//	system("pause");
//	return 0;
//}

//2.����ռλ����
//int add(int a = 10, int b = 20,int , int = 30)//int����ռλ������ֻ��дһ���������ͣ�Ҳ���Բ���Ĭ�ϲ���
//{
//	return a + b;
//}
//int main()
//{
//	cout << add(20, 30,10) << endl;//ռλ���������
//	system("pause");
//	return 0;
//}

//3.��������
//�����ú�������ͬ����߸�����
//�����������������
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ�����߸�����ͬ��˳��ͬ
//4�������ķ���ֵ���Ͳ�����Ϊ�������ص�����
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

//����������������

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
//	func(a);//a������int���ͱ�����ƫ���߿ɶ���д��func(int& a)·��
//	func(b);//b������const int���ͱ�����ƫ���߽��ɶ���func(const int& a)·��
//	func(10);//10�����func(int& a),�Ǿ���int& a = 10,���ǲ����﷨��,����func(const int& a)��const int& a = 10�ǺϷ���
//	system("pause");
//	return 0;
//}

//������������Ĭ�ϲ���
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
//	//func(10);//���ﱨ���ԭ���Ǻ������ó��ֶ����ԣ��������������ߣ�����������
//	system("pause");
//	return 0;
//}

//��Ͷ���
//C++��������������ԣ���װ���̳С���̬

//1.��װ������
//class�����һ���࣬class����ľ����������
//���е����Ժ���Ϊͳһ��Ϊ��Ա
//���ԣ���Ա���ԣ���Ա����
//��Ϊ����Ա��������Ա����

//���һ��Բ�����Լ������ܳ�
//const double pi = 3.1415;
//class circle
//{
//	//����Ȩ��
//	//����Ȩ�ޣ����������ڻ������ⶼ���Է���
//public:
//	//����
//	double r;
//	//��Ϊ
//	double zc()
//	{
//		return 2 * pi * r;
//	}
//};
////ͨ��Բ��������һ��Բ����
//int main()
//{
//	circle c1;
//	c1.r = 10;
//	cout << "Բ���ܳ�Ϊ:" << c1.zc() << endl;
//	system("pause");
//	return 0;
//}

//���һ��ѧ����
//class stu
//{
//public:
//	string name;
//	string id;
//	void print()
//	{
//		cout << "ѧ������Ϊ��" << name << endl;
//		cout << "ѧ��ѧ��Ϊ��" << id << endl;
//	}
//	void set(string _name,string _id)//ͨ����Ϊ�����Ը�ֵ
//	{
//		name = _name;
//		id = _id;
//	}
//};
//
//int main()
//{
//	stu s1;
//	s1.name = "����";
//	s1.id = "5556782";
//	s1.print();
//
//	stu s2;
//	s2.set("����", "654654");
//	s2.print();
//
//	system("pause");
//	return 0;
//}

//����Ȩ��
//���ַ���Ȩ�ޣ�
//����Ȩ�� public ��Ա�����ڿ��Է��ʣ�������Ҳ���Է���
//����Ȩ�� protected ��Ա�����ڿ��Է��ʣ������ⲻ���Է���
//˽��Ȩ�� private ��Ա�����ڿ��Է��ʣ������ⲻ���Է���

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
//	//p1.car;���ⲻ�ɷ���
//	//p1.password;���ⲻ�ɷ��ʣ��ᱨ��
//	system("pause");
//	return 0;
//}

//class��struct������
//classĬ��Ȩ����˽�еģ�structĬ��Ȩ���ǹ�����
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
//	//_c.a = 10;//˽�в��ɷ���
//
//	s1 _s;
//	_s.b = 10;//�������Է���
//	return 0;
//}

//��Ա��������˽�л�
//������Ч���ƶ�дȨ��
//������������Ч��

//class person
//{
//public:
//	//��д����
//	void readname()
//	{
//		cout << name << endl;
//	}
//	void setname(string _name)
//	{
//		name = _name;
//	}
//	//д����
//	void setage(int _age)
//	{
//		age = _age;
//	}
//	//��id
//	void readid()
//	{
//		cout << id << endl;
//	}
//private:
//	//�����޷����ʣ�����ͨ�����ڷ��ʲ��ṩ��Ӧ�Ķ�д����
//	string name;//�ɶ���д
//	int age;//����д
//	string id = "599x";//���ɶ�
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

//���һ�������������������������ȫ�ֺ����ͳ�Ա�������ж������������Ƿ���ͬ

//class cube
//{
//public:
//	//���ó����
//	void setnums(int lenth, int width, int hight)
//	{
//		l = lenth, w = width, h = hight;
//	}
//	//��ȡ�����
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
//	//���������
//	int msize()
//	{
//		return 2 * (l * w + l * h + w * h);
//	}
//	//���������
//	int tsize()
//	{
//		return l * w * h;
//	}
//	//��Ա�����ж������������Ƿ���ͬ
//	bool judge(cube &c)
//	{
//		if (l == c.getl() && w == c.getw() && h == c.geth())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	//����
//	int l;
//	int w;
//	int h;
//};
////ȫ�ֺ����ж�
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
//	//ȫ�ֺ����ж�
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
//	//��Ա�����ж�
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

//���һ���жϵ���Բ��λ�ù�ϵ�ķ�װ
//class point
//{
//public:
//	//���õ�����
//	void setpoint(int _x, int _y)
//	{
//		x1 = _x;
//		y1 = _y;
//	}
//	//��ȡ������
//	int getx()
//	{
//		return x1;
//	}
//	int gety()
//	{
//		return y1;
//	}
//private:
//	//������
//	int x1;
//	int y1;
//};
//class circle
//{
//public:
//	//����Բ������Ͱ뾶
//	void setcore(int xc, int yc,int _r)
//	{
//		x = xc;
//		y = yc;
//		r = _r;
//	}
//	//�жϹ�ϵ
//	int judge(point& p1)
//	{
//		return ((p1.getx() - x)* (p1.getx() - x)) + ((p1.gety() - y)* (p1.gety() - y)) - (r*r);
//	}
//private:
//	//Բ������
//	int x;
//	int y;
//	//�뾶
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
//		cout << "����Բ��" << endl;
//	}
//	else if (c1.judge(p1) < 0)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//	system("pause");
//	return 0;
//}

//����ĳ�ʼ�������
//һ��������߱���û�г�ʼ״̬������ʹ�ú����δ֪
//ͬ����ʹ����һ������������û�м�ʱ����Ҳ�����һ���İ�ȫ����

//c++�����˹��캯����������������������⣬�������������ᱻ�������Զ����ã���ɶ����ʼ������������
//����ĳ�ʼ�����������Ǳ�����ǿ��Ҫ�����������飬���������ǲ��ṩ��������������������ṩ�������ṩ�Ĺ��캯�������������ǿ�ʵ��

//���캯��:��Ҫ�������ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ�����캯���ɱ������Զ����ã������ֶ����ã�
//��������:��Ҫ�������ڶ�������ǰϵͳ�Զ����ã�ִ��һЩ��������

//���캯���﷨:����(){}
//1.���캯����û�з���ֵҲ��дvoid
//2.����������������ͬ
//3.���캯�������в�������˿��Է�������
//4.�����ڵ��ö���ʱ����Զ����ù��죬�����ֶ�����, ����ֻ�����һ��

//���������﷨:~����(){}
//1.����������û�з���ֵҲ��дvoid
//2.����������������ͬ, ������ǰ���Ϸ���~
//3.���������������в�������˲����Է�������
//4.�����ڶ�������ǰ���Զ����������������ֶ�����, ����ֻ�����һ��

//class person
//{
//public:
//	//���캯��
//	person()
//	{
//		cout << "���캯���ĵ���" << endl;
//	}
//	//��������
//	~person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//};
//void test()
//{
//	person p;
//}
//
//int main()
//{
//	test();//�����������ʱ����������������
//	person p1;//����û������ֱ��return 0;
//	system("pause");
//	return 0;
//}

//���캯���ķ���
//1.�вι�����޲ι���
//2.��ͨ����Ϳ�������

//���ֵ��÷�ʽ
//1.���ŷ�
//2.��ʾ��
//3.��ʽת����

//class person
//{
//public:
//	//1.�޲ι��죨Ĭ�Ϲ��죩���вι��� ������ͨ���죩
//	person()
//	{
//		cout << "�޲ι��캯������" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "�вι��캯������" << endl;
//	}
//	//2.��������
//	person(const person& p)
//	{
//		age = p.age;
//		cout << "�������캯������" << endl;
//	}
//	int age;
//	~person()
//	{
//		cout << "������������" << endl;
//	}
//};
//����
//void test()
//{
	//1.���ŷ�
	//person p1;//Ĭ�Ϲ��캯���ĵ���
	//person p2(10);//�вκ�������
	//person p3(p2);//�������캯������

	//cout << "p2.age:" << p2.age << endl;
	//cout << "p3.age:" << p3.age << endl;

	//ע�����Ĭ�ϣ��޲Σ����캯�����ò�Ҫ��(),�������������Ϊ����������

	//2.��ʾ��
	//person p4;//Ĭ�Ϲ��캯���ĵ���
	//person p5 = person(10);//�вκ�������
	//person p6 = person(p5);//�������캯������

	//person(10);//Ϊ��������ʹ�ý�����ᱻ��������
	//cout << "aaaa" << endl;

	//ע�������Ҫʹ�ÿ������캯������ʼ����������
	//person(p3);//���������ķ����ض��壬�ȼ���person p3;

	//3.��ʽת����
//	person p7;
//	person p8 = 10;//�ȼ���person p8 = person(10);
//	person p9 = p8;//�ȼ���person p9 = person(p8);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//�������캯����ʹ��ʱ��
//class person
//{
//public:
//	person(int _age)
//	{
//		age = _age;
//		cout << "�вι��캯������" << endl;
//	}
//	person(const person &p)
//	{
//		cout << "�������캯������" << endl;
//	}
//	~person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//private:
//	int age;
//};
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test()
//{
//	person p1(10);
//	person p2(p1);
//}
////2.ֵ���ݵķ�ʽ������������ֵ
//void func(person p)
//{
//	;
//}
//void test1()
//{
//	person p3(100);
//	func(p3);//����֮���Ե����˿�����������Ϊp3���ݸ��β�p����Ҫ�������̵ģ����βεĸı䲻��Ӱ��ʵ��
//}
////��ֵ�ķ�ʽ���ؾֲ�����
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

//���캯�����ù���
//1.Ĭ�ϵ�����£�c++�����������ٸ�һ�����ṩ����������Ĭ���޲Σ�Ĭ���вΣ�Ĭ�Ͽ���
//����û��Զ������вΣ���Ĭ���޲ν������ṩ������Զ����˿�����Ĭ���޲κ��вζ����ᱻ�ṩ

//�����ǳ����
//1.ǳ�������򵥵ĸ�ֵ��������
//2.������ڶ�����������ռ䣬���п�������

//class person
//{
//public:
//	person()
//	{
//		cout << "�޲ι��캯������" << endl;
//	}
//	person(int _age, int _hight)
//	{
//		age = _age;
//		hight = new int(_hight);
//		cout << "�вι��캯������" << endl;
//	}
//	person(const person& p)
//	{
//		age = p.age;
//		hight = new int(*p.hight);//���¿���һ�������ռ�ָ��hight��ֵ���������������ͷſռ�Ͳ����ظ�
//	}
//	~person()//�������룬���ڶ����Ͽ��ٵĿռ�����ͷţ���ѭ�Ƚ����ͷ�ԭ��
//	{
//		if (hight != NULL)
//		{
//			delete hight;
//			hight = NULL;
//		}
//		cout << "�������캯������" << endl;
//	}
//	int age;
//	int* hight;
//};
//void test()
//{
//	person p1(10,140);
//	person p2(p1);//�����漰ǳ������ǳ��������ڶ����ռ���ظ��ͷţ��Զ���һ������������ɽ��
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

//��ʼ���б�
//class person
//{
//public:
//	//��ͳ������ʼ��
//	//person(int _age, int _hight)
//	//{
//	//	age = _age;
//	//	hight = _hight;
//	//}
//	//��ʼ���б���
//	person(int _age, int _hight) :age(_age), hight(_hight)
//	{
//
//	}
//	~person()
//	{
//		cout << "�������캯������" << endl;
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

//C++���еĳ�Ա��������һ����Ķ��󣬳�Ϊ�����Ա
//�ȵ��ó�Ա����phone�Ĺ��캯�������λ���ٵ���person��Ĺ��캯��
//����ʱ��person�����������phone��������
//class phone
//{
//public:
//	phone(string name)
//	{
//		_pname = name;
//		cout << "phone���캯������" << endl;
//	}
//	~phone()
//	{
//		cout << "phone������������" << endl;
//	}
//	string _pname;
//};
//
//class person
//{
//public:
//	person(string _name, phone _p) :name(_name), pname(_p._pname)//�����û�����������
//	{
//		cout << "person1���캯������" << endl;;
//	}
//	person(string _name, string _pname) :name(_name), pname(_pname)//����pname��_pname���������Ͳ�һ��������ĵĴ���������phone pname = _pname(��ʽת����)
//	{
//		cout << "person2���캯������" << endl;;
//	}
//	~person()
//	{
//		cout << "person���������ĵ���" << endl;
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
//	cout << "������" << p2.name << endl;
//	cout << "�ֻ����ƣ�" << p2.pname._pname << endl;
//
//	cout << "������" << p3.name << endl;
//	cout << "�ֻ����ƣ�" << p3.pname._pname << endl;
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//��̬��Ա
//1.��̬��Ա���������ж�����һ�����ݣ����ڱ���׶�����ڴ���䣬���������������ʼ��
//class person
//{
//public:
//	//��������
//	static int num;
//};
////�����ʼ��
//int person::num = 100;
//
//void test1()//���Ծ�̬��Ա���ݹ���
//{
//	person p;
//	cout << p.num << endl;
//	person p1;
//	p1.num = 200;
//	cout << p.num << endl;
//}
//
//void test2()//���Ծ�̬��Ա���������ַ��ʷ�ʽ����̬��Ա������������ĳһ���ض��Ķ����ǹ����
//{
//	//1.ͨ���������(�Ǿ�̬��Ա����ֻ����������)
//	person p;
//	cout << p.num << endl;
//	//2.ͨ����������
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
//2.��̬��Ա���������ж�����һ���������ú���ֻ�ܷ��ʾ�̬��Ա����

//class person
//{
//public:
//	static void func()
//	{
//		num1 = 100;
//		cout << num1 << endl;
//		//num2 = 200;���øú���ʱ���ú����޷��ֱ�num2����������һ��������˾�̬��Ա�������ܷ��ʷǾ�̬��Ա�������;�̬��Ա����һ�����з���Ȩ�޺����ַ��ʷ�ʽ
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

//��Ա�����ͳ�Ա�����Ƿֿ������

//class person
//{
//public:
//	int a;//�Ǿ�̬��Ա�������������
//	static int b;//��̬��Ա����������ĳ�������
//	void func(){}//��Ա����������ĳ�������
//	static void func1(){}//��̬��Ա����������ĳ�������
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
//	cout << "sizeof(h)=" << sizeof(h) << endl;//�ն���ռ1���ֽڣ�Ŀ�������ֲ�ͬ�Ŀն��󣬲�ͬ�ն�����ռ�ڴ��ַ��ͬ
//
//	return 0;
//}

//thisָ�룺ָ�򱻵��õĳ�Ա���������Ķ���
//���趨�壬ֱ���þͿ���
//class person
//{
//public:
//	//1.������Ƴ�ͻ���⣨�βκͳ�Ա����������
//	person(int age)
//	{
//		this->age = age;
//	}
//	int age;
//	//2.���ض�����
//	person& func(person& p)//������������ĳ�person����ô�ͻ�Դ���Ķ�����п������������õ��¶��󷵻�
//	//�����õķ�ʽ�򲻻ᴴ���¶��󣬶��Ƿ���һ��ԭ��������һ�������������Ķ�һ�����������ĺô��ǿ���ʵ����ʽ���
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

//��ָ����ʳ�Ա����

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
//		//�ȼ�������Ĵ���
//		cout << "age:" << this->age << endl;//����������ǿ�ָ���Ǿͻ�������⣬�����������ǰ������ж����
//	}
//	int age = 10;
//};
//
//int main()
//{
//	person* p = NULL;
//	p->func();//û����
//	p->showage();//�����⣬����û�д�������Ķ��󣬶�showage������Ҫ��������age��һ����ָ�����޷�������
//	system("pause");
//	return 0;
//}

//const���γ�Ա����
//1.������
//��Ա�������const�ͳƸú���Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ������пɽ����޸�

//class person
//{
//public:
//	//thisָ��ı���һ��ָ�볣����ָ��Ķ����ܱ�
//	//�����Ա��������Ӹ�const�൱��const person* const this��ָ����������Ҳ���ܱ���
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
//	mutable int _age;//�ӹؼ����ڳ�����ͳ������ﶼ���Ա��ı�
//};
//2.������
//��������ǰ��const��Ƹö���Ϊ�����󣬳��������Բ��ܸı�
//������ֻ�ܵ��ó���������Ϊ������Ե�����ͨ�����Ļ�������ͨ�����ڲ����Ըĳ�Ա���ԣ�����볣��������ʳ�ͻ
//int main()
//{
//	const person p;
//	p.func1();
//	p._age = 1000;
//	//p.func2();error
//	system("pause");
//	return 0;
//}

//��Ԫ
//�ڳ������Щ˽������ Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
//��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա
//��Ԫ�Ĺؼ���Ϊ friend
//1.ȫ�ֺ�������Ԫ

//class building
//{
//	//����ȫ�ֺ�����Ԫ
//	friend void test1(building& b);
//public:
//	building()
//	{
//		livingroom = "����";
//		bedroom = "����";
//	}
//public:
//	string livingroom;
//private:
//	string bedroom;
//};
//void test1(building& b)
//{
//	cout << "���˽��룺" << b.livingroom << endl;
//	cout << "���ѽ��룺" << b.bedroom << endl;
//}
//int main()
//{
//	building b;
//	test1(b);
//	system("pause");
//	return 0;
//}

//2.������Ԫ

//class building
//{
//	//����goodfriend��Ϊ��Ԫ
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
//building::building()//�޲ι��캯�������ⶨ�巽ʽ
//{
//	livingroom = "����";
//	bedroom = "����";
//}
//
//goodfriend::goodfriend()
//{
//	build = new building;
//}
//
//void goodfriend::visit()
//{
//	cout << "�ݷ�:" << build->livingroom << endl;
//	cout << "�ݷ�:" << build->bedroom << endl;
//}
//
//int main()
//{
//	goodfriend f;
//	f.visit();
//	system("pause");
//	return 0;
//}

//3.��Ա��������Ԫ
//class building;
//class goodfriend
//{
//public:
//	goodfriend();
//	void visit1();//�ɷ���building���˽�г�Ա����
//	void visit2();//���ɷ���building���˽�г�Ա����
//	building* build;
//};
//class building
//{
//	//����goodfriend���е�void visit1()Ϊ��Ԫ
//	friend void goodfriend::visit1();
//public:
//	building();
//public:
//	string livingroom;
//private:
//	string bedroom;
//};
//
//building::building()//�޲ι��캯�������ⶨ�巽ʽ
//{
//	livingroom = "����";
//	bedroom = "����";
//}
//
//goodfriend::goodfriend()
//{
//	build = new building;
//}
//
//void goodfriend::visit1()
//{
//	cout << "�ݷ�:" << build->livingroom << endl;
//	//cout << "�ݷ�:" << build->bedroom << endl;
//}
//
//void goodfriend::visit2()
//{
//	cout << "�ݷ�:" << build->livingroom << endl;
//	//cout << "�ݷ�:" << build->bedroom << endl;
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

//���������

//1.�Ӻ����������
//��ʵ�����������Ϊ��

//class person
//{
//public:
//	//1.��Ա����ʵ��+����
//	person operator+(person& p)//operator+�Ǳ�����ͳһ������֣����ں���������Լ�Ϊֱ�����
//	{
//		person tmp;
//		tmp.m_a = this->m_a + p.m_a;
//		tmp.m_b = this->m_b + p.m_b;
//		return tmp;
//	}
//	int m_a = 10;
//	int m_b = 10;
//};
////2.ȫ�ֺ���ʵ��+����
//person operator+(person& p1,person& p2)
//{
//	person tmp;
//	tmp.m_a = p1.m_a + p2.m_a;
//	tmp.m_b = p1.m_b + p2.m_b;
//	return tmp;
//}
////3.���������Ҳ���Է�����������
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
//	person p3 = p1.operator+(p2);//��p1+p2�ȼ�
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
//	person p6 = p1 + 100;//��ͬ�������
//	cout << "p6.m_a=" << p6.m_a << endl;
//	cout << "p6.m_b=" << p6.m_b << endl;
//	system("pause");
//	return 0;
//}

//2.�������������
//ʵ���Զ����������͵����

//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//private:
//	int m_age;
//	int n_age;
//public:
//	//��Ա��������ʵ���������������
//	void operator<<(ostream& cout);//����<<����Ҫ���������ֱ����<<�����ң���Ա�����ĵ�һ������������ʽ��ָ����ʵ���� this ָ�룬
//	//���Ի�ʣ��һ������λ�ã��ϴ������д����p.operator(cout)��p<<cout����Ȼ���޷�ʵ��cout������Ҫ��
//	person(int a,int b)
//	{
//		this->m_age = a;
//		this->n_age = b;
//	}
//};
////ͨ��ȫ�ֺ�����ʵ��
////ȫ�ֺ���û��Ĭ�ϵ�һ����
//ostream& operator<<(ostream& cout, person p)//cout�����ֻ��һ�������Բ������õķ�ʽ��Ϊʵ����ʽ��̣���������Ϊostream&
//{
//	cout << p.m_age << " " << p.n_age << endl;
//}
//void test()
//{
//	person p(10, 10);
//	cout << p << endl;
//}

//3.�������������

//class myclass
//{
//	friend ostream& operator<<(ostream& cout, myclass c);
//public:
//	myclass()
//	{
//		m_a = 0;
//	}
//	//ʵ��ǰ�õ������������
//	myclass& operator++()
//	{
//		++m_a;
//		return *this;
//	}
//	//ʵ�ֺ��õ������������
//	myclass operator++(int)//intռλ�����Դ�������ǰ�úͺ��õ����������Ĳ���ʹ
//	{
//		//�ȼ�¼ԭ�ȵ�ֵ
//		myclass tmp = *this;
//		//��������
//		m_a++;
//		//����tmp��ֵ�����ܷ������÷�ʽ����ΪtmpΪ�ֲ�����
//		return tmp;
//	}
//private:
//	int m_a;
//
//};
//ostream& operator<<(ostream& cout, myclass c)//���ﷵ�����õ�Ŀ���Ƕ�ͬһ��ֵ���и���
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

//4.��ֵ���������
//���ǳ���������Ķ����ڴ��ظ��ͷŵ�����

//class person
//{
//public:
//	//�вι��캯��
//	person(int a)
//	{
//		m_a = new int(a);//���������ڴ���aֵ��m_aָ����
//	}
//	//���������������ͷŶ����Ͽ��ٵĿռ�
//	~person()
//	{
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//	}
//	//���ظ�ֵ�����
//	person& operator=(person& p)
//	{
//		//�ȼ������ָ��ռ��Ƿ��ͷ�
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//		//�����µĿռ�������
//		m_a = new int(*p.m_a);
//		//���ؿ�ʵ����ʽ��̵�person&����
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
//	p3 = p2 = p1;//��ʽ��ֵ
//	cout << p3 << p2 << p1 << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//5.��ϵ��������أ�== !=��
//���ڱȽ��Զ�������

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
//	//����==
//	bool operator==(person& p)
//	{
//		if (m_name == p.m_name && m_age == p.m_age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	//����!=
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
//		cout << "���" << endl;
//	}
//	else
//		cout << "�����" << endl;
//	if (p1 != p2)
//	{
//		cout << "�����" << endl;
//	}
//	else
//		cout << "���" << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//6.�����������������()
//��Ϊʹ��������������Ҳ��Ϊ�º���

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
//	myfunc()("hello world!");//myprint()Ϊ����һ��������������һ�����꼴����
//	cout << myfunc()(10, 20) << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//�̳�
//���Լ����ظ�����
//�﷨��class ����: �̳з�ʽ ����
//����Ҳ��Ϊ������
//����Ҳ��Ϊ����

//class base
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void left()
//	{
//		cout << "python��cpp��java...�����������б�" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//};
//class java :public base//�̳У���base�Ļ���������µĳ�Ա
//{
//public:
//	void ja()
//	{
//		cout << "java��ѧϰ��Ƶ" << endl;
//	}
//};
//class python :public base
//{
//public:
//	void py()
//	{
//		cout << "python��ѧϰ��Ƶ" << endl;
//	}
//};
//class cpp :public base//�̳У���base�Ļ���������µĳ�Ա
//{
//public:
//	void c()
//	{
//		cout << "cpp��ѧϰ��Ƶ" << endl;
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

//�̳������ַ�ʽ�������̳С������̳к�˽�м̳�
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
//		a = 100;//��Ȼ�ǹ���
//		b = 100;//��Ȼ�Ǳ���
//	}
//	//�����˽�����ݷ��ʲ���
//};
//
//class son2 :protected base
//{
//public:
//	void s2()
//	{
//		a = 100;//Ȩ�ޱ�Ϊ����
//		b = 100;//��Ȼ�Ǳ���
//	}
//	//�����˽�����ݷ��ʲ���
//};
//
//class son3 :private base
//{
//public:
//	void s3()
//	{
//		a = 100;//Ȩ�ޱ�Ϊ˽��
//		b = 100;//Ȩ�ޱ�Ϊ˽��
//	}
//	//�����˽�����ݷ��ʲ���
//};

//�̳еĹ��������˳��
//���и��׺��ж��ӣ��ȸ��๹�죬�����๹�죬����˳���෴
//class father
//{
//public:
//	father()
//	{
//		cout << "father�Ĺ��캯��" << endl;
//	}
//	~father()
//	{
//		cout << "father����������" << endl;
//	}
//};
//
//class son:public father
//{
//public:
//	son()
//	{
//		cout << "son�Ĺ��캯��" << endl;
//	}
//	~son()
//	{
//		cout << "son����������" << endl;
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

//�̳��г���ͬ����Ա�Ĵ���ʽ
//����ֱ�ӵ��ü��ɣ����ø����Ա��Ҫ��������
//ԭ����һ�������еĳ�Ա�͸����Աͬ�������Զ����ظ��������е�ͬ����Ա

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
//	cout << "son�µ�m_a=" << son().m_a << endl;
//	cout << "base�µ�m_a=" << son().base::m_a << endl;
//	son().func();//�����Ա����
//	son().base::func();//�����Ա����
//	son().base::func(100);
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//�̳���ͬ����̬��Ա����
//������һ��
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
//	//ͨ���������
//	cout << "son�µ�m_a=" << s.m_a << endl;
//	cout << "base�µ�m_a=" << s.base::m_a << endl;
//	//ͨ����������
//	cout << "son�µ�m_a=" << son::m_a << endl;
//	//��һ��::��ͨ���������ʵ���˼���ڶ���::����base���������µ���˼
//	cout << "base�µ�m_a=" << son::base::m_a << endl;
//
//}
////��Ա��������ȫһ��
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//��̳��﷨��class ������:�̳з�ʽ ����1��,�̳з�ʽ ����2��...

//���μ̳У��������̳е���������ӵ��ͬһ������
//������ն��̳ж�������ռ̳��������
//����1��������ʹ������ʱ����ֶ�����
//����2�����յ����ݻ�������

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
//	//���Խ�������Ե����⣬���Ǵ����������䣬���������վ��ǲ�����ġ�
//	cout << "st.sheep::m_Age=" << st.sheep::m_Age << endl;
//	cout << "st.tuo::m_Age=" << st.tuo::m_Age << endl;
//}
////���ùؼ���virtual����̳���������⣬animal��Ϊ�����
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
//	//ԭ��������̳У��ֱ�̳��������ָ�룬��ָ��ָ����������񣬱���¼�Ŷ�Ӧ��ƫ������ʹ�ܹ�׼ȷ���ҵ�Ψһ��m_Age�������޸�
//	cout << "sp.yang::m_Age=" << sto.yang::m_Age << endl;
//	cout << "sp.tuo0::m_Age=" << sto.tuoo::m_Age << endl;
//	//��������ͨ��yang����tuoo����ֻ�Ƕ�ͬһ��m_Age�޸ģ�����Ľ��Ҳ��һ����
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//�̳еĶ�̬
//��̬��Ϊ��̬��̬�Ͷ�̬��̬
//��̬��̬�����������غ����������
//��̬��̬Ϊ��������麯��ʵ������ʱ��̬

//����ǰ�ߺ�����ַ���-����׶�ȷ��������ַ�����ߺ�����ַ���-���н׶�ȷ��������ַ��

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
////��ַ��󶨣���������ʲô����animal speak��������ڸ���������ǿ��Դ���������
////��ַ��󶨾Ϳ��Խ�����⣬��animal���µĳ�Ա����ǰ�ӹؼ���virtual��ʹanimal speak����������Ϊ�麯������ʱ�������ַ
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
//��̬��̬���������
//1.�м̳й�ϵ
//2.������д������麯���������еĹؼ���virtual���п��ޣ�����д����������ֵ���� ������ �����б���ȫһ��
//3.��̬��̬ʹ�ã������ָ�������ָ���������

//��̬��ԭ����ĵ�

//���麯���ͳ�����
//�ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д�����ݣ���˿��Խ��麯����Ϊ���麯��
//���麯���﷨: virtual ����ֵ���� ������(�����б�)=0;���������˴��麯���������Ҳ��Ϊ������
//�������ص�:�޷�ʵ�����������������д�������еĴ��麯��������Ҳ���ڳ�����

//class Base//������
//{
//public:
//	virtual void func() = 0;//���麯��
//};
//class Son :public Base
//{
//public:
//	void func()
//	{
//		cout << "Son�µ�func" << endl;
//	}
//};
//void test()
//{
//	//Base base;�������޷�ʵ����
//	Base* base = new Son;
//	base->func();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//ʵ��Ӧ��

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
//		cout << "��ˮ+���ݲ�Ҷ+���뱭��+������" << endl;
//	}
//};
//class Coffee :public Base
//{
//public:
//	void process()
//	{
//		cout << "��ˮ+���ݿ���+���뱭��+���Ǻ�ţ��" << endl;
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

//��̬�е��������ʹ�������
//�ܽ�:
//1.�������������������������ͨ������ָ���ͷ��������
//2.���������û�ж������ݣ����Ի�дΪ��������������
//3.ӵ�д���������������Ҳ���ڳ�����
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "animal���캯���ĵ���" << endl;
//	}
//	//���Ϲؼ���virtual�γ����������ͻ�ִ��������������
//	//virtual ~Animal()
//	//{
//	//	cout << "animal���������ĵ���" << endl;
//
//	//}
//	//����������Ҳ��Ҫ����Ĵ���ʵ�֣������Ϊ�����࣬����ʵ��������
//	virtual ~Animal() = 0;//����������������������ʵ��
//	virtual void speak() = 0;
//};
//Animal::~Animal()//������������ʵ��
//{
//	cout << "animal���������ĵ���" << endl;
//}
//class Cat :public Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << *Name << "Сè��˵��" << endl;
//	}
//	Cat(string name)
//	{
//		cout << "Cat���캯���ĵ���" << endl;
//		Name = new string(name);
//	}
//	~Cat()
//	{
//		cout << "Cat���������ĵ���" << endl;
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
//	delete animal;//����ָ�벻��������������������ᵼ���������ڶ������ٵ��ڴ����й¶������취���ǽ������е�������������Ϊ������
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//��̬Ӧ��ʵ��
//�������
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
////����
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
////������
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
//		cout << "Compter������������" << endl;
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
////����
//void test()
//{
//	//��װInter����
//	cout << "---------------" << endl;
//	Compter* compter1 = new Compter(new InterCPU(), new InterGPU(), new InterMemery());
//	compter1->running();
//	cout << "---------------" << endl;
//	//��װLenovo����
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

//�ļ�����
//�ı��ļ�-ASCII��ֵ����ʽ�洢
//�������ļ�-��������ʽ�洢
#include<fstream>
//ofstream - д����
//ifstream - ������
//fstream - ��д����

//1.д�ļ�
//һ������ͷ�ļ�
//#include<fstream>
//��������������
//ofstream ofs
//�������ļ�
//ofs.open("�ļ�·��",�򿪷�ʽ)
//�ġ�д����
//ofs<<"д�������";
//�塢�ر��ļ�
//ofs.close();
//�ı��ļ�д�ļ�
//int main()
//{
//	ofstream ofs;
//	ofs.open("text.txt", ios::out);//û��д����·����Ĭ�ϴ������뱾�ļ�ͬ����
//	ofs << "zhansgan" << endl;
//	ofs << "nan" << endl;
//	ofs << "18" << endl;
//  system("pause");
//	return 0;
//}
//2.���ļ�
//һ������ͷ�ļ�
//#include<fstream>
//��������������
//ifstream ifs
//�������ļ����ж��ļ��Ƿ�򿪳ɹ�
//ifs.open("�ļ�·��",�򿪷�ʽ)
//�ġ�������
//���ַ�ʽ
//�塢�ر��ļ�
//ifs.close();
//�ı��ļ����ļ�

//int main()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ�ܣ�" << endl;
//		return 1;
//	}
//	//��һ�ֶ�����
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}
//	//ifs.close();//Ҫ���ζ�ȡ��Ҫô�ر����´򿪣�Ҫô���ļ�ָ���Ƶ���ͷ
//	//�ڶ��ֶ�����
//	char arr[1024] = { 0 };
//	while (ifs >> arr)
//	{
//		cout << arr << endl;
//	}
//	//�����ֶ���
//	string s;
//	while (getline(ifs, s))
//	{
//		cout << s << endl;
//	}
//	//�����ֶ���
//	ifs.clear();    // �������״̬��־
//	ifs.seekg(0);   // ���ļ�ָ���ƶ����ļ���ͷ
//	ifstream ifs1;
//	ifs1.open("text.txt", ios::in);
//	char c;
//	while ((c = ifs1.get())!=EOF)//EOF - end of file�ļ���ĩβ
//	{
//		cout << c;
//	}
//	ifs1.close();
//	system("pause");
//	return 0;
//}

//�������ļ�д�ļ�wirte
//�򿪷�ʽҪ����ios::binary
//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ��:ostream& write(const char* buffer, int len); 
//��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

//class person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//void test()
//{
//	person p = { "����",18 };
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

//�������ļ����ļ�
//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ��:istream& read(char* buffer, int len);
//��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

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
//		cout << "�ļ���ʧ�ܣ�" << endl;
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

//C++ģ�壺����ʽ��̣������߸�����
//����ֱ��ʹ�ã�ģ��ֻ��һ����ܣ�Ҳ�������ܵ�

//ģ��ֺ���ģ�����ģ��

//1.����ģ��
//����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ�����������������
//�﷨:
//template<typename T>
//������������
//template - ��������ģ��
//typename - ���������ķ�����һ���������ͣ�������class����ͨ�õ���������
//T - ���ƿ����滻��ͨ��Ϊ��д��ĸ

//Ӧ�ó��������ݽ�����
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
//���鷳��ÿ�β�ͬ���������Ͷ�Ҫ��һ��������ʵ���Ϻ����ڵĲ����߼���ȫһ��
//����ģ��
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
//	//1.�Զ������Ƶ�
//	myexchange(a, b);
//	//2.��ʾָ������
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

//ģ��ʹ��ע������
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
//	//myexchange(a, b);�����Զ������Ƶ������Ƶ���ͬһ����
//}
//template<typename T>
//void func()
//{
//	cout << "func()�ĵ���" << endl;
//}
//void test2()
//{
//	//func();����ģ��ʹ�ñ���ָ��T������
//	func<int>();//��ʾָ������ȷ����
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//����ģ�尸��
//��������
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
//	//ѡ������
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

//ģ�����ͨ����������
//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�����Զ������Ƶ��������Է�����ʽ����ת��
//3������ģ������ʾָ�����ͣ����Է�����ʽ����ת��
//��ͨ����
//int add(int a, int b)
//{
//	return a + b;
//}
////ģ��
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
//	cout << add(a, c) << endl;//�Զ���ʽת��
//	//myadd(a, c);//ģ���Զ��Ƶ������Ƶ�����һ������
//	cout << myadd<int>(a, c) << endl;//ʹ����ʾָ������
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//��ͨ�����ͺ���ģ��ĵ��ù���
//1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
//3.����ģ����Է�����������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//5.�ṩ�˺���ģ�壬�Ͳ�Ҫ��дͬ����ͨ�����ˣ����������

//1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//void print(int a, int b)
//{
//	cout << "��ͨ�����ĵ���" << endl;
//}
//template<class T>
//void print(T a, T b)
//{
//	cout << "����ģ��ĵ���" << endl;
//}
//void test1()
//{
//	print(10, 20);
//}
////2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
//void test2()
//{
//	print<>(10, 20);
//}
////3.����ģ����Է�����������
//template<class T>
//void print(T a, T b,T c)
//{
//	cout << "����ģ�����صĵ���" << endl;
//}
//void test3()
//{
//	print(10, 20, 30);
//}
////4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//void test4()
//{
//	char a = 'a';
//	char b = 'b';
//	print(a, b);//�������������ͨ�����ͻ��漰��ʽ����ת����������ģ�岻�ã�ƥ��ȸ����ȵ��ú���ģ��
//}
//int main()
//{
//	test4();
//	system("pause");
//	return 0;
//}

//����ģ��ľ��廯
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
//bool f(T &a, T &b);//û�о��廯�ĺ���ģ���ǲ��ܹ��Ƚ��Զ������͵����ݵ�
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


//2.��ģ��
//����һ��ͨ���࣬���еĳ�Ա,�������Ϳ��Բ������ƶ�����һ�����������������
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

//��ģ��ͺ���ģ�������

//template<class T1, class T2 = int>//��ģ�������Ĭ�ϲ���
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
//	//1.��ģ�岻��ʹ���Զ������Ƶ�
//	//person p1("Tom", 10);error
//	person <string, int>p1("Tom", 10);
//	p1.show();
//}
//void test2()
//{
//	//2.��ģ�������Ĭ�ϲ���
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

//��ģ���г�Ա�����Ĵ���ʱ��
//��ģ�����ͨ��ĳ�Ա������ͬ����ģ��ֻ���ڵ��ó�Ա������ʱ�򴴽�
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
//	//p1.showp2();//ע����һ�д���ʱ��showp2()û�б����ã�����Ҳ���ᱻ��������ôҲ���ᱨ��
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}

//��ģ���������������
//�����ַ�ʽ
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
////1.ֱ��ָ����������
//void print1(person<string, int>& p)
//{
//	p.show();
//}
//void test1()
//{
//	person<string, int>p1("�����", 100);
//	print1(p1);
//}
////2.��������ģ�廯
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
//	person<string, int>p2("��˽�", 80);
//	print2(p2);
//}
////3.������ģ�廯
//template<class T>
//void print3(T& p)
//{
//	p.show();
//	cout << "T=" << typeid(T).name() << endl;
//
//}
//void test3()
//{
//	person<string, int>p3("��ɮ", 30);
//	print3(p3);
//}
//int main()
//{
//	test3();
//
//	system("pause");
//	return 0;
//}

//��ģ��ͼ̳�
//template<class T>
//class base
//{
//public:
//	T m;
//};
//1.����̳еĸ�����һ����ģ��ʱ����Ҫ������ʱָ��������T������
//class son:public base<int>
//{
//	;
//};
//void test1()
//{
//	son s1;
//}

//2.��������ָ��������T�����ͣ�����Ҳ��Ҫ�����ģ��
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

//��ģ���Ա����������ʵ��

//template<class T1, class T2>
//class person
//{
//public:
	//person(T1 name, T2 age);
	//T1 m_name;
	//T2 m_age;
	//void show();
//};
//����ʵ�֣���������ģ�壬���������򲢼���ģ���������
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
//	person<string, int> p1("����", 18);
//	p1.show();
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}

//��ģ��ķ��ļ���д
//�����������⣺��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
//����취1��ֱ�Ӱ���.cppԴ�ļ�
//����취2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��

//��ģ����Ԫ
//ȫ�ֺ���������ʵ�ֺ�����ʵ��
//����ʵ��ȫ�ֺ���
//template<class T1, class T2>
//class person;//��ǰ�ñ�����֪��person��Ĵ���
//template<class T1, class T2>
//void show1(person< T1, T2 > p)//
//{
//	cout << p.m_name << endl;
//	cout << p.m_age << endl;
//}
//template<class T1, class T2>
//class person
//{
//	//����ʵ��ȫ�ֺ���
//	friend void show(person< T1, T2 > p)
//	{
//		cout << p.m_name << endl;
//		cout << p.m_age << endl;
//	}
//	//����ʵ��ȫ�ֺ���
//	//���������ʵ�֣�Ҫ�ñ�������֪�����Ĵ��ڣ���Ȼ�����ڱ�ʶ��Ϊ��ͨ����������ʵ��������ģ���Ա����
//	friend void show1<>(person< T1, T2 > p);//�����<>�Ŀ�ģ��Ĳ����б���Ǹ��߱�����������һ����ģ�庯��
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

//��ģ�尸��
//template<class T>
//class myarr
//{
//public:
//	//�вι���
//	myarr(int capacity)
//	{
//		m_capacity = capacity;
//		m_size = 0;
//		this->address = new T[m_capacity];
//	}
//	//���
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
//	//����=
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
//	//β�巨
//	void push_back(T& val)
//	{
//		if (m_capacity == m_size)
//		{
//			return;
//		}
//		this->address[m_size] = val;
//		m_size++;
//	}
//	//βɾ��
//	void del_back(myarr& arr)
//	{
//		if (m_size == 0)
//		{
//			return;
//		}
//		m_size--;
//	}
//	//ͨ���±��ȡ����
//	T& operator[](int index)
//	{
//		return this->address[index];
//	}
//	//��ȡ����
//	int getcapacity()
//	{
//		return m_capacity;
//	}
//	//��ȡ�����С
//	int getsize()
//	{
//		return m_size;
//	}
//	//��������
//	~myarr()
//	{
//		if (this->address != NULL)
//		{
//			delete[] this->address;
//			this->address = NULL;
//		}
//	}
//private:
//	//����
//	T* address;
//	//����
//	int m_capacity;
//	//�����С
//	int m_size;
//};
//class person
//{
//public:
//	person() {};//���ڵ���������3655�У���Ҫʹ�õ�Ĭ�Ϲ��캯�����������г�ʼ�����ݣ�ֻ�Ǵ���
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

//STL�������
//STL�����Ϊ����������ֱ���:�������㷨�����������º�����������(�����)���ռ�������
//1.���� : �������ݽṹ����vector��list��deque��set��map��, �����������
//2.�㷨 : ���ֳ��õ��㷨����sort��find��copy��for_each��
//3.������ : �������������㷨֮��Ľ��ϼ���
//4. �º��� : ��Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ��ԡ�
//5.������ : һ�����������������߷µ�����������ӿڵĶ���,
//6.�ռ������� : ����ռ�����������

//1.����
//STL�������ǽ�������㷺��һЩ���ݽṹʵ�ֳ������õ����ݽṹ:����,����,��,ջ,����,����,ӳ����
//��Щ������Ϊ����ʽ�����͹���ʽ��������:
//����ʽ����:ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ�á�
//����ʽ����:�������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ

//2.�㷨
//���޵Ĳ��裬����߼�����ѧ�ϵ����⣬��һ��ѧ�����ǽ����㷨(Algorithms)
//�㷨��Ϊ:�ʱ��㷨�ͷ��ʱ��㷨��
//�ʱ��㷨: ��ָ��������л���������ڵ�Ԫ�ص����ݡ����翽�����滻��ɾ���ȵ�
//���ʱ��㷨:��ָ��������в�����������ڵ�Ԫ�����ݣ�������ҡ�������������Ѱ�Ҽ�ֵ�ȵ�

//3.������:�������㷨֮��ճ�ϼ�
//�ṩһ�ַ�����ʹ֮�ܹ�����Ѱ��ĳ�����������ĸ���Ԫ�أ��������豩¶���������ڲ���ʾ��ʽÿ�����������Լ�ר���ĵ�����
//������ʹ�÷ǳ�������ָ�룬��ѧ�׶����ǿ�������������Ϊָ��

//vector���������������
#include<vector>
#include<algorithm>
//
//void print(int val)
//{
//	cout << val << endl;
//}
//void test()
//{
//	//������Ϊv����������������
//	vector<int> v;
//	//β�巨��������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//ͨ�������������������е�����
//	vector<int>::iterator itbegin = v.begin();//��ʼ������ ָ�������еĵ�һ��Ԫ��
//	vector<int>::iterator itend = v.end();//���������� ָ�������е����һ��Ԫ�ص���һλ
//	//1.while����
//	while (itbegin != itend)
//	{
//		cout << *itbegin << endl;
//		itbegin++;
//	}
//	//2.forѭ������
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//3.STL�ṩ�ı����㷨
//	for_each(v.begin(), v.end(), print);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//vector��������Զ�����������

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

//����Ƕ������

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
//string��һ���࣬�ڲ���װ��char* ָ���������ַ���
//string ���ڲ���װ�˺ܶ��Ա����
//���� : ����find������copy��ɾ��delete�滻replace������insert
//string����char* ��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���

//1.string�Ĺ��캯��
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

//string�ĸ�ֵ����
//string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(const string& s);//���ַ���s������ǰ���ַ���
//string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
//string& assign(const char* s);//���ַ���s������ǰ���ַ���
//string& assign(const char* s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string& s);//���ַ���s������ǰ�ַ���
//string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���

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

//string�еĲ��Һ����

//int main()
//{
//	string str = "helloworldlo";
//	int op = str.find("lo");//�ҵ��ͷ����±꣬�Ҳ����ͷ���-1
//	cout << op << endl;
//
//	//rfind��find����������find�Ǵ��������ң�rfind�Ǵ�������
//	int op1 = str.rfind("lo");
//	cout << op1 << endl;
//
//	//���±�Ϊ1��λ�ÿ�ʼ�������ַ��滻Ϊ1111
//	str.replace(1, 3, "1111");
//
//	system("pause");
//	return 0;
//}

//string�еıȽ�compare
//�ַ����Ƚ�ʵ�����ǿ������ǲ�����ͬ���Ƚϴ�Сû�кܴ�����
//�ȽϷ�ʽ�������ĸ�Ƚ�ASCIIֵ
//=:��ͬ��>:ǰ�ַ�����<:���ַ�����
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

//string�ַ����Ķ�д

//int main()
//{
//	string str = "hello";
//	//���ַ��ʷ�ʽ��[]��at
//	//1.��
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
//	//2.д
//	str[0] = 'x';
//	str.at(1) = 'x';
//	cout << str << endl;
//	system("pause");
//	return 0;
//}

//string�ַ����Ĳ����ɾ��

//int main()
//{
//	string str = "hello";
//	//1.����
//	str.insert(1, "222");//��һ�������ǲ���λ��
//	cout << str << endl;
//	//2.ɾ��
//	str.erase(1, 3);//��һ�������ǲ�����ʼλ�ã��ڶ���������Ҫ�����ĸ���
//	cout << str << endl;
//	system("pause");
//	return 0;
//}

//string���ִ���ȡ

//int main()
//{
//	string str = "hello";
//	string str1 = str.substr(1, 2);//��һ�������ǻ�ȡ��ʼ��λ�ã��ڶ���������Ҫ��ȡ�ĸ���
//	cout << str1 << endl;
//	//ʵ��Ӧ��
//	string str2 = "liaozhengwu@qq.com";
//	int ops = str2.find('@');
//	string str3 = str2.substr(0, ops);
//	cout << str3 << endl;
//	system("pause");
//	return 0;
//}

//vector����-���캯��

//vector�����ݽṹ������ǳ����ƣ�֧��β�˲����ɾ��������Ϊ��������
//��֮ͬ�����ڣ������Ǿ�̬�ռ䣬��vector�Ƕ�̬�ռ䣬���Ը�������̬��չ
//��̬��չ����������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}
//int main()
//{
//	//Ĭ�Ϲ���
//	vector<int> v1;
//	int i = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//	cout << endl;
//	//ͨ���������ʽ����
//	vector<int> v2(v1.begin(), v1.end());
//	print(v2);
//	cout << endl;
//	//n��elm����
//	vector<int> v3(10, 100);//��һ�������Ǹ������ڶ���������Ԫ��
//	print(v3);
//	cout << endl;
//	//��������
//	vector<int> v4(v3);//��һ�������Ǹ������ڶ���������Ԫ��
//	print(v4);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//vector�ĸ�ֵ

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

//vector�����������ʹ�С
//empty()�ж��Ƿ�Ϊ��
//size()Ԫ�ظ���
//capacity()����������
//resize()����ָ��Ԫ�س��ȣ�������Ĭ�ϲ�0��Ҳ�������ò����Ԫ�أ�������ɾ������Ԫ��

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
//		cout << "����Ϊ��" << endl;
//	}
//
//	else
//	{
//		cout << "������Ϊ��" << endl;
//		cout << "������Ԫ�ظ���:" << v1.size() << endl;
//		cout << "��������:" << v1.capacity() << endl;
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

//vector�Ĳ����ɾ��
//push back(ele);//β������Ԫ��ele
//pop_back();//ɾ�����һ��Ԫ��
//insert(const iterator pos, ele)//������ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos��int count, ele);//������ָ��λ��pos����count��Ԫ��ele
//erase(const iterator pos);//ɾ��������ָ���Ԫ��
//erase(const_iterator start, const iterator end);//ɾ��ѡ������start��end֮���Ԫ��
//clear();//ɾ������������Ԫ��

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
//	//βɾ
//	v1.pop_back();
//	print(v1);
//	//����Ԫ��
//	v1.insert(v1.begin(), 100);
//	print(v1);
//	v1.insert(v1.begin(), 2, 100);
//	print(v1);
//	//ɾ��Ԫ��
//	v1.erase(v1.begin());
//	print(v1);
//	v1.erase(v1.begin(), v1.end() - 1);
//	print(v1);
//	//�������
//	v1.clear();
//	print(v1);
//
//	system("pause");
//	return 0;
//}

//vector���ݵĴ�ȡ

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
//	//[]����
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] <<" ";
//	}
//	cout << endl;
//	//at()����
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	cout << "������һ��Ԫ�أ�" << v1.front() << endl;
//	cout << "�������һ��Ԫ�أ�" << v1.back() << endl;
//
//	system("pause");
//	return 0;
//}

//vector��������

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
//	cout << "����ǰ��" << endl;
//	print(v1);
//	vector<int> v2;
//	for (int i = 1; i < 11; i++)
//	{
//		v2.push_back(i);
//	}
//	print(v2);
//	//swap()����Ԫ��
//	cout << "������" << endl;
//	v1.swap(v2);
//	print(v1);
//	print(v2);
//
//	//ʵ��Ӧ�ã������ڴ�Ч��
//	vector<int> v3;
//	for (int i = 1; i < 10000; i++)
//	{
//		v3.push_back(i);
//	}
//	cout << "������" << v3.capacity() << endl;
//	cout << "Ԫ�ظ�����" << v3.size() << endl;
//	v3.resize(3);//��������������ʱ��Ԫ�ظ����Ǽ����ˣ����������������䣬ռ�ÿռ����
//	cout << "������" << v3.capacity() << endl;
//	cout << "Ԫ�ظ�����" << v3.size() << endl;
//	//�������������swap()�����
//	vector<int>(v3).swap(v3);//���д���ǰ�벿��������������������v3��˼�ǰ���v3�ĸ�������������ʼ��һ����������
//	//�󲿷�������������������v3���������������������Ժ�v3�������ʵ���Ͼ�ָ������������������֮ǰ������������������������������
//	//������������ص��ǹ�����һ�У����������ͷţ�Ҳ�ʹﵽ�˿ռ��ͷŵ�Ŀ��
//	cout << "������" << v3.capacity() << endl;
//	cout << "Ԫ�ظ�����" << v3.size() << endl;
//
//	system("pause");
//	return 0;
//}

//vector��Ԥ���ռ�
//����vector�ڶ�̬��չ����ʱ����չ����
//reserve(int 1en);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�

//int main()
//{
//	vector<int> v1;
//	v1.reserve(10000);//��ϵͳ��ǰ֪����Ԥ����ô��Ŀռ䣬������Ч������չ����
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 10000; i++)//��ΪҪ�洢������������ϵͳҪ���ϵ�Ѱ���µĸ���ռ�
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

//deque����
//˫�����飬����ͷ����β�����в�ɾ��������֧���������

//��vector������
//vector����ͷ���Ĳ����ٶ�û��deque��
//vector����Ԫ�ص��ٶ�Ҫ��deque�죬��ʵ��ԭ���йأ��п�����
#include<deque>
//
//void print(const deque<int>& d)//�޶�ֻ��Ȩ��
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
//	//���캯��
//	deque<int> d2(d1.begin(), d1.end());
//	print(d2);
//	deque<int> d3(10, 100);
//	print(d3);
//	deque<int> d4(d3);
//	print(d4);
//	//��ֵ
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

//deque�����Ĵ�С����

//deque����û�������ĸ����Ϊ����һֱ������ȥ
//size,resize,empty��vector��ȫһ��

//deque�����Ĳ����ɾ��

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
//	//1.����
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
//	//2.ɾ��
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

//deque���������ݴ�ȡ

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
//	cout << "�����ĵ�һ��Ԫ�أ�" << d1.front() << endl;
//	cout << "�������һ��Ԫ�أ�" << d1.back() << endl;
//
//	system("pause");
//	return 0;
//}

//deque����������
//sort����֧��������ʵĵ���������������֧������
//Ĭ������ʽ������
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
//	cout << "δ����" << endl;
//	print(d1);
//	cout << "�����" << endl;
//	sort(d1.begin(), d1.end());
//	print(d1);
//
//	system("pause");
//	return 0;
//}

//����ʵ�ð���
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
//		string name = "ѡ��";
//		name += str[i];
//		int score = 0;
//		v.push_back(person(name, score));//person�๹�캯����ʼ�������͵÷�
//	}
//}
//void setscore(vector<person>& v)
//{
//	srand((unsigned int)time(NULL));//������������
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)//����ÿһ��ѡ��
//	{
//		deque<int> d;
//		for (int i = 0; i < 10; i++)//Ϊÿ��ѡ�ִ��
//		{
//			d.push_back(rand() % 41 + 60);//60-100
//		}
//		//ɾ����ߺ���ͷ�
//		d.pop_back();
//		d.pop_front();
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//		int avg = sum / d.size();
//		//��ֵ��ÿһ��ѡ��
//		it->m_score = avg;
//	}
//}
//void showscore(vector<person>& v)
//{
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << it->m_name << " " << "�÷֣�" << it->m_score << endl;
//	}
//}
//int main()
//{
//	//����5��ѡ��
//	vector<person> v;
//	createplayer(v);
//	//����
//	//for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "������" << it->m_name << "�÷�" << it->m_score << endl;
//	//}
//	//Ϊѡ�ִ��
//	setscore(v);
//
//	//չʾ����
//	showscore(v);
//
//	system("pause");
//	return 0;
//}

//ջstack����
//�Ƚ���������ܱ�����֧��empty��size��top��
//��ջpop����ջpush
#include<stack>
//int main()
//{
//	stack<int> s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	s.push(50);
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//	while (!empty(s))
//	{
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//		s.pop();
//	}
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//	system("pause");
//	return 0;
//}

//����queue����
//�Ƚ��ȳ������Է��ʶ��׶�β�����ܱ���
//֧��pop��push��front��back

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
//	person p1("��ɮ", 30);
//	person p2("�����", 300);
//	person p3("��˽�", 100);
//	person p4("ɳɮ", 200);
//	person p5("С����", 80);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	q.push(p5);
//
//	cout << "���д�С��" << q.size() << endl;
//
//	while (!empty(q))
//	{
//		cout << "���ף�" << q.front().m_name << " " << q.front().m_age << endl;
//		cout << "��β��" << q.back().m_name << " " << q.back().m_age << endl;
//		q.pop();
//	}
//
//	cout << "���д�С��" << q.size() << endl;
//
//	system("pause");
//	return 0;
//}

//list����
//����:�����ݽ�����ʽ�洢
//����(list)��һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
//�������� : ������һϵ�н�����
//������� : һ���Ǵ洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����
//��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������
//list���ŵ�:
//1.���ö�̬�洢���䣬��������ڴ��˷Ѻ����
//2.����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��list��
//ȱ�� :
//1.���������ǿռ�(ָ����)�� ʱ��(����)����ķѽϴ�
//List��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ�������
//�ܽ� : STL��List��vector���������ʹ�õ�������������ȱ��

//list���캯���Լ���ֵ������
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
//	cout << "����ǰ��" << endl;
//	printlist(L8);
//	printlist(L1);
//
//	L8.swap(L1);
//	cout << "������" << endl;
//	printlist(L8);
//	printlist(L1);
//
//	system("pause");
//	return 0;
//}

//list�Ĵ�С������֮ǰ������û������

//list�Ĳ����ɾ��
/*push_back(elem);//������β������һ��Ԫ��
pop_back();//ɾ�����������һ��Ԫ��
push_front(elem);//��������ͷ����һ��Ԫ��
pop_front();//��������ͷ�Ƴ���һ��Ԫ��
insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ��
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
clear();//�Ƴ���������������
erase(peg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
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

//list���ݵĴ�ȡ

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
//	it--;//������˵��list֧��˫��
//
//	//it = it + 1;//����˵�������������֧���������
//	cout << *(it++) << endl;
//
//	system("pause");
//	return 0;
//}

//list�����ķ�ת������
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
//	//��ת
//	L.reverse();
//	printlist(L);
//	//����
//	//sort(L.begin(), L.end());//������Ϊlist������֧��������ʣ���˲���ʹ��ȫ��������
//	//��ȷ������ʹ�������ڲ���Ա����sort
//	L.sort();//Ĭ������
//	printlist(L);
//	//��������
//	L.sort(mycompare);
//	printlist(L);
//	system("pause");
//	return 0;
//}

//������
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
//	person p1("����", 35, 175);
//	person p2("�ŷ�", 30, 180);
//	person p3("�����", 40, 176);
//	person p4("����", 34, 183);
//	person p5("����", 34, 185);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//
//	cout << "����ǰ��" << endl;
//	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������\t" << it->m_name << "\t���䣺" << it->m_age << "\t��ߣ�" << it->m_hight << endl;
//	}
//	cout << "�����" << endl;
//	L.sort(compare);
//	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������\t" << it->m_name << "\t���䣺" << it->m_age << "\t��ߣ�" << it->m_hight << endl;
//	}
//	system("pause");
//	return 0;
//}

//set����
//����Ԫ���ڱ������ʱ��ͻᱻ�Զ�����
//set��multiset�ǹ���ʽ�������ײ�ṹ�Ƕ�����
//����set���ܲ����ظ�ֵ��multiset����
//ֻ����insert����Ԫ��
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

//set�Ĵ�С�ͽ���
//setû��resize�Ĳ���
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
//		cout << "set��Ϊ��" << endl;
//		cout << "set������СΪ��" << s.size() << endl;
//	}
//	else
//	{
//		cout << "set����Ϊ��" << endl;
//	}
//	//����ǰ
//	cout << "����ǰ��" << endl;
//	printset(s);
//	printset(s1);
//	//������
//	cout << "������" << endl;
//	s1.swap(s);
//	printset(s);
//	printset(s1);
//	system("pause");
//	return 0;
//}

//set��ɾ�������

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

//set�����Ĳ��Һ�ͳ��

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
//		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ���Ԫ��" << endl;
//	}
//	int count = s.count(10);
//	cout << "Ҫͳ�Ƶ�Ԫ�ظ���Ϊ��" << count << endl;
//	system("pause");
//	return 0;
//}

//set��multiset������
//set�����Բ����ظ����ݣ���multiset����
//set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//nultiset���������ݣ���˿��Բ����ظ�����
//����Ҫ�ظ����ݾ���set
//int main()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);//��������᷵������ֵ��һ���ǵ�������һ����boolֵ
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//	system("pause");
//	return 0;
//}

//pair���鴴��
//����뷵����������������ö���

//int main()
//{
//	//1
//	pair<string, int> p1("Tom", 12);
//	cout << "������" << p1.first << "���䣺" << p1.second << endl;
//
//	//2
//	pair<string, int> p2 = make_pair("jerry", 10);
//	cout << "������" << p2.first << "���䣺" << p2.second << endl;
//
//	system("pause");
//	return 0;
//}

//set�����������������������
//class compare
//{
//public:
//	bool const operator()(int v1, int v2)const//��const��ԭ��������ֻ�Դ�������ݽ��бȽϣ������ܸı䣬������ӱ�������ܾ�����
//	{
//		return v1 > v2;//���÷º���ʵ�ֽ���
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
//	multiset<int,compare> s1;//��ǰ����set�����������
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

//set�Զ��������������

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
//	set<person,compare> s;//�����Զ������͵��������ͣ�����һ��ʼ��ָ���������
//	person p1("����", 35);
//	person p2("����", 32);
//	person p3("�ŷ�", 34);
//	person p4("����", 30);
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

//��ϣ��map/multimap����
//map������Ԫ�ض���pair,pair�е�һ��Ԫ��Ϊkey(��ֵ)�����������ã��ڶ���Ԫ��Ϊvaue(ʵֵ)
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//���Ը���keyֵѸ���ҵ�valueֵ
//map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//map���������������ظ�keyֵԪ��
//multimap�������������ظ�keyֵԪ��
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

//map�Ĵ�С�ͽ���
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
//		cout << "����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "������Ϊ��" << endl;
//		cout << "������СΪ��" << mp.size() << endl;
//	}
//	cout << "����ǰ��" << endl;
//	printmap(mp);
//	printmap(mp1);
//
//	cout << "������" << endl;
//	mp1.swap(mp);
//	printmap(mp);
//	printmap(mp1);
//
//	system("pause");
//	return 0;
//}

//map�����Ĳ����ɾ��

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
//	mp[4]=40;//һ�㲻����������[]���ŵ���ʽ�����룬�²�ע�ⴴ�������ڵļ�ֵ�ԣ�һ��������keyֵ�����ҵ���Ӧ��ֵ
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

//map���Һ�ͳ��

//int main()
//{
//	map<int, int> mp;
//	mp.insert(pair<int, int>(1, 10));
//	mp.insert(pair<int, int>(2, 100));
//	mp.insert(pair<int, int>(3, 101));
//	mp.insert(pair<int, int>(4, 103));
//	//����
//	map<int, int>::iterator pos = mp.find(3);
//	if (pos != mp.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << "key=" << pos->first << "value=" << pos->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//	//ͳ��
//	int count = mp.count(3);
//	cout << "������" << count << endl;
//	system("pause");
//	return 0;
//}

//map����

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
//	person p1("����", 45);
//	person p2("�ŷ�", 35);
//	person p3("����", 40);
//
//	mp.insert(pair<person,int>(p1,1));
//	mp.insert(pair<person, int>(p2, 1));
//	mp.insert(pair<person, int>(p3, 1));
//
//	for (map<person,int>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "������" << (it->first).m_name << " ���䣺" << (it->first).m_age << endl;
//	}
//	system("pause");
//	return 0;
//}

//��������--�º���

//���غ������ò��������࣬����󳣳�Ϊ��������
//��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//������������һ���࣬���Ǻ���

//1.����������ʹ��ʱ����������ͨ������������,�����в����������з���ֵ
//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//3.�������������Ϊ��������

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
//	int count;//��Ӧ�ڶ��㣬�������Լ���״̬�����м�¼
//};
//void myprint(add& ad, int v1, int v2)
//{
//	cout << ad(v1, v2) << endl;
//}
//int main()
//{
//	add myadd;
//	cout << myadd(1, 2) << endl;//��Ӧ��һ�㣬�����в����ͷ���ֵ���Լ���ʽ�����ں�������
//
//	myprint(myadd, 1, 2);//��Ӧ�����㣬�������������Ϊ��������
//
//	system("pause");
//	return 0;
//}

//ν��
//����bool���͵ķº�����Ϊν��
//���operator()����һ����������ô����һԪν��
//���operator()����������������ô������Ԫν��
#include<algorithm>
//class greaterfive
//{
//public:
//	bool operator()(int val)//һԪν��
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
//		cout << "�ҵ��˴���5������" << *it << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
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

//�ڽ���������
//1.�����º���
//����negate��һԪ���㣬�����Ķ��Ƕ�Ԫ����
//template<class T>T plus<T>//�ӷ��º���
//template<class T>T minus<T>//�����º���
//template<class T>T multiplies<T>//�˷��º���
//template<class T>T divides<T>//�����º���
//template<class T>T modulus<T>//ȡģ�º���
//template<class T>T negate<T>//ȡ���º���

#include<functional>
//int main()
//{
//	negate<int>n;//��ģ�崴��һ������
//	cout << n(10) << endl;
//	plus<int> p;
//	cout << p(10, 20) << endl;
//
//	system("pause");
//	return 0;
//}

//2.��ϵ�º���
//template<class T> bool equal to<T>//����
//template<class T> bool not_equal to<T>//����
//template<class T> bool greater<T>//����
//template<class T> bool greater equal<T>//���ڵ���
//template<class T> bool less<T>//С��
//template<class T> bool less_equal<T>//С�ڵ���
//���д�������õ�

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

//3.�߼��º���
//template<class T> bool logical _and<T>//�߼���
//template<class T> bool logical_or<T>//�߼���
//template<class T> bool logical not<T>//�߼���

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

//�����㷨
//���ñ����㷨
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
//�ĸ�����
//transform(iteratorbeg1, iterator end1, iterator beg2, _func);
//beg1 Դ������ʼ������
//end1 Դ��������������
//beg2 Ŀ��������ʼ������
//_func �������ߺ�������
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
//	v1.resize(v.size());//����ǵ���ǰ���ٿռ�
//	transform(v.begin(), v.end(), v1.begin(),trans());
//	for_each(v1.begin(), v1.end(), myprint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//���ò����㷨
//find//����Ԫ��
//find if//����������Ԫ��
//adjacent find//���������ظ�Ԫ��
//binary search//���ֲ��ҷ�
//count//ͳ��Ԫ�ظ���
//count if//������ͳ��Ԫ�ظ���
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
//	//������������
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it != v.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << *it << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	vector<int>::iterator it1 = find_if(v.begin(), v.end(), greaterfive());
//	if (it1 != v.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << *it1 << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	//�Զ�����������
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
//		cout << "�ҵ�Ԫ�أ�" << vit->m_name << " " << vit->m_age << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	vector<person>::iterator vit1 = find_if(v1.begin(), v1.end(), greater20());
//	if (vit1 != v1.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << vit1->m_name << " " << vit1->m_age << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	system("pause");
//	return 0;
//}

//adjacent_find���������ظ�Ԫ��

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
//		cout << "�ҵ�Ԫ�أ�" << *it << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//binary_search���ֲ���
//��������������,����Ľ��δ֪
//����false����true

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
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	system("pause");
	return 0;
}