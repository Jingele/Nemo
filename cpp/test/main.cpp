#include <fstream>
#include <iostream>

using namespace std;

void pri()
{
	cout<<"ri"<<endl;
}
class A{
	public:
	A()
	{
		pri();
	}
};

int main()
{
	A a;

	ofstream out("out.txt");
	if(out.is_open())
	{
		out<<"This is a line"<<endl;
		out<<"This another line."<<endl;
		out.close();
	}
	return 0;
}
