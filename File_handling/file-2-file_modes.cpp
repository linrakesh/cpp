#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream object;
	object.open("sameer.txt",ios::app);  // file modes
	object<<"hello world";
	object.close();  //member function of ofstream class
	return 0;
	
}
