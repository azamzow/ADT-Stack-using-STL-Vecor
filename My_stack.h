/*My_stack.h
Avery Zamzow
Header file for a vector stack data structure.
*/

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


class My_stack {
	
public:
	My_stack();				//constructor
	bool empty();			//is stack empty?
	int top();				//Return top element
	void pop();				//Remove top element
	void push(int s);		//push 'e' on top
	int printspan1(int a[], int size);
	int span1(vector<int> a, int size, int S[]);			// span 1
	int printspan2(int a[], int size);
	int span2(vector<int> a, int size, int S[]);			// span 2 
	
private:
	vector<int> myVector;
};