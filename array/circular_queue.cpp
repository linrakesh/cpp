// program to implement circular queue using single dimensional array
// made by 		: rakesh kumar


#include<iostream>
#include<iomanip>
using namespace std;

void insert_element(int x[],int n, int &front, int &rear, int value){
	if ((front == 0 && rear == n-1) || (front == rear+1)) {
      cout<<"Queue Overflow \n";
      return;
   }
   
   if (front == -1) {
      front = 0;
      rear = 0;
   } else {
      if (rear == n - 1)
      	rear = 0;
      else
      	rear = rear + 1;
   }
   x[rear] = value ;
 return;	
}

void delete_element(int x[],int n, int &front, int &rear ){
	if (front == -1) {
      cout<<"Queue Underflow\n";
      return ;
   }
   cout<<"Element deleted from queue is : "<<x[front]<<endl;
   
   if (front == rear) {
      front = -1;
      rear = -1;
   } 
   else {
	      if (front == n - 1)
	      	front = 0;
	      else
	      	front = front + 1;
   		}
}

void display(int x[],int n, int front,int rear){
	if(front==-1){
		cout<<"\n Circular Queue empty";
	}
	else
	{
		if(front>rear) {
			for(int i=front;i<n;i++)
				cout<<setw(6)<<x[i];
			for(int i=0;i<=rear;i++)
				cout<<setw(6)<<x[i];
		}
		else
		{
			for(int i=front;i<=rear;i++)
				cout<<setw(6)<<x[i];
		}
	}
}

int main(){
	int x[10],front, rear,choice,value;
	front=rear = -1;
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
					delete_element(x,10,front,rear);
					break;
			case 3:
					display(x,10,front,rear);
					break;
			case 4:
					break;
			default:
					cout<<"\nWrong Choice....Try again";
		}
	}while(choice!=4);
	return 0;
}
