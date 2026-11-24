// Question 1: Largest Element in an Array (Course Coding Exercise 1)Problem: Given an integer array arr of size n, find and return the largest element present in the array.Example:Input: arr = [-3, 4, 1, 2, 3]Output: 4Constraint: Solve it in a single pass ($O(n)$ time) without sorting the array.


#include <iostream> 

using namespace std ; 

int main()
{
   int ar1[]  = {-3, 4, 1, 2, 3} ;

   int temp = ar1[0]; 
   
   for(auto i : ar1)
   {
    if(temp < i)
    {
        temp = i ; 
    }
   }

   cout<<temp ; 

    return 0 ;
}