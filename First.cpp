#include<iostream>
using namespace std;

int main()
{
	cout << "hello world!" << endl;
	int a = 10;
	cout << "a=" << a << endl;

	//������float��˫����double�����С��Ĭ�����6λ��Ч����
	float f1 = 3.1415926f;//������Ĭ��С��Ϊ˫���ȣ���fת��������Ҳû���⣬float��������
	cout << "f1=" << f1 << endl;

	//��ѧ������
	float b = 3e2;//��Ч��3*10^2=300
	cout << "b=" << b << endl;

	//���õ�ת���ַ�
	cout << "hehe\n";
	cout << "hahaha\taaaaa" << endl;//\t����ǰ���ַ���һ��8���ո�λ������ˮƽ�Ʊ�
	cout << "haha\tbbbbb" << endl;
	cout << "hahaha\tcccc" << endl;
	cout << "\\" << endl;

	return 0;
}