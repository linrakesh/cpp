/*	Program to display list list implemented queue
	made by		: rakesh kumar
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *ptr;
};

class queue{
		node *front,*rear,*temp,*y;
	public:
		queue(){
			front=rear=NULL;
		}
		void add_node();
		void delete_node();
		void show_data();
};		

void queue::add_node(){
	if(rear==NULL)
	  {
	  	rear = new(node);
	  	cout<<"Enter value :";
	  	cin>>rear->data;
	  	rear->ptr=NULL;
	  	front = rear;
	  }
	else
		{
			rear->ptr = new(node);
			rear = rear->ptr;
			cout<<"Enter value :";
			cin>>rear->data;
			rear->ptr = NULL;
		}
	return;
}

void queue::delete_node(){
	if(front==NULL)
		{
			cout<<"Queue empty";
			getch();
		}
	else
		if(front==rear)
	  	{	
	  		temp = front;
	  		front = front->ptr;
	  		delete(temp);
	  		rear= front;
	  	}
	  	else
	  	{
	  		temp = front;
	  		front= front->ptr;
	  		delete(temp);
		  }
	  
	return;
}

void queue::show_data()
{
	if(front==NULL)
		{
			cout<<"Queue empty";
			getch();
		}
	else
		{
			y = front;
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
	queue q;
	int choice;
	
	do{
		system("cls");
		cout<<"\n\n\n\t\t   QUEUE MENU";
		cout<<"\n\n\n\t\t1.	Add Node";
		cout<<"\n\n\n\t\t2.	Delete Node";
		cout<<"\n\n\n\t\t3.	Show contents";
		cout<<"\n\n\n\t\t4.	Exit";
		cout<<"\n\n\n\n\t\t Enter your choice (1..4) :";
		cin>>choice;
		switch(choice)
		{
			case 1:		q.add_node();
						break;
			case 2:
						q.delete_node();
						break;
			case 3:
						q.show_data();
						break;
			case 4:
						break;
			default:
						cout<<"\n\n Wrong choice...Try again";
		}
	}while(choice!=4);
	return 0;
}
