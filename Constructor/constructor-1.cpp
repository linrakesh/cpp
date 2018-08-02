#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll;
		char name[30];
		
	public:
		student(int x, char y[])    // parameterized constructor function
		{
		  roll= x;
		  strcpy(name,y)	;
		}
		void show_data(){
		    cout<<"\n Roll no :"<<roll;
    		cout<<"\n Name    :"<<name;
		}
};

int main(){
	//student s;     // constructor function runs at the time of object creation
	
	student s(10,"Manan");   // implicit call
	
	student s1 = student(20,"Ramji");   // explicit call
	s.show_data();
	s1.show_data();
	return 0;
}
