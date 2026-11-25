#include <iostream> 
using namespace std ; 

void rev(int arr[] ,int len)
{
    int s = 0 ; 
    int e = len-1 ; 

    while(s<=e)
    {
        int a = arr[s] ; 
        arr[s] = arr[e] ; 
        arr[e] = a ; 
        s++ ; 
        e-- ; 
    }
}

int main()
{
int arr[] = {1,2,3,4,5} ; 

rev(arr,5) ; 

cout<<"- ans - "<<endl ; 

for(auto t : arr)
{
    cout<<t<<endl ; 
}
}