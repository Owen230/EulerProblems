/*

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
The 509887th person to have solved problem 6.
*/

#include <iostream>
using namespace std;

int main(){
    long squaredsum = 0, sum = 0;

    for(int i = 1; i <= 100; i++){
        int y = i*i;
        sum += i;
        squaredsum += y;
        cout << i << "  " << y << "  " << squaredsum << "\n";
    }

    sum = sum*sum;
    

    long long answer = sum - squaredsum;
    cout << sum << " - " << squaredsum << " = " << answer << "\n";
    cout << answer;
}