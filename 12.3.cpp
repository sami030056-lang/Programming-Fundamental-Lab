#include<iostream>
using namespace std;
void checkevenodd(int num)
{
	if(num %2==0)
	cout<<"even"<<endl;
	else
	cout<<"odd"<<endl;
}
int main()
{
	checkevenodd(5);
	checkevenodd(10);
	return 0;
	
}
