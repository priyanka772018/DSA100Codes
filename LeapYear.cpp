#include<iostream>
using namespace std;
int main() {
    int year;
    cin>>year;
    if(year%400 == 0){
        cout<<"this is leap year"<<endl;
    }
   else if(year%4 == 0 && year%100 != 0) {
        cout<<"this is leap year"<<endl;
    }
   else {
        cout<<"this is not a leap year"<<endl;
   }
   return 0;
}