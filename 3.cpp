/*

The prime factors of 13195 are 5,7,13 and 29.
What is the largest prime factor of the number 600851475143?

The 569095th person to have solved problem 3.
*/

#include <iostream>
using namespace std;

long Factor(long x, int y){
    if(x > 0 ){
        while((x%y)==0){
            cout << x << "%" << y << " -> " << y << "\n";
            x = x/y;
            cout << x << "\n";
        }
        return x;
    }else{
        return 0;
    }
}

int main(){
    long number = 600851475143;
    long z;

    for(int i = 2; i < number; i++){
        z = Factor(number,i);
        number = z;
    }

}