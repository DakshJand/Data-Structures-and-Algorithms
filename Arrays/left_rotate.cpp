#include<iostream>
using namespace std;
int main(){
    int arr[5]={
        2,5,1,3,0
    };
    int temp[5]={0};
    for(int i =0 ; i<5 ; i++){
        temp[i]=arr[(i+1)%5];

    };
    for(int i =0 ; i<5 ; i++){
        arr[i]=temp[i];
    };
    for(int i =0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    };
}
