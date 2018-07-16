#include<iostream>
using namespace std;
struct student{
	int roll;       //10
	char name[30];  // anupam gulati 
	int marks[3];   // 90,78,56
	int total;
	char grade;     
};

int main(){
	student s;
	
	cout<<"\n Enter roll no :";
	cin>>s.roll;
	cout<<"\n Enter name :";
	fflush(stdin);
	cin.getline(s.name,30);
	cout<<"\n Enter marks obtained in first subject (100) :";
	cin>>s.marks[0];
	
	cout<<"\n Enter marks obtained in Second subject (100) :";
	cin>>s.marks[1];
	
	cout<<"\n Enter marks obtained in Third Subject (100) :";
	cin>>s.marks[2];
	
	//processing area
	s.total = s.marks[0]+s.marks[1]+s.marks[2];
	
	float per = s.total/3;
	
	if(per>=90)
	    s.grade = 'A';
	if(per<90 && per>=80)
		s.grade='B';
	if(per<80)
		s.grade ='C';
		
	// output phase
	
	cout<<"\n Roll No :"<<s.roll;
	cout<<"\n Name    :"<<s.name;
	cout<<"\n Grade   :"<<s.grade;
	
	return 0;
}
