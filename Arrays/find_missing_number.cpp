#include<iostream>
using namespace std;
int main(){
    int arr[5]={0, 1, 2, 4, 5};
    
    int n=5;
    int sum=(n*(n+1))/2;
    for(int i=0 ; i<5 ; i++){
        sum-=arr[i];
    }
    cout<<sum;
}