#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream fin("sarthak.txt");
	ofstream fout("dup.txt");
	char ch;
	while(fin.get(ch)){
		fout<<ch;
	}
	fin.close();
	fout.close();
	return 0;
}
