#include <iostream> 
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    bool isSorted=true;
    for(int i=0 ; i<4 ; i++){
        if(arr[i]>arr[i+1]){
            isSorted=false;
        }
        
    }
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}