#include <iostream>
using namespace std;
class Car
{
public:
	string honk()
	{
		cout << "Beep!" << endl;
	}
};




int main()
{
	Car myCar;
	myCar.honk();
	return 0;
}

