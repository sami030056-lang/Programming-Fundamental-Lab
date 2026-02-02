#include<iostream>
using namespace std;
int main()
{
	int n;
	int fact=1;
	cin>>n;
	if(n<0)
	{
		cout<<"factorial not defined ";
	}
	else
	{
		for(int i=1; i<=n;i++)
		{
			fact=fact*i;
		}
		cout<<"factorial:"<<fact<<endl;
	}
	return 0;
}
