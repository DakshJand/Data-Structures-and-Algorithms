#include <iostream>
using namespace std;
int main(){
    int N=558;
    int count=0;
    while(N>0){
        N=N/10;
        count+=1;

    }
    cout<<count<<endl;
    
}