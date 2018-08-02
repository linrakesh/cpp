#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll;
		char name[30];
		
	public:
		
		student(){
			roll=20;
			strcpy(name,"Rakesh");
		}
		
		student(int x, char y[])    // parameterized constructor with default values
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
	student s(40,"rajesh mandal");
	s.show_data();
	return 0;
}
