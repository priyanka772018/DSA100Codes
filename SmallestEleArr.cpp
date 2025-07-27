#include<iostream>
#include<math.h>
using namespace std;

int smallest_element(int n, int arr[]) {
    //base case
    if(n==1)
    return arr[0];
    //recursive relation
    int ans = min(arr[n-1], smallest_element((n-1),arr));
    return ans;
}

int main() {
    int arr[10]={90,64,46,23,33};
    cout<<"smallest number is :"<<smallest_element(5,arr);
    return 0;
}