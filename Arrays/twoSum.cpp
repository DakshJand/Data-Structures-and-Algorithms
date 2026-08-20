#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n=size.arr[];
    int k;
    int sum;
    int left=0;
    int right=n-1;
    while(left<right){
        arr[left]+arr[right]=sum;
        
        if(sum==k){
            cout<<left<<" "<<right<<endl;
        }
        else if(sum<k){
            left++;
        }
        else (sum>k){
            right--;
        }
        
    }
    cout<<"Not found"<<endl;
}


//if we want to store two things like value and index both we use pair;
// pair<int ,int>name(n)


//like if we want to sort an array but also want to keep the indexes same as the original,
//in that case we use pairs.