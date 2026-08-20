#include<iostream>      
using namespace std;
int main(){
    int arr[5]={4,1,5,2,3};
    for(int i=0; i<5 ; i++){
        int minIndex=i;
        int temp;
        for(int j=i+1; j<5 ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    for(int i=0; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}