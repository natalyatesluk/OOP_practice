#include "Song.h"
#include "Audiobook.h"

int menu()
{
	int choice;

	cout << "\t\t\t1.Add a song" << endl;
	cout << "\t\t\t2.Add a Audiobook" << endl;
	cout << "Your choice: ";
	cin >> choice;

	return choice;
}
int main()
{
	const size_t size = 5;
	BaseSound* arrSound[size];

	int choice = 0;
	for (int i = 0; i < size; i++)
	{
		choice = menu();
		switch (choice) 
		{
		case 1:
			arrSound[i] = new Song;
			cin >> *(Song*)arrSound[i];
			break;
		case 2:
			arrSound[i] = new Audiobook;
			cin >> *(Audiobook*)arrSound[i];
			break;
		default:
			cout << "There is no such choice\n";
			i--;
			break;
		}
	}
	for (int i = 0; i < size; i++)
		arrSound[i]->ShowDate();

	cout << endl << endl;
	for (int i = 0; i < size; i++)
		arrSound[i]->play();
}