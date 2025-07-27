#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int sum = 0;
    for(int i=n;i<=m;i++){
         sum = sum + i;  
    }
    cout<<sum<<endl;
    return 0;

}
//time complexity:O(N)
//space somplexity:O(1)