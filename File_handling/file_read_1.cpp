#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream object;
	char name[300];
	object.open("demo.txt");
	object>>name;   // read one word at a time
	cout<<"\n Entered Name :"<<name;
	object.close();
	return 0;
}
