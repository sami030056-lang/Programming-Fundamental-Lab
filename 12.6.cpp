#include<iostream>
using namespace std;
void showmenu()
{
		cout<<"---------------MENU--------------"<<endl;
	cout<<"1.Burger = 450"<<endl;
	cout<<"2.Pizza  = 1190"<<endl;
	cout<<"3.Fries  = 250"<<endl;
	cout<<"4.Biryani  =320"<<endl;
	cout<<"5.Drink  = 100"<<endl;
	cout<<"0.Exit "<<endl;
}
int calculateitem(int price,int quantity)
{
	return price*quantity;
}
float finalbill(float total)
{
	return total+(total*0.10);
}
int main()
{
	int choice,qty;
	float total=0;
	do
	{
		showmenu();
		cout<<"Select Item:";
		cin>>choice;
		if(choice == 0)
		break;
		cout<<"Enter Quantity:";
		cin>>qty;
		if(choice == 1)
		total+=calculateitem(450,qty);
		else if(choice == 2)
		total+=calculateitem(1190,qty);
		else if(choice == 3)
		total+=calculateitem(250,qty);
		else if(choice == 4)
		total+=calculateitem(320,qty);
		else if(choice == 5)
		total+=calculateitem(100,qty);
	}while(choice!=0);
	cout<<"Total bill with Tax:"<<finalbill(total);
	return 0;
	
}

