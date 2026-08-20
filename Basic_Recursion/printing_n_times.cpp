#include<iostream>
using namespace std;
void printN(int n , int N){
    if(n==0){
        return;
    }
    cout<<N<<endl;
    return printN(n-1, N);
}
int main(){
    int n=10;
    int N=5;
    printN(n , N);
}