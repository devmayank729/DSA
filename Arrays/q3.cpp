#include <iostream>
// #include <vector>
using namespace std ; 

bool finder(int arr[], int val, int size)
{
int high = size - 1 ; 
int low = 0 ; 
int mid = (high + low)/2 ; 
cout<<"High :"<<high<<"Low :"<<low<<"mid :"<<mid<<endl ;
while(low >= high || arr[mid] == val)
{
    if(val > arr[mid])
    {
        low = mid + 1 ; 
    }
    else if(val < arr[mid])
    {
        high = mid - 1 ; 
    }

    else if (val == arr[mid])
    {
        return true ; 
    }

    mid = (low + high)/2 ; 

}
return false ; 


}

using namespace std; 

int main()
{
    int arr[] = {2,3,4,5,6,7,8,9} ; 
    int val = 99 ; 
    int size = 8 ; 
    bool result = finder(arr,val,size) ; 
    cout<<"Result :"<<result <<"it present " ; 
    return 0 ; 
}