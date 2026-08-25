#include<iostream>
using namespace std;
int main(){
    int arr[4]{1,3,5,6};
    int n=4;
    int low=0;
    int high=n-1;
    int place_value=0;
    int target=2 ;
    while(low<high){
        int mid=low + (high-low) /2;
        if(arr[mid]==target){
            place_value=mid;
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;;
        }
        else{
            low=mid+1;
        }
        place_value=low;
    }
    cout<<place_value;
}
