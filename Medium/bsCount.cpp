#include<bits/stdc++.h>
using namespace std;

int getAnswer(){
    int arr[9] = { 2, 4, 7, 10, 14, 27, 39, 52,67};
    int lo = 0;

    int hi =  8;

    int k = 52;

    int count = 0;

    while(lo <hi){

    count = count + 1;
    int m=(lo+hi)/2;

    if(arr[m] = k){
        break;
    }else if(arr[m]<k){
        lo = m + 1;
    }
    else{
    hi = m - 1;
    }
    }
return count;
}

int main(){
    cout << getAnswer() << endl;
}