#include<iostream>
using namespace std;
int main(){
    int arr[5]={
        1,0,0,2,3
    };
    int j=0;
    int temp=0;
    for(int i=0 ; i<5 ;i++){
        if(arr[i] != 0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            j++;


        }

    }
    for(int i =0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}