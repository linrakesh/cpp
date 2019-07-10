#include<iostream>
#include<iomanip>
using namespace std;

void input(int x[], int n){
	for(int i=0;i<n;i++)
		{
			cout<<"Enter "<<i<<" element :";
			cin>>x[i];
		}
	return;
}

void output(int x[], int n){
	for(int i=0;i<n;i++)
		cout<<setw(6)<<x[i];
	return;
}

void delete_element(int x[], int &m, int pos)
 {
 	if(m<=0){
 		cout<<"Array Empty. Can't' DELETE element";
	 }
	else
	{
		for(int i=pos-1;i<m;i++)
			x[i]= x[i+1];
		
		m = m-1;
	}
	return;
 }
 
 int main(){
 	int x[1000],m, pos;
 	//input phase
 	cout<<"Enter size of filled position :";
 	cin>>m;
 	input(x,m);
 	
 	cout<<"\n Enter position that you want to delete :";
 	cin>>pos;
 	
 	//processing phase
 	delete_element(x,m,pos);
 	
 	//output
 	cout<<"\n\nArray after insertion \n";
 	output(x,m);
 	
 }
