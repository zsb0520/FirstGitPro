#include<iostream>
using namespace std;
int main(void)
{  
    int i;
    int f[20] = {1, 1};
    for (i = 2; i < 20; i++)
        f[i] = f[i-2] + f[i-1];
         for (i = 0; i < 20; i++)
    {
	cout<<f[i]<<",";
	}
}
