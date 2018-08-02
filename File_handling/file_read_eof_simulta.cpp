// file read char wise + EOF function


#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream object;
	char ch;
	object.open("file_read_eof.cpp");
	
	while( object.get(ch))  // checking end of file using file object
	    cout<<ch;
	   
	
	object.close();
	return 0;
}
