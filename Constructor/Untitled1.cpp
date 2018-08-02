#include<iostream>
using namespace std;
class area_circle{
		int r,area;
	public:
		void read_data(){
			cin>>r;
		}
		
		void publish_data()
		{
			cout<<area;
		}
};


class volume:public area_circle
{
	int x;
	public:
		void get_data(){
		}
		void show_data(){
			
		}
};

int main(){
	volume B;
	B.get_data();
	B.show_data();
	B.read_data();
	B.publish_data();
	return 0;
}
