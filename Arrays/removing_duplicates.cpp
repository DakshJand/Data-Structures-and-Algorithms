#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,0,1,1,1,2,2,3,3,4};
    int different_numbers=1;
    for(int i =0 ; i<10-1 ; i++){
        if(arr[i] != arr[i+1]){
            different_numbers+=1;
        }
    }
    cout<<"Total unique numbers = "<<different_numbers<<endl;

}
