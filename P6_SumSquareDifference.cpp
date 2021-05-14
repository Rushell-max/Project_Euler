//     6                                    ///////////////////////
/* 	The sum of the squares of the first ten natural numbers is,
    The square of the sum of the first ten natural numbers is,
    Hence the difference between the sum of the squares of the 
    first ten natural numbers and the square of the sum is .
    Find the difference between the sum of the squares of the first one hundred 
    natural numbers and the square of the sum. 
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n=100, sum_sq, sq_sum, diff;
    sum_sq=(n*(n+1)*(2*n+1))/6;
    sq_sum=pow(((n*(n+1))/2),2);
    diff=sq_sum-sum_sq;
    cout<<"The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is "<<diff<<endl;
}