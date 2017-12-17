#include <iostream>
using namespace std;
void fun(int *p)
{
	int i,x,y,n;
	x=y=0;
	for(i=1;i<10;i++)
		if(*(p+x)>*(p+i))
			x=i;
	for(i=1;i<10;i++)
		if(*(p+y)<*(p+i))
			y=i;
	n=*(p+y);
	*(p+y)=*(p+x);
	*(p+x)=n;
}
int main(void)
{
	int a[10],i,*p;
	for(i=0;i<10;i++)
		cin>>a[i];
	p=a;
	fun(p);
	for(i=0;i<10;i++)
		cout<<*(p+i)<<" ";
	cout<<endl;
}
