#include<iostream>
#include<iomanip>
using namespace std;

void insert_element(int x[],int n, int &front, int &rear, int value){
	if(rear>=n-1){
		cout<<"\n Queue full. Can not add another element";
	}
	else{
		if(rear == -999){
			front = rear =0;
			x[rear]=value;
		}
		else{
			rear = rear+1;
			x[rear]=value;
		}
	}
}

void delete_element(int x[], int &front, int &rear ){
	if(front==-999){
		cout<<"\n QUeue Empty.Can not delete element";
	}
	else
	{
	  if(front==rear){
	  	cout<<"Deleted element "<<x[front];
	  	front = rear = -999;
	  }
	  else
	  {
	  	cout<<"Deleted element"<<x[front];
	  	front = front+1;
	  }
	}
}

void display(int x[],int front,int rear){
	if(front==-999){
		cout<<"\n Queue Empty";
	}
	else{
		for(int i=front;i<=rear;i++)
			cout<<setw(6)<<x[i];
	}
}

int main(){
	int x[10],front, rear,choice,value;
	front=rear = -999;
	do{
		cout<<"\n\n QUEUE MENU";
		cout<<"\n1.	Add Element";
		cout<<"\n2.	Delete";
		cout<<"\n3.	Display";
		cout<<"\n4.	Exit";
		cout<<"\n\n	Enter your choice (1..4):";
		cin>>choice;
		switch(choice){
			case 1:
					cout<<"\n Enter value :";
					cin>>value;
					insert_element(x,10,front,rear,value);
					break;
			case 2:
					delete_element(x,front,rear);
					break;
			case 3:
					display(x,front,rear);
					break;
			case 4:
					break;
			default:
					cout<<"\nWrong Choice....Try again";
		}
	}while(choice!=4);
	return 0;
}
