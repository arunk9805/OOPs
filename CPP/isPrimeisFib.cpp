#include<iostream>
#include<cmath>
using namespace std;

bool isFib(int n) {
    int f=0, s=1, r=0;
    while(r<=n) {
        f=s;
        s=r;
        r=f+s;
    }
    if(r=n) return true;
    else return false;
}

bool isPrime(int n){
    for(int i=2; i<=sqrt(n); i++) { 
        if(!(n%i)) return false;
    }
    return true;
}

int checkValue(int n) {
    if(isFib(n) && isPrime(n))
        return true;
    else
        return false;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(checkValue(n))
        cout<<"Prime and Fibonacci"<<endl;
    else
        cout<<"Not Prime and Fibonacci"<<endl;
    return 0;
}