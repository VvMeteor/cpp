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
template<class T1, class T2>
class person;//��ǰ�ñ�����֪��person��Ĵ���
template<class T1, class T2>
void show1(person< T1, T2 > p)//
{
	cout << p.m_name << endl;
	cout << p.m_age << endl;
}
template<class T1, class T2>
class person
{
	//����ʵ��ȫ�ֺ���
	friend void show(person< T1, T2 > p)
	{
		cout << p.m_name << endl;
		cout << p.m_age << endl;
	}
	//����ʵ��ȫ�ֺ���
	//���������ʵ�֣�Ҫ�ñ�������֪�����Ĵ��ڣ���Ȼ�����ڱ�ʶ��Ϊ��ͨ����������ʵ��������ģ���Ա����
	friend void show1<>(person< T1, T2 > p);//�����<>�Ŀ�ģ��Ĳ����б���Ǹ��߱�����������һ����ģ�庯��
public:
	person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

void test()
{
	person<string, int>p1("Tom", 18);
	show(p1);
	show1(p1);

}
int main()
{
	test();

	system("pause");
	return 0;
}