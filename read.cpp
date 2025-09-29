#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ifstream inputFile("data.csv");
	if(!inputFile){
		cerr << "Error: Could not open file."<< endl;
		return 1;
	}

	string line;

	while(getline(inputFile,line)){
		stringstream ss(line);
			string temp;
		int num1, num2;
		string word;

		getline(ss, temp, ',');
		stringstream(temp) >> num1;

		getline(ss, temp, ',');
		stringstream(temp) >> num2;

		getline(ss, word, ','); // This line extracts the word

		int total = num1 + num2;

		for (int i = 0; i < total; i++) {
   			 cout << word << " ";
}
    		cout << endl;

	}
	inputFile.close();
	return 0;
}
