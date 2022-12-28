#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{
	// switch demo 1
	int a = 2;
	switch (a)
	{
	case 1:
		cout << "case 1" << endl;
		break;
	case 1 + 1 :
		cout << "case 2" << endl;
		break;
	default:
		cout << "case default" << endl;
		break;
	}


	// switch demo 2
	switch (1 + 1)
	{
	case 1+0:
		cout << "case 1" << endl;
	case 2:
		cout << "case 2" << endl;
	default:
		cout << "case default" << endl;
		break;
	}
}


