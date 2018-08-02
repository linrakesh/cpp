#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream object;
	char name[300];
	object.open("demo.txt");
	object.getline(name,300);
	cout<<"\n Entered Value :"<<name;
	object.close();
	return 0;
}
