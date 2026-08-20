#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,6,9};
    int key=8;
    int index=-1;
    for(int i=0; i<5;i++){
        if(arr[i]==key){
             index=i;
            break;
        }
    }
    if(index != -1){
        cout<<"Element present at index "<<index;
    }
    else{
        cout<<"not there"<<endl;
    }
}