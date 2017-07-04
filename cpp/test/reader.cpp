#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(void)
{
	char buf[256];
	ifstream in("out.txt");
	if(!in.is_open())
	{
		cout<<"Error opening file";
		exit(1);
	}
	while(!in.eof())
	{
		in.getline(buf,100);
		cout<<buf<<endl;
	}
	return 0;
}
