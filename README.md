# ADT Stack using STL Vecor Project

### Description

This project implements a stack ADT using STL vector to support the operations: push(), pop(), top(), empty(). It Tests the operations of the stack class for correctness. 

One can use the implemented stack class as an auxiliary data structure to compute spans used in the financial analysis, e.g. to get the number of consecutive days when stack was growing.

### To Run

You can double click hello termianl already made, or Using terminal on Mac,

```
$ cd ADT-Stack-using-STL-Vecor
$ /hello
```

### Output

The program runs the make file which executes both Application.cpp and My_Stack.cpp. The file My_Stack.cpp creates a vector, and adds/removes integers from the vector using push/pop. It first tells the user what integers it is adding onto the stack, then After each pop it tells the user if the stack is empty or not. 

After the stack is empty, The file Application.cpp is ran. It contains 2 different spans each containing 3 distinctive arrays. They run the same algorithm, but the output is different because of the distinctive arrays. 

The output on the terminal looks like result.png.

![Result](https://github.com/azamzow/ADT-Stack-using-STL-Vecor/blob/master/Result.png?raw=true)
