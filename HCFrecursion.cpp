#include<bits/stdc++.h>
using namespace std;
int getHCF(int n1, int n2) {
    if(n1 == 0)
    return n2;
    if(n2 == 0)
    return n1;
    //base case
    if(n1 == n2)
    return n1;
    //EUCLIDEAN ALGORITHM
    if(n1>n2){
        return getHCF(n1-n2, n2);
    }
    if(n2>n1){
        return getHCF(n1,n2-n1);
    }
}
int main() {
     int n1 = 96, n2 = 56, HCF = 1;
     HCF = getHCF(n1, n2);
     cout<<"hcf is"<<HCF;
     return 0;
}