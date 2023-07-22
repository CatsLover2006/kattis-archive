// Solving Kattis Above Average
// Solved by Chance Parsons aka Hanabi

#include <iostream>
#include <vector>

int cases, ppl, grade;
double passed;
double avg;
std::vector<int> grades;

int main() {
	std::cin >> cases;
	while (cases--) {
		std::cin >> ppl;
		avg = 0;
		while (ppl--) {
			std::cin >> grade;
			avg += grade;
			grades.push_back(grade);
		}
		avg /= grades.size();
		passed = 0;
		for (int student : grades) {
			if (avg < student) passed++;
		}
		passed /= grades.size();
		passed *= 100;
		printf("%1.3lf", passed);
		std::cout << "%" << std::endl;
		grades.clear();
	}
}