#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream object;
	object.open("sameer.txt");  // member function of ofstream class
	object<<"hello world";
	object.close();  //member function of ofstream class
	return 0;
	
}
