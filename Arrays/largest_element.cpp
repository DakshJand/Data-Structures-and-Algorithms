#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,5,4,7,8};
    int largest=arr[0];
    for(int i=0 ;i<5 ;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    cout<<largest<<endl;
}