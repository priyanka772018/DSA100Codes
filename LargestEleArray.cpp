#include<iostream>
#include<math.h>
using namespace std;
 
int largest_element(int n, int arr[]) {
    //base case
    if(n==1) 
    return arr[0];

    int ans = max(arr[n-1],largest_element(n-1,arr));
    return ans;
}

//Driver Code
int main() {
    int arr[] = {10,45,78,34,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest Element is:"<<largest_element(n,arr);
}