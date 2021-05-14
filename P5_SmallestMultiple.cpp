//     5                                    ///////////////////////
/* 	2520 is the smallest number that can be divided by each of the 
    numbers from 1 to 10 without any remainder.
    What is the smallest positive number that is evenly divisible by 
    all of the numbers from 1 to 20? 
*/

#include <iostream>

using namespace std;

bool divisible(int num, int i){
    if(i>20){
        return true;
    }else if(num%i!=0){
        return false;
    }i++;
    return divisible(num, i);
}

int main(){
    int number=20, ini=1;
    while(!divisible(number, ini)){
        number++;
    }
    cout<<"The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is "<<number<<endl;
}