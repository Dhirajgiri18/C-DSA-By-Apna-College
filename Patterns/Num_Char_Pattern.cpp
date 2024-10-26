#include<iostream>
using namespace std;

void pattern(int N){
    int num = 1;
    char letter = 'A';

    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            if(i%2 ==0){
                cout<<letter<<" ";
                letter++;
                num++;
            }else{
                cout<<num<<" ";
                num++;
                letter++;
            }
        }
        cout<<endl;
    }
}
int main(){
    int N = 5;
    pattern(N);

    return 0;
}
/*
1
BC
456
GHIJ
*/