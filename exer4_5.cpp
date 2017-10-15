#include<iostream>
using namespace std;
int main(void)
{
	int n,m=1;
	for(m;m<100;m++)
	{
		n=m*m;
	if((m<10&&(n-m)%10==0)||(m>=10&&(n-m)%100==0))
		cout<<m<<endl;
	}
}

