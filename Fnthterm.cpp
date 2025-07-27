#include<iostream>
using namespace std;
int main() {
    cout<<"enter the number:"<<endl;
    int n;//how many terms we want;
    cin>>n;
    int start = 1; //start number(we keep increasing it)
    int totalSum = 0; // final result

    //Repeat this N times , once fro each term
    for(int termNumber = 1; termNumber<=n; termNumber++) {
        int product = 1; //this will hold the product for the current term
        cout<< "Term" << termNumber << ": ";

        //multiply 'termNumber' numbers
        for(int count = 1; count <= termNumber; count++) {
            cout<<start;//show the number being multiplied
            product*= start;//multiply it into product
            start++;//go to next number

            if(count < termNumber) 
            cout<<"*";
        }
        cout<<"="<<product<<endl;
        totalSum += product;//add the result to total sum
    }
    cout<<"Final Sum = " <<totalSum<<endl;
    return 0;

}