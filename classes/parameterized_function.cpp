#include<iostream>
#include<string.h>
using namespace std;

class student{
	private:
		int roll;
		char name[30];
		
	public:
		void get_data(int x, char y[]);    // function prototype
		void show_data(){
		     // do not mention any object here
			cout<<"\n Roll no :"<<roll;
			cout<<"\n Name    :"<<name;
		}
};
// define member function outside

void student::get_data(int x, char y[]){
	roll = x;
	strcpy(name,y);
} 

int main(){
	student s;
	char str[30]="manan";
	
	s.get_data(20,str);
	
	s.show_data();
	return 0;
}
