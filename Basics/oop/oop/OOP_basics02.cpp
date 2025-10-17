#include <iostream>
using namespace std;
class Student {
private:
	string name;
public:
	Student(string studentName)
	{
		name = studentName;
	}
	void introduce()
	{
		cout << "Hello, my name is " << name<< endl;
	}

};
int main()
{
	Student ss("Hana");
	ss.introduce();
	return 0;
}