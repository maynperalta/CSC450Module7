#include <iostream>
#include <thread>
// Method for thread one to count up from 0 to 20
void countUp() {
	std::cout << "Thread one: Counting up... " << std::endl;
	
	for (int i = 0; i <= 20; i++) {
		std::cout << "Count up: " << i << std::endl;
	}
	std::cout << "Thread one: Counting complete." << std::endl;
}
// Method for thread two to count down from 20 to 0
void countDown() {
	std::cout << "Thread two: Counting down... " << std::endl;
	
	for (int i = 20; i >= 0; i--) {
		std::cout << "Count down: " << i << std::endl;
	}
	std::cout << "Thread two: Counting complete." << std::endl;
}
// Main program
int main() {
	std::cout << "Starting program." << std::endl;
// Create first thread
	std::thread threadOne(countUp);
// Wait for first thread to finish
	threadOne.join();
// Create second thread after first thread has finished
	std::thread threadTwo(countDown);
// Wait for second thread to finish
	threadTwo.join();
	std::cout << "Both threads finished." << std::endl;
	return 0;
}