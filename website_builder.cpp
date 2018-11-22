#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
	char title[160];
	char heading[180];
	char intro[6000];
	char image[1000];
	
	cout<<"\n\n\n\t\t\t\t WebSIte Builder \n";
	cout<<"\n Website Title :";
	fflush(stdin);
	cin.getline(title,160);
	cout<<"\n Website Heading :";
	fflush(stdin);
	cin.getline(heading,180);
	cout<<"\n Website Introductory Text :";
	fflush(stdin);
	cin.getline(intro,6000);
	cout<<"\n Image Path:";
	fflush(stdin);
	cin.getline(image,1000);
	
	ofstream fout;
	fout.open("index.html");
	fout<<"<html>";
	fout<<"<head>";
	fout<<"<title>"<<title<<"</title>";
	fout<<"</head>";
	fout<<"<body>";
	fout<<"<h1>"<<heading<<"</h1>";
	fout<<"<img src='"<<image<<"'>";
	fout<<"<p>"<<intro<<"</p>";
	fout<<"</body>";
	fout<<"</html>";
	fout.close();
	cout<<"\n Please check your folder ....";
	return 0;
}
