#include "Song.h"

int main()
{
	Song object1, object2, object3;
	cin >> object1 >> object2 >> object3;

	cout << object1 << object2 << object3;
	if (object1 == object2)
		cout << "These objects are the same";
	else
		cout << "These objects aren`t the same";

}