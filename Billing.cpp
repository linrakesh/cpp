/*	Computer project on retail Billing   
	made by				: rakesh kumar
	Last compiled on	: 23-10-2018
*/
#include<fstream>
#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;
void line(int n=120, char ch='-'){
	for(int i=0;i<n;i++)
		cout<<ch;
}
class item{
	private:
		int item_no;
		char item_name[30];
		float item_price;
	public:
		void read_data();
		void show_data();
		void add_item();
		void edit_item();
		void delete_item();
		void report();
		void main_menu();
		int item_price(int tempNumber);
		char* item_name(int tempNumber);
};

class Billing:public item{
	private:
		int invoice_no;
		char customer_name[30];
		char phone_no[20];
		float amount;
	public:
		void input_data();
		void save_info();
		void report();
};

void Billing::input_data(){
	int titem_no;
	float amount=0;
	cout<<"Invoice No:";
	cin>>invoice_no;
	cout<<"Customer Name :";
	fflush(stdin);
	cin.getline(customer_name,30);
	cout<<"Phone No:";
	fflush(stdin);
	cin.getline(phone_no);
	do{
		cout<<"Item No:";
		cin>>titem_no;
		name = item_name(titem_no);
		cout<<"Name :"<<name;
		price = item_price(item_no);
		cout<<"Price :"<<name;
		cout<<Price;
		cout<<"Qty :";
		cin>>qty;
		amount += price*qty;
		cout<<"Total Payable amount :"<<amount;
	}while(titem_no!=0);
	return;
}

void item::read_data(){
	cout<<"Item No :";
	cin>>item_no;
	cout<<"Item Name :";
	fflush(stdin);
	cin.getline(item_name,30);
	cout<<"Item Price :";
	fflush(stdin);
	cin>>item_price;
}

void item::show_data(){
	cout<<"Item No :"<<item_no;
	cout<<"item Name :"<<item_name;
	cout<<"item Price :"<<item_price;
}

void item::add_item(){
	ofstream fout;
	fout.open("item.dat",ios::app|ios::binary);
	read_data();
	fout.write((char*)this,sizeof(item));
	fout.close();
}

void item::delete_item(){
	int titem_no;
	ifstream fin;
	ofstream fout;
	system("cls");
	cout<<"\n\t\t Delete Item Screen\n";
	cout<<"Item No :";
	cin>>titem_no;
	
	fin.open("item.dat",ios::in|ios::binary);
	fout.open("temp.dat",ios::out|ios::binary);
	while(fin.read((char*)this,sizeof(item)))
	  {
	  	if(item_no!=titem_no)
	  		fout.write((char*)this,sizeof(item));
	  }
	fin.close();
	fout.close();
	remove("item.dat");
	rename("temp.dat","item.dat");
}

void item::edit_item(){
	int titem_no;
	ifstream fin;
	ofstream fout;
	system("cls");
	cout<<"\n\t\t Edit Item Screen\n";
	cout<<"Item No :";
	cin>>titem_no;
	
	fin.open("item.dat",ios::in|ios::binary);
	fout.open("temp.dat",ios::out|ios::binary);
	while(fin.read((char*)this,sizeof(item)))
	  {
	  	if(item_no==titem_no)
	  		read_data();
		fout.write((char*)this,sizeof(item));
	  }
	fin.close();
	fout.close();
	remove("item.dat");
	rename("temp.dat","item.dat");
}

void item::report(){
	ifstream fin;
	fin.open("item.dat",ios::in|ios::binary);
	system("cls");
	cout<<"\n\t\t\t\t\t\t List of Items\n\n";
	line();
	cout<<"S.NO\t\t\tItem No\t\t\t Item Name \t\t\t Price\n";
	line();
	int i=1;
	while(fin.read((char*)this,sizeof(item)))
		{
			cout<<i++<<"\t\t\t"<<item_no<<"\t\t\t"<<item_name<<"\t\t\t\t "<<item_price<<endl;
		}
	line();
	fin.close();
	getch();
}

void item::main_menu(){
	int choice;
	do{
		system("cls");
		cout<<"\n\t\t\t ITEM MENU";
		cout<<"\n\t\t\t\t1.	Add Item";
		cout<<"\n\t\t\t\t2.	Delete Item";
		cout<<"\n\t\t\t\t3.	Edit Item";
		cout<<"\n\t\t\t\t4.	Report";
		cout<<"\n\t\t\t\t5.	Exit";
		cout<<"\n\t\t\t\t	Enter your choice(1..5) :";
		cin>>choice;
		switch(choice)
		 {
		 	case 1:
		 			add_item();
		 			break;
		 	case 2:
		 			delete_item();
		 			break;
		 	case 3:
		 			edit_item();
		 			break;
		 	case 4:
		 			report();
		 			break;
		 	case 5:
		 			break;
		 	default:
		 			cout<<"\n\n Wrong choice...Try again";
		 			getch();
		 }
	}while(choice!=5);
}

int main(){
	item A;
	A.main_menu();
	return 0;
}
