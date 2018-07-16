#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char name[5][30]={
		"rakesh",
		"amitABCD","sumitRSTV",
		"anujIKLH",
		"UditPPPSSah"
	
	};
	
	for(int i=0;i<5;i++)
	   cout<<name[i][4]<<endl;
	return 0;
}

