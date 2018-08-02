#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ofstream handa;
	handa.open("demo.txt");
	handa<<"How to learn and then earn using C++";
	handa<<"\nThis is my second line of text";
	handa<<"\n This is third line having \t tab and another spacing chars";
	handa.close();
	return 0;
}
