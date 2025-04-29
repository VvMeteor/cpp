# coding=utf-8

#1.print函数
#完整语法：print(value,…,sep=‘ ’,end=‘\n’,file=None)

# a=10
# b=20
#打印数字不需要加引号
# print(10)
# print(a)
#
# print(20)
# print(b)

#打印字符需要加引号，几个引号不重要
# print('北京欢迎你')
# print("北京欢迎你")
# print('''北京欢迎你''')

#不换行
# print('北京欢迎你','北京欢迎你','北京欢迎你',2025)
# print('北京欢迎你',end='-->')
# print('2025')

#换分隔符
# print('北京','欢迎你',sep='')

#连接符
# print('北京'+'欢迎你')

#根据ASCII值输出字符
# print('C')
# print(chr(67))
# print('W')
# print(chr(87))

#字符对应编码
# print(ord('北'))
# print(ord('京'))
# print(chr(21271),chr(20140),sep='')

#input函数
#默认接收字符串类型

# name=input('请输入你的姓名：')
# print('你的姓名为：'+name)

#类型转换
# name=int(name)
# print('你的姓名为：',name)

#单行注释，加#即可

#多行注释，如下：
'''
这里是注释内容
'''

"""
这里是注释内容
"""

#中文声明注释，必须写在第一行代码，决定python文件的编码格式

#赋值操作
# num=8
# num='hello'
#两个变量可以指向同一个值，并且地址相同
# n=m=10
# print(type(num))
# print(id(n),id(m))

#数据类型
#1.不可变数据类型：int，float
#复数类型由实部和虚部组成，.real为实部，.imag为虚部(j)
# num=123+10j
# print(num.real)
# print(num.imag)

#字符类型
#三个单引号和三个双引号效果是一样的，都是引用多行字符串
# info='''联系人
# 电话
# '''
#
# info1="""联系人
# 电话
# """
# print(info)
# print('----------------')
# print(info1)

#转义字符
# print('北京\n欢迎你')
# print('北京\t欢迎你')
# print('老师说：\"好好学习，天天向上\"')
# #加上r或R转为原字符
# print(R'北京\n欢迎你')

#字符串的切片和索引
#-11 -10 -9 -8 -7 -6 -5 -4 -3 -2 -1
#  h  e   l  l  o     w  o  r  l  d
#  0  1   2  3  4  5  6  7  8  9  10
# s='hello world'
# print(s[0],s[-11])
# print('abcdef'[3])
# print('abcdef'[-3])
# print('-----------')
# print(s[1:5])#从下标1开始到5，不包含5
# print(s[-10:-6])
# print(s[:5])#前面不写默认从0开始
# print(s[6:])#后面不写默认到末尾结束

#字符串类型的操作
# x='北京'
# y='欢迎你'
# print(x+y)
# print(x*5)
# print('上海' in x)
# print('北京' in x)

#eval函数
#去掉字符串左右括号，并执行加法运算
# x='5+1'
# print(eval(x))
# #通常和input函数配合使用
# print(eval(input('请输入你的年龄:')))
# print(eval(input('请输入你的身高:')))
# hello='北京欢迎你'
# print(eval('hello'))

#运算符
# print('+:',1+1)
# print('-:',5-1)
# print('/:',10/2)
# print('//:',10//3)
# print('%:',7%3)
# print('**:',2**3)

#运算符扩展
# a=10
# a/=2
# print('/=:',a)

#链式赋值
# a=b=c=100
# print(a,b,c)

#系列解包赋值
# a,b=10,20
# print(a,b)
# a,b=b,a
# print(a,b)

#逻辑运算符
# print(8>7 and 1>0)
# print(8>7 or 1<0)
# print(not (1>0))

#位运算符

#分支结构
# num=eval(input("请输入幸运数字:"))
# if num==1:
#     print("you are the best")
# elif num>1 and num<10:
#     print("just keep on")
# elif num==0:
#     print("stoic calm")
# else:
#     print("never give up")

#模式匹配(仅支持3.10版本以上)
# score=input("请输入你的成绩:")
# match score:
#     case 'A':
#         print("excellent")
#     case 'B':
#         print("good")
#     case 'C':
#         print("common")

#遍历循环for
# for i in "hello":
#     print(i)
# for i in range(1,10):#内置函数range产生包含1，但不含10的数组
#     print(i)

#100-999的水仙花数查找
# for i in range(100,1000):
#     if (i%10)**3+(i//10%10)**3+(i//100%10)**3==i:
#         print(i,"是水仙花数字",sep='')
#     else:
#         pass

#while循环
# i=0
# sum=0
# while i<=100:
#     sum+=i
#     i+=1
# print(sum)