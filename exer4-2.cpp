#include<iostream>
using namespace std;
int main(void)
{
	int year;
	for(year=2000;year<=3000;year++)
	{
		if(year%400==0||(year%4==0&&year%100!=0))
			cout<<year<<"    ";
	}
}
