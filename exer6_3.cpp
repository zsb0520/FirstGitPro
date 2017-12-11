#include <iostream> 
using namespace std;
#define M 4
#define N 4
int main(void)
{
	int i,k,sum=0;
	int a[M][N]={{1,2,3,4},{5,6,7,8},{9,8,7,6},{5,4,3,2}};
	int b[M][N];
	for(i=0;i<M;i++)
	   for(k=0;k<N;k++)
	      if(i>k)
		  b[i][k]=a[i][k]-1;
		  else if(i<k) b[i][k]=a[i][k]+1;
		  else b[i][k]=a[i][k],sum+=a[i][k];
		  cout<<"对角线之和sum="<<sum<<endl;
	for(i=0;i<M;i++)
	 {
	 	for(k=0;k<N;k++)
		cout<<b[i][k]<<" ";
	 	    cout<<endl;
	 }

}

