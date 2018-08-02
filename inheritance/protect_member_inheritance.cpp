#include<iostream>
using namespace std;
class area_circle{
	protected:
		int r,area;
		void calculate();
	public:
		void read_data(){
		   cin>>r;
		}
		void publish_data(){}
};

class volume:public area_circle   // using private
{
	int x;
	
	public:
		void get_data(){
		  cin>>r;
		}
		void show_data(){}
};

int main(){
	area_circle A;
	A.read_data();
	
	volume B;
	B.get_data();
	return 0;
}
