#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream obj(str);
	vector<int> temp;
	char ch;
	int commaSize = 0;
	int parseInt = 0;

	//How many Comma's in a string
	for (size_t i = 0; i < str.size(); ++i) {
		if (str[i] == ',') {
			commaSize++;
		}
	}
	++commaSize;
	for (int i = 1; i <= commaSize; ++i) {
		obj >> parseInt >> ch;

		temp.push_back(parseInt);
	}

	return temp;

}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (size_t i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}