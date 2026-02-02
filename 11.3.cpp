#include<iostream>
using namespace std;
int main()
{
	int arr[5]={10,20,30,40,50};
	int sum=0;
	for(int i=0; i<5; i++)
	{
		sum+=arr[i];
	}
	float avg=sum/5.0;
	cout<<"sum:"<<sum<<endl;
	cout<<"average:"<<avg<<endl;
	return 0;
}
