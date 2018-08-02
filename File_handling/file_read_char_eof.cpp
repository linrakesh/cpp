// file read char wise + EOF function


#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream object;
	char ch;
	object.open("file_read_eof.cpp");
	
	while(!object.eof())
	   {
	   	 object.get(ch);
	   	 cout<<ch;
	   }
	
	object.close();
	return 0;
}
