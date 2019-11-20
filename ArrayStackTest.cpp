//Program to test the various operations of a stack

#include <iostream>
#include "myStack.h"

using namespace std;

void testCopyConstructor(stackType<int> otherStack);

int main()
{
    stackType<int> stack(50);
    stackType<int> copyStack(50);
    stackType<int> dummyStack(100);

    stack.initializeStack();
    stack.push(85);
    stack.push(28);
    stack.push(56);
    copyStack = stack;  //copy stack into copyStack

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


    cout << "The elements of copyStack: ";
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
