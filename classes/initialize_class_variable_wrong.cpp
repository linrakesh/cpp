#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll;
		char name[30];
		
	public:
		void show_data(){
		    cout<<"\n Roll no :"<<roll;
    		cout<<"\n Name    :"<<name;
		}
};


int main(){
	student s;
	s.show_data();
	return 0;
}
