#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,5,4,7,8};
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;  i<5 ; i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    cout<<second_largest<<endl;

}