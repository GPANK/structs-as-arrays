#include <iostream>
using namespace std;

struct objects {
	int count;
	string description;
	double value;
};

int main()
{
	objects list[2];
	
	list[0].count = 1;
	list[0].description = "ABC";
	list[0].value = 11.99;
	
	list[1].count = 2;
	list[1].description = "DEF";
	list[1].value = 99.11;
	
	for(int i = 0; i < 2; i++)
	{
		cout << list[i].count << " " << list[i].description << " " << list[i].value << endl;
	}
	return 0;
}
