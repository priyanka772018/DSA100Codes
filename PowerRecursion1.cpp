#include<iostream>
using namespace std;
int power(int base, int x){
    if(x==0){
        return 1;
    }
    //recursive relation
    int ans = base*power(base,(x-1));
    return ans;
}
int main() {
   int n,m;
   cin>>n;
   cin>>m;
   cout<<power(n,m)<<endl;
   return 0;
}