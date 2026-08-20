#include<iostream>
using namespace std;
void printing_n_to_1( int N){
    if(N==0){
        return;
    }
    cout<<N<<endl;
    return printing_n_to_1( N-1);
}
int main(){
    int N=10;

    printing_n_to_1(N);
}