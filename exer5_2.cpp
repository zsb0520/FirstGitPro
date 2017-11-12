#include<iostream>
using namespace std;
float sum(int n,float s)
{
	int i;
	for(i=1;i<=n;i++)
	{
		s=s+2.0/(i*i+i);
	}
	return s;
}
int main(void)
{
	int n;
	float s=0;
	cin>>n;
	s=sum(n,s);
	cout<<s<<endl;
}
