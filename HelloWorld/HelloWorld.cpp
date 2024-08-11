#include <iostream>
#include <thread>
using namespace std::this_thread;
using namespace std;

void printStringArray(int arr[], int size) {
	string* stringArray = new string[size];
	for (int i = 0; i < size; i++) {
		int asciiDefault = 32;
		do {
			stringArray[i] = (char)asciiDefault;
			for (int j = 0; j <= i; j++) {
				cout << stringArray[j];
			}
			asciiDefault++;
			cout << endl;
			sleep_for(10ms);
		} while (asciiDefault - 1 != arr[i] && asciiDefault - 1 < 127);
	}
}

int* stringToIntArray(string str) {
	int len = str.length();
	int* returnArray = new int[len];
	for (int i = 0; i < len; i++) {
		returnArray[i] = (int)str[i];
	}
	return returnArray;
}

int main()
{
	//The string that you want to print out
	string printoutStr = "Hello World!";
	//Convert to ascii code array
	int* helloworld = stringToIntArray(printoutStr);
	printStringArray(helloworld, printoutStr.length());
	return 0;
}

