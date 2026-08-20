#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,2,3,};
    int hash[5]={0};
    for(int i=0 ; i<5 ; i++){
        hash[arr[i]] += 1;

    }
    int max=hash[0];
    int element=0;
    for(int i =0 ; i<5 ; i++){
        if(hash[i]>max){
            max=hash[i];
            element=i;
        }
        
    }
    cout<<element<<endl;
    
}