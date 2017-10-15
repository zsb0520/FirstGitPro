#include<iostream>
using namespace std;
int main(void)
{
	int n,i=0;
	cout<<"please input n:";
	cin>>n;
	while(n!=2)
	{
		if(n%2!=0)
			n=3*n+1;
		else
			n=n/2;
		i=i++;
	}
	
	
		cout<<"i="<<i<<endl;
}
