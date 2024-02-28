/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is  
9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.

The 503628th person to have solved problem 4.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int x){
    string s = to_string(x), s2 = s;
    reverse(s2.begin(), s2.end());

    if(s == s2){
        cout << s << " is a palindrome\n";
        return true;
    }else{
        // cout << s << " is not a palindrome\n";
        return false;
    }
}

int main(){

    int max = 0;

    for(int i = 1; i < 999; i++){
        for(int j = 1; j < 999; j++){
            int num = i*j;
            if(isPalindrome(num)==true){
                if(num > max){
                    max = num;
                }
            }
        }
    }

    cout << "Max palindrome is: " << max << "\n";
}