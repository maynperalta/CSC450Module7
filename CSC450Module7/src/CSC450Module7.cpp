#include <iostream>
#include <thread>

void countUp() {
	std::cout << "Thread 1: Counting up... " << std::endl;
	
	for (int i = 1; i <= 20; i++) {
		std::cout << "Count up: " << i << std::endl;
	}
	
	std::cout << "Thread 1: Counting complete." << std::endl;
}

int main() {
	std::cout << "Starting program." << std::endl;
	std::thread threadOne(countUp);
	return 0;
}
