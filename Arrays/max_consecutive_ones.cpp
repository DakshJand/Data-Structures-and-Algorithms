#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int count=0;
    int largerCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count+=1;

        }
        else{
            count=0;
        }
        largerCount=max(largerCount , count);
        cout<<largerCount<<endl;
    }


}