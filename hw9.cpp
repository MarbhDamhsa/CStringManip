#include <iostream>
#include <cstring>

using namespace std;

char sent[2000];

void numPrint()
{
	for(int i=0 ; sent[i] != '\0'; i++){
		if(isdigit(sent[i]))
		{
			cout << sent[i];
		}
	}
}//numPrint

int main()
{
	
	cout << "Please enter a sentence: ";
	
	cin >> sent;
	cout << endl;
	numPrint();

	cin.ignore();
	cin.get();


	return 0;
}