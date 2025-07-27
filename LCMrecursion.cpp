//relation between HCF and LCM is LCM*HCF = N1*N2
//LCM = (N1*N2)/HCF
#include<bits/stdc++.h>
using namespace std;

int getHCF(int n1, int n2){
    if(n1 == 0)
    return n2;
    if(n2 == 0)
    return n1;
    //base case
    if(n1 == n2)
    return n1;

    if(n1>n2){
        return getHCF(n1-n2, n2);
    }
        return getHCF(n1, n2-n1);
}
int main(){
    int n1 = 3, n2 = 21, HCF, LCM;
    HCF = getHCF(n1, n2);
    LCM = (n1*n2)/HCF;
    cout<<"lcm is"<<LCM<<endl;
    return 0;

}