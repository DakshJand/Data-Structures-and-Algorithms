#include<iostream>
using namespace std;
int main(){
    int N=121;
    int original=121;
    
    int first_no=0;
    int final_no=0;
    while(N!=0){
        first_no=N%10;
        final_no=(final_no*10)+first_no;
        N=N/10;
    }
    if(final_no==original){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }

}