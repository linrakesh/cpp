// program to copy file contetns into another file

#include<fstream>
using namespace std;
int main(){
	ofstream fout("copied.txt");  // opening  file using file constructor
	ifstream fin("demo.txt");
	
	char ch;
	while(fin.get(ch))
	     fout<<ch;
	     
	fin.close();
	fout.close();
	
	return 0;
}
