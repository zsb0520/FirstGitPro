#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;
void fun(char *p,char *q,char *o,int n)
{
	int i,j;
	i=j=n;
	while(*(p+i-n)!='\0')
	{
		*(o+i)=*(p+i-n);
		i++;
	}
	while(*(q+n)!='\0')
	{
		*(o+i)=*(q+j);
		i++;j++;
	}
}
int main(void)
{
	char str1[100],str2[100],str3[100],*o,*p,*q;
	int n;
	cout<<"������һ���ַ�����"<<endl;
	gets(str1);
	cout<<"������Ҫ������ַ�����"<<endl;
	gets(str2);
	cout<<"�������ڵڼ�λ����룺"<<endl;
	cin>>n;
	q=str1;
	p=str2;
	o=str3;
	strcpy(o,q);
	fun(p,q,o,n);
	puts(o);
	cout<<"������ַ���Ϊ��"<<o<<endl;
	cout<<endl;
}
