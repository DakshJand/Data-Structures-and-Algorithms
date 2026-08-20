#include <iostream>
using namespace std;
int fib(int N){
    if(N==0){
        return 0;
    }
    if(N==1){
        return 1;
    }
    return fib(N-1) + fib(N-2);
}
int main(){
    int N=10;
    cout<<fib(N)<<endl;
}