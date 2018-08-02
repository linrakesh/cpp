// file read and using EOF function


#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream object;
	char name[300];
	object.open("demo.txt");
	
	while(!object.eof())
	   {
	   	 object.getline(name,300);
	   	 cout<<name;
	   }
	
	object.close();
	return 0;
}
