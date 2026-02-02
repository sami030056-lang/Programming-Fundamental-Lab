#include<iostream>
using namespace std;
int main()
{
	int num=5;
	int *ptr=&num;
	*ptr=25;
	cout<<"modified value:"<<num<<endl;
	return 0;
	
}
