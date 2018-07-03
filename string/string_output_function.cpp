#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string[100];
	int i;
	cin.getline(string,100);
	
	int n =	strlen(string);
	
	cout<<"\n Size of string :"<<n<<endl;
	
	for(i=1;i<=n;i++)
	 {  cout.write(string,i);
	   cout<<endl;   
     }
     for(i=i-1;i>=1;i--)
	 {  cout.write(string,i);
	   cout<<endl;   
     }
	return 0;
}
