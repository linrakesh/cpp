#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
	student(){
		cout<<"\n I am constructor"		;
		}
	~student(){
		cout<<"\n Inside destrctor";
	}
};

int main(){
	
	student s;
	 {
	 	student s1;
	 }
	 student s2;
	return 0;
}
