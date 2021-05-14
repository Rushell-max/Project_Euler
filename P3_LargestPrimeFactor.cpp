//     3                                    ///////////////////////
/* 	The prime factors of 13195 are 5, 7, 13 and 29.
    What is the largest prime factor of the number 600851475143 ? 

*/
#include <iostream>

using namespace std;

int main(){
    long long int num = 600851475143;
    int largest=0;
    for(int i=2; i<=num; i++){
        while(num%i==0){
            num/=i;
            if(i>largest){
                largest=i;
            }
        }if(num/i>largest){
            largest=i;
        }
    }
    cout<<"The largest prime factor of the number 600851475143 is "<<largest<<endl;
}