//     7                                    ///////////////////////
/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
    we can see that the 6th prime is 13.
    What is the 10 001st prime number?
*/

#include <iostream>

using namespace std;

bool prime(int n){
    int sum =0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum++;
        }
    }if(sum==2){
        return true;
    }return false;
}

int main(){
    int encontrados=0, number=0;
    while(encontrados<10001){
        number++;
        if(prime(number)){
            encontrados++;
        }
    }
    cout<<"the 10001st prime number is "<<number<<endl;
}