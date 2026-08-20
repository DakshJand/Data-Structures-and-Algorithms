# include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,1,2,3};
    int hash[5]={0};
    for(int i=0 ; i<5;i++){
        hash[arr[i]] += 1;


    }
    for(int i=0 ; i<5;i++){
        if(hash[i]>0){
            cout<<i<<" "<<hash[i]<<endl;
        }
    }


}