//lower bound means element just greater than or equal to the target.
#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,2,3};
    int n=3;
    int low=0;
    int high=n-1;
    int target=2;
    int index=0;
    while(low<=high){
        int mid=low + (high-low) /2;
        if(arr[mid]>= target){
            high=mid-1;
            index=mid;
        }
        else{
            low=mid+1;
            
        }

    }
    cout<<"The index of lower bound is : " <<index;
}