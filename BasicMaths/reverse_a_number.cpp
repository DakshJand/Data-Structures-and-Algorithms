#include<iostream>
using namespace std;
int main(){
    int N=558;
    int newNo=0;
    int lastNo;
    while(N>0){
        lastNo=N%10;
        newNo=(newNo*10)+lastNo;
        N=N/10;
    }
    cout<<newNo<<endl;
}