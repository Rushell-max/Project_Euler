//     9                                    ///////////////////////
/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
            a2 + b2 = c2
    For example, 32 + 42 = 9 + 16 = 25 = 52.
    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n=1000, b, c;
    bool encontrado=false;
    for(int a=0; a<n/3 && !encontrado; a++){
        b=((pow(n,2)-2*n*a)/(2*n-2*a));
        c = n-a-b;
        if((pow(a,2)+pow(b,2) == pow(c,2)) && a+b+c==n && a<b && b<c){
            cout<<"The product abc is "<<a*b*c<<endl;
            encontrado=true;
        }
    }
}
