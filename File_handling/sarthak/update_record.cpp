#include<fstream>
#include<iostream>
using namespace std;
struct student{
	int admno;
	char name[30];
	char add[80];
	float fees;
};

int main(){
	
	ifstream fin("student.dat");
	ofstream fout("temp.dat");
	
	student s;
	int tadmno;
	
	cout<<"\n Enter Admno no that you want to update ";
	cin>>tadmno;
	
	while(fin.read((char *)&s,sizeof(student))){
		if(s.admno==tadmno){
			cout<<"\n Enter new address :";
			cin>>s.add;
			cout<<"\n Enter new fees :";
			cin>>s.fees;
		} 
		fout.write((char *)&s,sizeof(student));
	}	
	fin.close();
	fout.close();
	
	remove("student.dat");
	rename("temp.dat","student.dat");
	
	return 0;
}
