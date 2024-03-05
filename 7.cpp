/*

What is the 10,001 prime number?

*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
    if(x == 2) return true;
    if(x%2==0) return false;
    for(int i = 3; i <= sqrt(x); i++){
        if(x%i==0) return false;
    }
    return true;
}

int main(){
    int counter = 6;
    int num = 13;
    int primes[10001] = {2,3,5,7,11,13};

    do{
        if (isPrime(num)) {
            primes[counter] = num;
            cout << counter << " : " << num << "\n"; 
            counter++;
        }
        num += 2;
    }while(counter != 10002);

    cout << primes[-1];
}