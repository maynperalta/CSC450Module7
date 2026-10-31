#include <iostream>
#include <thread>

void countUp() {
	std::cout << "Thread 1: Counting up... " << std::endl;
	
	for (int i = 1; i <= 20; i++) {
		std::cout << "Count up: " << i << std::endl;
	}
	
	std::cout << "Thread 1: Counting complete." << std::endl;
}
void countDown() {
	std::cout << "Thread 2: Counting down... " << std::endl;
	
	for (int i = 20; i >= 0; i--) {
		std::cout << "Count down: " << i << std::endl;
	}
	std::cout << "Thread 2: Counting complete." << std::endl;
}
int main() {
	std::cout << "Starting program." << std::endl;
	std::thread threadOne(countUp);
	std::thread threadTwo(countDown);
	return 0;
}
