#include<iostream>
using namespace std;
int main(void)
{
	char a[10]="Hey ",b[10]="Man!";
	 int i,j=0;
    for(i=0;i<10;i++)
    {
        if(a[i]=='\0')
        {
            a[i]=b[j];
            j++;
        }
    }
    puts(a);
}
