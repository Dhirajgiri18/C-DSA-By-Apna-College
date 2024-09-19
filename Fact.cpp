// Calculate N factorial
#include<iostream>
using namespace std;

int fact(int num){
    int fact =1;
    for(int i=num; i>1; i--){
        fact *= i;
    }
    return fact;
}
int recursive(int num){
    int fact =1;
    if(num<=1) return 1;
    return num * recursive(num-1);
}
int nCr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr= fact(n-r);

    return fact_n/(fact_r*fact_nmr);
}
int main(){
    // int num;
    // cout<<"Enter the no:";
    // cin>>num;
    // int facto = recursive(num);
    // cout<<"Factorial of the number "<<num<<" is "<<facto;
    int n=8;
    int r = 2;

    
    int result = nCr(n,r);
    cout<<result;
    return 0;
}