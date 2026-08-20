#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,1,2,1,2};
    int temp[5]={0};
    for(int i=0;i<5;i++){
        temp[arr[i]]+=1;
    }
    for(int i=0 ; i<5 ;i++){
        if(temp[i]==1){
            cout<<i<<endl;
        }
    }
    
}