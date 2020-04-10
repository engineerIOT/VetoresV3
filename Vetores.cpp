/*
 * main.cpp
 *
 *  Created on: April 10, 2020
 *      Author: Elvis Fernandes
 */

#include <iostream>     // std::cout
#include <algorithm>    // std::generate
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <string>
#include <sstream>
#include <iterator>

using std::string;
using std::istringstream;
using std::cout;
using std::cin;

int main() {
	std::vector<int> myvector;
	string buf;
	int input;

	cout << "Enter the elements of the array: \n";
	getline(cin, buf);
	istringstream ssin(buf);

	while (ssin >> input) {
		myvector.push_back(input);
	}

	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end();
			++it) {
		std::cout << ' ' << *it;
	}
	std::cout << '\n';

	std::make_heap(myvector.begin(), myvector.end());
	//std::cout << "initial max heap   : " << myvector.front() << '\n';

	std::sort_heap(myvector.begin(), myvector.end());
	std::cout << "final sorted range :";
	for (unsigned i = 0; i < myvector.size(); i++)
		std::cout << ' ' << myvector[i];

	//Find the min element
	std::cout << "\nMin Element before = "
			<< *min_element(myvector.begin(), myvector.end());

	// Find the min element
	std::cout << "\nMax Element = "
			<< *max_element(myvector.begin(), myvector.end()) << '\n';

	return 0;
}
