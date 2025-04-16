#include <iostream>
#include <string>
#include <chrono>
#include <typeinfo>

using namespace std::chrono;

int countWords(std::string str) {
	int words = 0;
	int strLen = str.size();
	for (int i=0; i < strLen; i++) {
		if (str[i] == ' ') {
			words++;
		}
	}
	words += 1;
	return words;
}

int main() {
	std::cout << "Would you like to play? (y/n): ";
	std::string ans;
	getline(std::cin, ans);
	while (ans == "y") {
		auto start = system_clock::now();
		std::string userString = "";
		std::cout << "Type shit: ";
		getline (std::cin, userString);
		int numWords = countWords(userString);
		std::cout << "Number of words: " << numWords << "\n";
		auto end = system_clock::now();

		int duration_sec = duration_cast<seconds>(end - start).count();
		std::cout << "Elapsed time (sec): " << duration_sec << "\n";


		std::cout << "\nWould you like to play again? (y/n): ";
		getline(std::cin, ans);
	}

	
	std::cout << "Goodbye!" << std::endl;
	return 0;
}

//agh
