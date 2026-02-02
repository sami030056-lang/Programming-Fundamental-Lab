#include<iostream>
using namespace std;
int main(){
	int *ptr=new int;
	*ptr=100;
	cout<<"value stored in dynamically allocated memory:"<<*ptr<<endl;
	delete ptr;
	return 0;
}
