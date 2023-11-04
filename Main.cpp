#include "Song.h"
#include "Audiobook.h"
#include <map>
#include <vector>
#include <algorithm> 
#include <list>
using namespace std;
int menu()
{
	int choice;

	cout << "\n\t\t\t1.Add a song" << endl;
	cout << "\t\t\t2.Add a Audiobook" << endl;
	cout << "Your choice: ";
	cin >> choice;

	return choice;
}
int main()
{
		list<int> numbers1(10);
		int num;
		cout << "\t\t\tList one\n";
		auto it = numbers1.begin();;
		while (it != numbers1.end())
		{
			*it = ( rand() % 21)*2;
			cout << *it << " ";
			++it;
		}

		cout << "\n\t\t\tList two\n";
		list<int> numbers2(10);
		auto it1 = numbers2.begin();
		while (it1 != numbers2.end())
		{
			*it1 = (rand() % 21) * 2+1;
			cout << *it1 << " ";
			++it1;
		}
		cout << endl;
	
	numbers1.sort();
	numbers2.sort();

	cout << "\n\t\t\tList tree\n";
	list<int> numbers3;
	numbers3.merge(numbers1);
	numbers3.merge(numbers2);
	for (auto it2= numbers3.begin(); it2!= numbers3.end(); ++it2 )
		cout << *it2 << " ";

	map<int, BaseSound*> mapSound;
	int choice = 1;
	int choice_1 = 1;
	vector<BaseSound*> ptrBase;
	int index = 0;
	while (choice_1!=0)
	{
		cout << "\n\n\t\t\t1 add values to map;\n\t\t\t2 display information by specified id\n\t\t\tExit 0\nYour choice:";
		cin >> choice_1;
		switch (choice_1) {
		case 1:
			choice = menu();
			switch (choice)
			{
			case 1:
				ptrBase.push_back(new Song());
				cin >> *(Song*)ptrBase[index];
				mapSound[ptrBase[index]->getId()] = ptrBase[index];
				index++;
				break;
			case 2:
				ptrBase.push_back(new Audiobook());
				cin >> *(Audiobook*)ptrBase[index];
				mapSound[ptrBase[index]->getId()] = ptrBase[index];
				index++;
				break;
			default:
				cout << "There is no such choice\n";
				break;
			}
			break;
		case 2:
			int id;
			cout << "Enter object id: ";
			cin >> id;
			if (mapSound.find(id) != mapSound.end()) 
				mapSound[id]->ShowDate();
			else 
				cout << "There`s no object with id " << id << endl;
			break;
		case 0:cout << "\t\t\tThe end\n"; break;
		}
	}
}
	

