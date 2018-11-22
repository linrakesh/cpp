/*	Program to display list list functionality
	made by		: rakesh kumar
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *ptr;
};

class linklist{
		node *x,*y,*temp;
	public:
		linklist(){
			x=NULL;
		}
		void add_node_begin();
		void add_node_end();
		void delete_begin();
		void show_data();
};		

void linklist::add_node_begin(){
	if(x==NULL)
	  {
	  	x = new(node);
	  	cout<<"Enter value :";
	  	cin>>x->data;
	  	x->ptr=NULL;
	  }
	else
		{
			temp = new(node);
			cout<<"Enter value :";
			cin>>temp->data;
			temp->ptr=x;
			x= temp;
		}
	return;
}

void linklist::add_node_end(){
	if(x==NULL)
		{
			x= new(node);
			cout<<"Enter value :";
			cin>>x->data;
			x->ptr= NULL;
		}
	else
		{
			y = x;
			while(y->ptr!=NULL)
				y = y->ptr;
			y->ptr = new(node);
			y = y->ptr;
			cout<<"Enter value :";
			cin>>y->data;
			y->ptr =NULL;
		}
	return;
}

void linklist::delete_begin(){
	if(x==NULL)
		{
			cout<<"Link list empty";
			getch();
		}
	else
		{
			temp = x;
			x= x->ptr;
			delete(temp);
		}
	return;
}

void linklist::show_data()
{
	if(x==NULL)
		{
			cout<<"Link list empty";
			getch();
		}
	else
		{
			y = x;
			while(y!=NULL)
				{
					cout<<y->data<<"\t";
					y = y->ptr;
				}
			getch();
		}
	return;
}

int main(){
	linklist l;
	int choice;
	
	do{
		system("cls");
		cout<<"\n\n\t\t\t LINK LIST MENU";
		cout<<"\n\n\n\t\t1.	Add at begining";
		cout<<"\n\n\n\t\t2.	Add at end";
		cout<<"\n\n\n\t\t3.	Delete from beginging";
		cout<<"\n\n\n\t\t4.	Show contents";
		cout<<"\n\n\n\t\t5.	Exit";
		cout<<"\n\n\n\n\t\t\t Enter your choice (1..5) :";
		cin>>choice;
		switch(choice)
		{
			case 1:		l.add_node_begin();
						break;
			case 2:
						l.add_node_end();
						break;
			case 3:
						l.delete_begin();
						break;
			case 4:
						l.show_data();
						break;
			case 5:
						break;
			default:
						cout<<"\n\n Wrong choice...Try again";
		}
	}while(choice!=5);
	return 0;
}
