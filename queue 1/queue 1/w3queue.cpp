// C++ code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>


#include <queue>

using namespace std;

// Function to display the elements of the queue
void showq(queue<int> gq)
{
	// Create a local copy of the queue 'gq' to avoid modifying the original queue
	queue<int> g = gq;

	// Loop until the queue is empty
	while (!g.empty()) {
		// Print the front element of the queue
		cout << '\t' << g.front();

		// Remove the front element from the queue
		g.pop();
	}
	cout << '\n';
}

// Driver Code
int main()
{
	// Declare a queue of integers named 'gquiz'
	queue<int> gquiz;

	// Add elements to the queue
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	// Display the original queue
	cout << "The queue gquiz is : ";
	showq(gquiz);

	// Display the size of the queue
	cout << "\ngquiz.size() : " << gquiz.size();

	// Display the front element of the queue
	cout << "\ngquiz.front() : " << gquiz.front();

	// Display the back element of the queue
	cout << "\ngquiz.back() : " << gquiz.back();

	// Remove an element from the front of the queue
	cout << "\ngquiz.pop() : ";
	gquiz.pop();

	// Display the modified queue
	showq(gquiz);

	// Return 0 to indicate successful execution of the program
	return 0;
}
