#include<iostream>
#include<iomanip>
using namespace std;

void push(int x[],int n, int &m, int value){
	if(m>=n){
		cout<<"\n Stack full. Can not Push another element";
	}
	else{
		x[m]=value;
		m= m+1;
	}
}

void pop(int x[], int &m){
	if(m<=0){
		cout<<"\n Stack Empty.Can not Pop element";
	}
	else
	{
		cout<<"Popped Value :"<<x[m-1];
		m= m-1;
		
	}
}

void display(int x[],int m){
	if(m<=0){
		cout<<"\n Stack Empty";
	}
	else{
		for(int i=0;i<m;i++)
			cout<<setw(6)<<x[i];
	}
}

int main(){
	int x[10],m,choice,value;
	m=0;
	do{
		cout<<"\n\n STACK MENU";
		cout<<"\n1.	Push";
		cout<<"\n2.	Pop";
		cout<<"\n3.	Display";
		cout<<"\n4.	Exit";
		cout<<"\n\n	Enter your choice (1..4):";
		cin>>choice;
		switch(choice){
			case 1:
					cout<<"\n Enter value :";
					cin>>value;
					push(x,10,m,value);
					break;
			case 2:
					pop(x,m);
					break;
			case 3:
					display(x,m);
					break;
			case 4:
					break;
			default:
					cout<<"\nWrong Choice....Try again";
		}
	}while(choice!=4);
	return 0;
}
