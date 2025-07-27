#include<bits/stdc++.h>
using namespace std;
int calSum(int a, int b){
    if(a>b)
    return 0;
    return a + calSum(a+1, b);
}
int main() {
    int a = 10;
    int b = 15;
    int sum = calSum(a,b);
    cout<<sum;
    return 0;
    
}
//time complexity:O(N)
//Space complexity:O(1)
