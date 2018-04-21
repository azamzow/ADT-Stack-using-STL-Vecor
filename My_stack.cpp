/*My_stack.cpp
Avery Zamzow
Header file for a vector stack data structure.
*/

#include <iostream>
#include <cstdlib>
#include <stack>
#include "My_stack.h"


using namespace std;

My_stack::My_stack() {				//constructor

}

int My_stack::top(){				//return the top element
	return myVector.back();
}

bool My_stack::empty(){				// if vec is empty
	return myVector.empty();
}

void My_stack::pop(){				//pop off top
	myVector.pop_back();
}

void My_stack::push(int s){			//push on top
	myVector.push_back(s);
}

int My_stack::printspan1(int a[], int size){
	for (int i = 0; i < size; i++){
		cout << a[i] << " ";
	}
}

int My_stack::span1(vector<int> a, int size, int S[]) {
	
    S[0] = 1;						// Span value of first day is always 1
 
    for (int i = 1; i < size; i++)	{		// Calculate span value linearly checking
       S[i] = 1; 					// Initialize span value
 
       for (int j = i-1; (j>=0)&&(a[i]>=a[j]); j--)	// Traverse left while the next element on left is smaller than a[i]
           S[i]++;
    }
}

int My_stack::printspan2(int a[], int size){
	for (int i = 0; i < size; i++){
		cout << a[i] << " ";
	}
}

int My_stack::span2(vector<int> a, int size, int S[]) {

    stack<int> st;				 // Create a stack and push index of first element to it
    st.push(0);
 
    S[0] = 1;						// Span value of first element is always 1
 
    for (int i = 1; i < size; i++){		//rest of values
       while (!st.empty() && a[st.top()] <= a[i]){ 		//Pop elements from stack while stack is not empty, and stack is smaller than a[i]
          st.pop();
	  }
       S[i] = (st.empty())? (i + 1) : (i - st.top());	//If stack becomes empty, then a[i] is greater than all elements on left of it is greater than elements after top of stack
 
       st.push(i);					// push element to stack
    }
}