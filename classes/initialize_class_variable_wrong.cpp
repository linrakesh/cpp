#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll;
		char name[30];
		
	public:
		student()    // constructor function
		{
		  roll= 10;
		  strcpy(name,"manan")	;
		}
		void show_data(){
		    cout<<"\n Roll no :"<<roll;
    		cout<<"\n Name    :"<<name;
		}
};


int main(){
	student s;     // constructor function runs at the time of object creation
	s.show_data();
	return 0;
}
