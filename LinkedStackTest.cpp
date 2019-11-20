/*
    Name: Graham Atlee
    Course: csc1720
    Date: 11/19/2019

    This program tests various operations of a linked stack
*/ 
#include <iostream>
#include "linkedStack.h"
   
using namespace std; 

void testCopy(linkedStackType<int> OStack);
 
int main()
{
    linkedStackType<int> stack;
    linkedStackType<int> otherStack;
    linkedStackType<int> newStack;

        //Add elements into stack
    stack.push(28);
    stack.push(94);
    stack.push(37);

        //Use the assignment operator to copy the elements
        //of stack into newStack
    newStack = stack;

    cout << "elements in stack: " << endl;
    while (!stack.isEmptyStack())
    {
        cout << stack.top() << endl;	
        stack.pop();
    }
    cout << endl;

    stack = newStack; //refill

    cout << "reversing newStack using stack" << endl;
    stack.reverseStack(newStack);

     cout << "After reversal of newStack: " 
         << endl; 

        //Output the elements of newStack
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << endl;	
        newStack.pop();
    }
    cout << endl;

    cout << "checking if stack is unchanged" << endl;
    cout << "elements in stack: " <<endl;
     while (!stack.isEmptyStack())
    {
        cout << stack.top() << endl;	
        stack.pop();
    }

}
