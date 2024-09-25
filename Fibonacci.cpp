#include<iostream>
using namespace std;

int fibbo(int n){
    if(n==1 || n==2){
        return 1;
    }
    int second = 1;
    int first = 1;
    int third;
    for(int i=3; i<=n; i++){
    third = first + second;
    first = second;
    second = third;
    }
    return third;
}
int recursive(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return recursive(n-1) + recursive(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;

    int result = fibbo(n);
    int recursive_result = recursive(n);
    cout<<result<<endl;
    cout<<recursive_result;

    return 0;
}