#include<iostream>
using namespace std;
int main(void)
{
	int a,b;
	cout<<"piease input a,b:";
	cin>>a>>b;
	if(a%b==0)
		cout<<"a/b="<<a/b<<endl;
	else
		cout<<"a/b="<<a/b<<","<<"a%b="<<a%b<<endl;
}
