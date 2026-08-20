#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int n=6;
    int count=arr[0];
    int large=arr[0];
    for(int i =0 ; i<n ; i++){
        count=max(n[i] , count+n[i]);     
        large=max(count , large); 
    }
    return large;
}