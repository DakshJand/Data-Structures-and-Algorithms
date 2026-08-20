#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int N=153;
    int original=N;
    int digit=0;
    int sack=0;
    //to cal total digits in number
    int total=0;
    while(N != 0){
        N=N/10;
        total+=1;
    }
    cout<<total<<endl;
    //armstrong number
    N=original;               //// VERY VERY IMPORTANT STEP{we have to make N = original else N will be 0 because of earlier loop}
    while(N !=0){
        digit=N%10;
        sack = sack + pow(digit, total);     ////FOR POWER WE HAVE TO INCLUDE <cmath> HEADER FILE
        N=N/10;
    }
    if(sack==original){
        cout<<"It is an armstrong number"<<endl;
    }
    else{
        cout<<"It is not an armstrong number"<<endl;
    }
}