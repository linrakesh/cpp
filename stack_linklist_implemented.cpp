/*	Program to display list list implemented stack
	made by		: rakesh kumar
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *ptr;
};

class stack{
		node *x,*y,*temp;
	public:
		stack(){
			x=NULL;
		}
		void push();
		void pop();
		void show_data();
};		

void stack::push(){
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

void stack::pop(){
	if(x==NULL)
		{
			cout<<"Stack empty";
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

void stack::show_data()
{
	if(x==NULL)
		{
			cout<<"Stack empty";
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
	stack l;
	int choice;
	
	do{
		system("cls");
		cout<<"\n\n\n\t\t   STACK MENU";
		cout<<"\n\n\n\t\t1.	Push";
		cout<<"\n\n\n\t\t2.	POP";
		cout<<"\n\n\n\t\t3.	Show contents";
		cout<<"\n\n\n\t\t4.	Exit";
		cout<<"\n\n\n\n\t\t Enter your choice (1..4) :";
		cin>>choice;
		switch(choice)
		{
			case 1:		l.push();
						break;
			case 2:
						l.pop();
						break;
			case 3:
						l.show_data();
						break;
			case 4:
						break;
			default:
						cout<<"\n\n Wrong choice...Try again";
		}
	}while(choice!=4);
	return 0;
}
