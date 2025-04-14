#include <iostream>
#include <string>
#include <chrono>
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
		= countWords(userString);
		std::cout << "Number of words: " << wordcount << "\n";

		auto end = system_clock::now();

		<double> = duration_cast<seconds>(end - start);
		std::cout << "Time: " << dur.count() << "s\n";

		int wpm = dur/(wordcount*60);
		std::cout << "WPM: " << wpm;

		std::cout << "\nWould you like to play again? (y/n): ";
		getline(std::cin, ans);
	}

	
	std::cout << "Goodbye!" << std::endl;
	return 0;
}

//agh
