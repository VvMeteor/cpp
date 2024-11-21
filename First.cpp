#include<iostream>
using namespace std;

int main()
{
	cout << "hello world!" << endl;
	int a = 10;
	cout << "a=" << a << endl;

	//单精度float和双精度double，输出小数默认最多6位有效数字
	float f1 = 3.1415926f;//编译器默认小数为双精度，加f转化，不加也没问题，float会起作用
	cout << "f1=" << f1 << endl;

	//科学计数法
	float b = 3e2;//等效于3*10^2=300
	cout << "b=" << b << endl;

	//常用的转义字符
	cout << "hehe\n";
	cout << "hahaha\taaaaa" << endl;//\t加上前面字符串一共8个空格位，用于水平制表
	cout << "haha\tbbbbb" << endl;
	cout << "hahaha\tcccc" << endl;
	cout << "\\" << endl;

	return 0;
}