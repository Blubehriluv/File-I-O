#include <iostream>
#include <string>
#include <fstream>

using namespace std;
string fullText;

void frWrite()
{
	
}

/*
//File parsing method
void frParse()
{
	if (fullText != "")
	{
		int counter = -0;
		do {

			
		} while (counter < fullText.length);
	}	
}*/

//File reading method
void frRead()
{
	ifstream referenceFile;
	referenceFile.open("CPP_Reference.txt");

	cout << "Reading the file..." << endl;
	referenceFile >> fullText;
	system("Pause");
	
	referenceFile.close();
	cout << "The file is closed" << endl;

	system("Pause");
	//frParse();
}

//File creation method
void frCreate()
{
	//Ofstream is used to create 'newFile', a new file to store data
	ofstream newFile("Organized_Info.txt");
	newFile.close();
	
	frRead();
}

void Introduction()
{
	cout << "FileReader startup initiated..." << endl;
	cout << endl;
	system("Pause");
	cout << "We will now be reading the C++ Reference file." << endl;

	frCreate();
}

int main()
{
	Introduction();
}

