/*

2520  is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

The 506610th person to have solved problem 5.
*/

#include <iostream>
using namespace std;

int main(){
    bool isDone = false;
    int num = 20, answer;


    do{
        cout << num << "\n";
        isDone = true;
        for(int i = 2; i < 20; i++){
            if(num%i!=0){
                isDone = false;
                break;
            }
        }
        if(!isDone){
                num+=20;
        }

    }while(!isDone);        
    cout << "Answer is : " <<  num << "\n";
    
    // cout << "Answer is: " << answer << "\n";
}