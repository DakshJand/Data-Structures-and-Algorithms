#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={-1,0,3,5,9,12};
    int target=9;
    int n=6;
    int low=0;
    int high=0;
    while(low<=high){
        int mid=low + (high-low) /2;
        if(arr[mid]==target){
            cout<<mid;

        }
        else if(arr[mid] < target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Not Found";


}