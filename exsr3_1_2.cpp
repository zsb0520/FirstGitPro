#include<iostream>
using namespace std;
int main()
{
	int x,i=0;
	cout<<"Please input x=";
	cin>>x;
	while(x!=0)
	{
		x/=10;
		i++;
		
	}
	switch(i)
	{
	    case 1:cout<<"x<10\n";break;
		case 2:cout<<"x>=10¡¬x<=99\n";break;
		case 3:cout<<"x>=100¡¬x<=999\n";break;	
	    default:
		cout<<"x>=1000\n";
		}
	    
}
