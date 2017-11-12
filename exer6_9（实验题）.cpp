#include <iostream>
using namespace std;
int main(void)
{
	int m;
    float f(int m);
	cin>>m;
	f(m);
}
void f(int m)
{
	int i,x,y,n=0,a;
	for(i=1;i<=m;i++)
	{
		x=i%7;
		y=i%11;
		if(x==0||y==0)
		{
			a=1;
			n++;
			cout<<i<<endl;
		}
	}
	cout<<"n="<<n<<endl;
}


		
		