//vector<int> numbers1(10);
//
//int num;
//cout << "\t\t\tVector one\n";
//for (int i = 0; i < numbers1.size(); i++)
//{
//	num = rand() % 21;
//	if (num % 2 == 0 && num != 0)
//	{
//		numbers1[i] = num;
//		cout << numbers1[i] << " ";
//	}
//	else
//		--i;
//}
//
//cout << "\n\t\t\tVector two\n";
//vector<int> numbers2(10);
//vector<int>::iterator it = numbers2.begin();
//
//while (it != numbers2.end())
//{
//	num = rand() % 21;
//	if (num % 2 > 0)
//	{
//		*it = num;
//		cout << *it << " ";
//		++it;
//	}
//}
//cout << endl;
//
//sort(numbers1.begin(), numbers1.end());
//sort(numbers2.begin(), numbers2.end());
//
//cout << "\n\t\t\tVector tree\n";
//vector<int> numbers3(numbers1.size() + numbers2.size());
//merge(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers2.end(), numbers3.begin());
//
//for (int i = 0; i < numbers3.size(); i++)
//	cout << numbers3[i] << " ";
//
//vector<BaseSound*> soundVector;
//
//int choice = 1;
//int index = 0;
//while (choice != 0)
//{
//	choice = menu();
//	switch (choice)
//	{
//	case 0:
//		cout << "\t\t\tTHE END\n";
//		break;
//	case 1:
//		soundVector.push_back(new Song());
//		cin >> *(Song*)soundVector[index];
//		index++;
//		break;
//	case 2:
//		soundVector.push_back(new Audiobook());
//		cin >> *(Audiobook*)soundVector[index];
//		index++;
//		break;
//	default:
//		cout << "There is no such choice\n";
//		break;
//	}
//}
//cout << endl;
//cout << "\n\n\t\t\tSound vector\n\n";
//for (int i = 0; i < soundVector.size(); i++)
//	soundVector[i]->ShowDate();
//
//
//
//vector <BaseSound*> sound1(soundVector);
//for (int i = 0; i < soundVector.size(); i++) {
//	if (dynamic_cast<Song*>(sound1[i]) == nullptr)
//	{
//		soundVector.erase(soundVector.begin() + i);
//		i--;
//	}
//}
//
//for (int i = 0; i < sound1.size(); i++) {
//	if (dynamic_cast<Audiobook*>(sound1[i]) == nullptr)
//	{
//		sound1.erase(sound1.begin() + i);
//		i--;
//	}
//
//}
//cout << "\n\n\t\t\tSong vector\n";
//for (int i = 0; i < soundVector.size(); i++)
//	soundVector[i]->ShowDate();
//cout << "\n\n\t\t\tAudiobook vector\n";
//for (int i = 0; i < sound1.size(); i++)
//	sound1[i]->ShowDate();
	




	/*
	pratical work 6
}Vector<int> obg1;
	int b=0;
	int size = obg1.getCapacity() + 3;
	cout << "\t\t\tFiling an integer vector\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter integer: ";
		cin >> b;
		obg1.push_back(b);
	}
	Vector<double> obg2;
	double d = 0;
	size = obg2.getCapacity();
	cout << "\n\t\t\tFiling an decimal vector\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter decimal: ";
		cin >> d;
		obg2.push_back(d);
	}
	Vector<char> obg3;
	char ch = '\0';
	size = 5;
	cout << "\n\t\t\tFiling an character vector\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter character: ";
		cin >> ch;
		obg3.push_back(ch);
	}
	cout << "\n\t\t\tInteger vector\n";
	for (int i = 0; i < obg1.getSize(); i++)
		cout << obg1[i]<<" ";
	cout << "\nDelete an element in integer vector\n";
	obg1.pop_back();
	cout << "\n\t\t\tInteger vector\n";
	for (int i = 0; i < obg1.getSize(); i++)
		cout << obg1[i] << " ";
	cout << "\n\t\t\tDecimal vector\n";
	for (int i = 0; i < obg2.getSize(); i++)
		cout << obg2[i] << " ";
	cout << "\n\t\t\tCharacter vector\n";
	for (int i = 0; i < obg3.getSize(); i++)
		cout << obg3[i];
	cout << endl;

	Song song1("Arabella", "Artic Monkey", "AC","ROCK","Artic Monkey","engl",2013,3.38);
	Song song2("Wake up", "Kowloon", "single", "indi", "Kowloon", "engl", 2020, 4.00);
	Song song3("Little Dark Age", "MGMT", "Little Dark Age", "synth-pop", "MGMT", "engl", 2018, 5.00);
	Vector<Song*> vSong;
	vSong.push_back(&song1);
	vSong.push_back(&song2);
	vSong.push_back(&song3);
	cout << "\n\t\t\tSong vector\n";
	for (int i = 0; i < vSong.getSize(); i++)
		cout << *vSong[i] << endl;

	Audiobook book1("The Outsider","Stephan King","Hodder",2020,1140,98.50,".mp3");
	Audiobook book2("Blood on snow", "Jo Nesbo", "World Map", 2014, 320, 49.99, ".mp3");
	Vector<Audiobook*> vAudiobook;
	vAudiobook.push_back(&book1);
	vAudiobook.push_back(&book2);
	cout << "\n\t\t\tAudiobook vector\n";
	for (int i = 0; i < vAudiobook.getSize(); i++)
		cout << *vAudiobook[i] << endl;*/
/*
parctical work 5
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
		arrSound[i]->play();*/