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
	student s[5];
	int i;
	for(i=0;i<5;i++)
		{
		cout<<"\n Enter roll no :";
		cin>>s[i].roll;
		cout<<"\n Enter name :";
		fflush(stdin);
		cin.getline(s[i].name,30);
		cout<<"\n Enter marks obtained in first subject (100) :";
		cin>>s[i].marks[0];
		
		cout<<"\n Enter marks obtained in Second subject (100) :";
		cin>>s[i].marks[1];
		
		cout<<"\n Enter marks obtained in Third Subject (100) :";
		cin>>s[i].marks[2];
      }
	//processing area
	for(i=0;i<5;i++)
	{
	
		s[i].total = s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
		
		float per = s[i].total/3;
		
		if(per>=90)
		    s[i].grade = 'A';
		if(per<90 && per>=80)
			s[i].grade='B';
		if(per<80)
			s[i].grade ='C';
	}
		
//	// output phase
	for(i=0;i<5;i++){
	
	cout<<"\n Roll No :"<<s[i].roll;
	cout<<"\n Name    :"<<s[i].name;
	cout<<"\n Grade   :"<<s[i].grade;
	cout<<endl;
	}
	return 0;
}
