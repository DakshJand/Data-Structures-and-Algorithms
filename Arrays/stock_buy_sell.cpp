#include<iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int arr[6]={7,1,5,3,6,4};
    int n=6;
    int smallest=arr[0];
    int profit=INT_MIN;
    for(int i=0 ; i<n ;i++){
        smallest=min(smallest , arr[i]);
        profit=max(profit , arr[i]-smallest);
    }
    cout<<profit;
}