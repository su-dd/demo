#include <iostream>
#include <cstring>
using namespace std;

enum Weekday
{
	Mon = 1,
	Tues = 2,
	Wed = 1 + Tues,
	Thur = 2 + 2,
	Fri = 5,
	Sat = 6,
	Sun
};

class Cat
{
public:
	void eat(Weekday day)
	{
		switch (day)
		{
		case Mon:
			cout << "This is Mon， I want fish;" << endl;
			break;
		case Tues:
			cout << "This is Tues， I want fish;" << endl;
			break;
		case Wed:
			cout << "This is Wed， I want fish;" << endl;
			break;
		case Thur:
			cout << "This is Thur， I want fish;" << endl;
			break;
		case Fri:
			cout << "This is Fri， I want fish;" << endl;
			break;
		default:
			cout << "I want fish, everyday!" << endl;
			break;
		}
	}
};

int main(int argc, char *argv[])
{
	Cat oCat;
	oCat.eat(Mon);

	oCat.eat(Weekday::Tues);

	Weekday oDay1 = Wed;
	oCat.eat(oDay1);

	Weekday &oDay2 = oDay1;
	oDay2 = Thur;
	oCat.eat(oDay2);

	return 0;
}
