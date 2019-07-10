// program to search an element from a list of elements using linear search method
// Developed by			: rakesh kumar


#include<iostream>
using namespace std;
int linear_search(int x[],int n, int data)
{
	int found =0;
	for(int i=0;i<n;i++)
	   if(x[i]==data)
	   			found =1;
	
	return found;
}
int main(){
	int x[10],i,data,result;
	//input phase 
	for(i=0;i<10;i++)
	{
		cout<<"Enter x["<<i+1<<"] Element : ";
		cin>>x[i];
	}
	cout<<"\n Enter element that you want to search :";
	cin>>data;
	//processing phase
	result = linear_search(x,10,data);
	//output phase
	if(result ==0)
		cout<<"Element does not exists";
	else
		cout<<"Element exist in this array";
	
	return 0;
}
