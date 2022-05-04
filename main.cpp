//Tower of Hanoi
//Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:

//1. Only one disk can be moved at a time.
//2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
//3.No disk may be placed on top of a smaller disk.
// Recursion is a process in which a function calls itself a subroutine. This allows the function to be repeated several times since it calls itself during its execution.
//Recursive program to find factorial

#include <bits/stdc++.h>
using namespace std;
 
int factorial R(int factorial R)
{
   if(n<=1){
      return n;
   }
   return n*factorialR(n-1);//recursively calling factorialR
}
int main()
{
   int n;
   cin>>n;//taking input from user
   cout<<factorialR(n)<<endl;//calling recursive function 
   return 0;
}