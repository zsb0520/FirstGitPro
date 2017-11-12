#include<iostream>
#define M 10
using namespace std;
int main(void)
{
	int i,j,k,max,min;
	static int a[M];
	for(i=0;i<M;i++)
	cin>>a[i];
	max=min=a[0];
	j=k=0;
	for(i=0;i<M;i++)
	{
		if(max<a[i])
		{max=a[i]; j=i;
		}
		else if(min>a[i])
		{
			min=a[i]; k=i;
		}
	}
	int t;
	t=a[j];
	a[j]=a[k];
	a[k]=t;
	cout<<endl;
	for(i=0;i<M;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}



