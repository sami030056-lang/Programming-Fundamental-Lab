#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
float divi(int a, int b)
{
	return (float)a/b;
}
int main()
{
	int choice,x,y;
	cout<<"1.Add\n2.Sub\n3.Mul\n4.Div\n";
	cin>>choice;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	if(choice == 1)
	cout<<add(x,y);
	else if(choice ==2)
	cout<<sub(x,y);
	else if(choice ==3)
	cout<<mul(x,y);
	else if(choice == 4)
	cout<<divi(x,y);
	return 0;
}
