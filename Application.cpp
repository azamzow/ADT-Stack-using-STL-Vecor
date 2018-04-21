/*Application.cpp
Avery Zamzow
Main file for a vector stack data structure.
*/

#include <iostream>
#include <cstdlib>
#include <stack>
#include "My_stack.h"

using namespace std;

int main(){
	
    My_stack myStack; //now, this is a stack stored in a vector.
	
	cout << "\nThe stack ";
	(myStack.empty()==true)? cout << " is " : cout << " it is not ";
	cout << " empty " << endl;

	cout << "Adding three numbers to the stack.." << endl;
	
	myStack.push(10);
	cout << myStack.top() << endl;
	myStack.push(8);
	cout << myStack.top() << endl;
	myStack.push(15);
	cout << myStack.top() << endl;
	
	cout << "\nPoping off: " << myStack.top() << endl;
	myStack.pop();

	cout << "The stack ";
	(myStack.empty()==true)? cout << " is " : cout << " it is not ";
	cout << " empty " << endl;

	cout << "Poping off: " << myStack.top() << endl;
	myStack.pop();
	
	cout << "The stack ";
	(myStack.empty()==true)? cout << " is " : cout << " it is not ";
	cout << " empty " << endl;
	
	cout << "Poping off: " << myStack.top() << endl;
	myStack.pop();

	cout << "The stack ";
	(myStack.empty()==true)? cout << " is " : cout << " it is not ";
	cout << " empty " << endl;
	
	
	//////////////////////////////////////////////////////////////////
	
	cout << "\n\nAlgorithm spans1: " << endl;
	
	/**** You can edit the vector elements and the size here******/
	int v[] = {6,3,4,5,2};						//input #1 vector
	int v2[] = {10,44,4,88,20};					//input #2 vector
	int v3[] = {6,7,8,9,10};					//input #3 vector
	
	/*** Here is how the span is calculated for each vector******/
	int n10 = sizeof(v)/sizeof(v[0]);			//get the size of the array
	vector<int> vec( v, v+n10);					//change into vector					
	int n = vec.size();							//calculate the size of vector
	int S[n];									//decalaring a size vector
	myStack.span1(vec, n, S);					//calculate span
	myStack.printspan1(S, n);					//print span
	cout << "\n " << endl;
	
	int n11 = sizeof(v2)/sizeof(v2[0]);			//get the size of the array
	vector<int> vec2( v2, v2+n11);				//change into vector
	int n2 = vec2.size();						//calculate the size of vector
	int S2[n2];									//decalaring a size vector
	myStack.span1(vec2, n2, S2);				//calculate span
	myStack.printspan1(S2, n2);					//print span
	cout << "\n " << endl;
	
	int n12 = sizeof(v3)/sizeof(v3[0]);			//get the size of the array
	vector<int> vec3( v3, v3+n12);				//change into vector
	int n3 = vec3.size();						//calculate the size of vector
	int S3[n3];									//decalaring a size vector
	myStack.span1(vec3, n3, S3);				//calculate span
	myStack.printspan1(S3, n3);					//print span
	cout << "\n " << endl;
	
	///////////////////////////////////////////////////////////////////
	cout << "\n\nAlgorithm spans2: " << endl;
	
	/**** You can edit the vector elements and the size here******/
	int v4[] = {6,3,4,5,2};						//input #1 vector
	int v5[] = {7,4,5,10,11,12,20};				//input #2 vector
	int v6[] = {3,6,7,2,11,1};					//input #3 vector
	
	/*** Here is how the span is calculated for each vector******/
	int n7 = sizeof(v4)/sizeof(v4[0]);			//get the size of the array
	vector<int> vec4( v4, v4+n7);				//change into vector
	int n4 = vec4.size();						//calculate the size of vector
	int S4[n4];									//decalaring a size vector
	myStack.span2(vec4, n4, S4);				//calculate span
	myStack.printspan2(S4, n4);					//print span
	cout << " \n " << endl;
	
	int n8 = sizeof(v5)/sizeof(v5[0]);			//get the size of the array
	vector<int> vec5( v5, v5+n8);				//change into vector
	int n5 = vec5.size();						//calculate the size of vector
	int S5[n5];									//decalaring a size vector
	myStack.span2(vec5, n5, S5);				//calculate span
	myStack.printspan2(S5, n5);					//print span
	cout << " \n " << endl;
	
	int n9 = sizeof(v6)/sizeof(v6[0]);			//get the size of the array
	vector<int> vec6( v6, v6+n9);				//change into vector
	int n6 = vec6.size();						//calculate the size of vector
	int S6[n6];									//decalaring a size vector
	myStack.span2(vec6, n6, S6);				//calculate span
	myStack.printspan2(S6, n6);					//print span
	cout << "\n " << endl;
	
	

	return 0;

};
