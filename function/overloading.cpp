// function overloading 
#include<iostream>
using namespace std;
void area(void){		// function 1
	int b,h,ar;
	cout<<"\n Enter base :";
	cin>>b;
	cout<<"\n Enter height :";
	cin>>h;
	ar = 0.5*h*b;
	cout<<"\n Area of Triangle :"<<ar;
}

void area(int b){		// function 2
	int ar;
	ar = b*b;
	cout<<"\n Area of square :"<<ar;
}

void area(int b,int h){		// function 3
	int ar;
	ar = b*h;
	cout<<"\n Area of Rectangle :"<<ar;
}
void area(char ch)    //function 4
 {
 	cout<<ch;
 }
 void area(char ch, int n)  // function 5
 {
 }
 
void area(int n=10)			// function 6
{
	
}
int main(){
	area();  //calling of function 1
	area(10); // calling of function 2
	area(50,40);  // calling of function 3
	return 0;
}
