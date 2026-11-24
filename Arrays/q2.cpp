// Problem: Given an integer array arr of size n and a target integer key, return the first index (0-based) where key appears in the array. If key is not present, return -1.

// Example:

// Input: arr = [10, 25, 30, 45, 30], key = 30

// Output: 2

#include <iostream>

using namespace std ; 

int main()
{
    int j = 0 ; 
    int ar1[] = {10, 25, 30, 45, 30} ; 
    int key = 30  ; 

    for(auto i : ar1)
    {
        j++ ; 
        if(i==key)
        {
            cout<<"Yes key found at index"<<j<<endl ; 
            return 0 ; 
        }
    }

    cout<<"Key not found" <<endl ; 

    return 0 ; 
}