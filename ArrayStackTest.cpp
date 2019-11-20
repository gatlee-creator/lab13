/*
    Name: Graham Atlee
    Course: csc1720
    Date: 11/19/2019

    Program to test the various operations of a stack
*/ 
#include <iostream>
#include "myStack.h"

using namespace std;

void testCopyConstructor(stackType<int> otherStack);

int main()
{
    stackType<int> stack(50);
    stackType<int> copyStack(50);
    stackType<int> dummyStack(100);

    cout << "Adding elements into stack" << endl;

    stack.initializeStack();
    stack.push(85);
    stack.push(28);
    stack.push(56);

    cout << "using assignment operator to copy elements into copyStack" << endl;
    copyStack = stack;  //copy stack into copyStack
    cout << endl;

    cout << "The elements of stack: ";
       while (!stack.isEmptyStack())  //print copyStack
       {
           cout << stack.top() << " ";
           stack.pop();
       }
       cout << endl;

    stack = copyStack; //refill

    cout << "reverse copyStack using stack" << endl;
    stack.reverseStack(copyStack);


    cout << "After reversal of copyStack: ";
    while (!copyStack.isEmptyStack())  //print copyStack
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    cout << "checking if stack is unchanged" << endl;
    cout << "elements in stack: " <<endl;
    while (!stack.isEmptyStack())  //print copyStack
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
}
