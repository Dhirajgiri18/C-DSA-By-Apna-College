#include<iostream>
using namespace std;

bool Pal(int num){
    int org = num;
    int rev=0;
    while(num>0){
        int rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    if(org==rev) return 1;
    else return 0;
}
int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    if(Pal(num)) cout<<"It is Palindrome!";
    else cout<<"It is not a Palindrome!";

}