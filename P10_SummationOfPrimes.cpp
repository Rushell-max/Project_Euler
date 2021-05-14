//     10                                    ///////////////////////
/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
    Find the sum of all the primes below two million.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int *numbers_prime, num_limit= 2000000, size=num_limit, a;
    size-=2;
    numbers_prime=new int[size];
    int j=2;
    for(int i=0; i<size; i++){
        numbers_prime[i]=j;
        j++;
    }
    
    int ind=0;
    a=numbers_prime[ind];
    do{
        for(int i=ind+1; i<size; i++){
            if(numbers_prime[i]!=-1){
                if(numbers_prime[i]%a == 0){
                    numbers_prime[i]=-1;
                }
            }
        }
        ind++; 
        a=numbers_prime[ind]; 
        while(a==-1 && ind<size){
            ind++;
            a=numbers_prime[ind];   
        }
    }while(pow(a,2) < num_limit);
    
    long long int sum=0;
    for(int i=0; i<size; i++){
        if(numbers_prime[i]!=-1){
            sum+=numbers_prime[i];
        }
    }
    cout<<"The sum of all the primes below two million is "<<sum<<endl;
    
    delete[] numbers_prime;
}
