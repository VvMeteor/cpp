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