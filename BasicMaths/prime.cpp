#include<iostream>
using namespace std;
int main(){
    int N=4;
    bool isPrime=true;
    if(N>2){
        isPrime=false;


    }
    for(int  i =2; i<N ; i++){
        if(N%i==0 && i!=N ){
            isPrime=false;
        }
        
    }
    if(isPrime==true){
        cout<<"it is prime"<<endl;
    }
    else{
        cout<<"it is not a prime number"<<endl;
    }
}
