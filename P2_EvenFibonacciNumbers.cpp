//     2                                    ///////////////////////
/* 	Each new term in the Fibonacci sequence is generated by adding the 
    previous two terms. By starting with 1 and 2, the first 10 terms will be:
        1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
    
    By considering the terms in the Fibonacci sequence whose values do not 
    exceed four million, find the sum of the even-valued terms. 
*/

#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n == 0||n== 1){
       return n;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int variable=0, sum=0;
    do{
        int num_fibo=fibonacci(variable);
        if(num_fibo%2 ==0){
            sum+=num_fibo;
        }
        variable++;
    }while(4000000 > int(fibonacci(variable)));

    cout<<"The sum of the even-valued terms is "<<sum<<endl;
}