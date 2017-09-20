#include<iostream>
using namespace std;
int main(void)
{
	int x;
	cout<<"Please input x="<<endl;
	cin>>x;
	if(x<10)
	cout<<x<<":x<10.\n";
	else
	if(10<=x<99)
	cout<<x<<":x>=10¡¬x<=99\n";
	else
	if(100<=x<999)
	cout<<x<<":x>=100¡¬x<=999.\n";
	else
	if(1000<=x)
	cout<<x<<":x>=1000.\n" ;
}
