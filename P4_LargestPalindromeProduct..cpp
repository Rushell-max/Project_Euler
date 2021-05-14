//     4                                    ///////////////////////
/* 	A palindromic number reads the same both ways. The largest palindrome 
    made from the product of two 2-digit numbers is 9009 = 91 × 99.
    Find the largest palindrome made from the product of two 3-digit numbers. 
*/

#include <iostream>

using namespace std;

bool es_pal(int n){
    int number_op=n,number_rev=0;
    while(number_op>0){
        int dig = number_op % 10;
        number_rev+=dig;
        number_rev*=10;
        number_op/=10;   
    }if(n==number_rev/10){
        return true;
    }return false;

}

int main(){
    int largest=0, num;
    for(int i=100; i<1000; i++){
        for(int j=100; j<1000; j++){
           num = i*j;
           if(es_pal(num) && num>largest){
               largest=num;
           } 
        }
    }
    cout<<"The largest palindrome made from the product of two 3-digit numbers is "<<largest<<endl;
}