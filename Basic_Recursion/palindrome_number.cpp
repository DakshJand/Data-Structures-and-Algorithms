#include<iostream>
using namespace std;
int palindrome(int x , int rev){
    if(x==0){
        return rev;
    }
    int rem=x%10;
    rev=rev*10+rem;
    return palindrome(x/10,rev);

}

int main(){
    int N=121;
    int reversed=palindrome(N,0);
    if(reversed==N){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}