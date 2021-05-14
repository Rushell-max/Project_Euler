//     13                                    ///////////////////////
/* Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int f=100, c=50;
    int *Number_Resul = new int [1000];
    int **Numbers = new int *[f];
	for(int i=0; i<f;i++)
		Numbers[i]=new int[c];
	for(int i=0; i<1000;i++){
        Number_Resul[i]=-1;
    }
    ifstream numbers;
	numbers.open("D:\\projects\\Laboratorio_CC_II\\Project_Euler\\P13_Large sum.txt");

	for(int i=0; i<f; i++)
		for(int j=0; j<c; j++){
			numbers >> Numbers[i][j];
	}

    int sum=0, var=1000, residuo, lleva=0;
    for(int i=c; i>=0; i--){
        sum=0;
        for(int j=0; j<f; j++){
            sum+=Numbers[j][i];
        }sum+=lleva;
        if(sum>10){
            residuo=sum%10;
            lleva=sum/10;
            Number_Resul[var]=residuo;
            var--;           
        }else{
            Number_Resul[var]=sum;  
            var--;
        }
    }while(lleva!=0){
        if(lleva>10){
            residuo=lleva%10; 
            lleva=lleva/10;
            Number_Resul[var]=residuo;
            var--;
        }else{
            Number_Resul[var]=lleva;  
            var--;
            lleva = lleva/10;            
        }
    }

    cout<<"The first ten digits of the sum are ";
    int conteo=0;
    for(int i=0; i<1000;i++){
        if(Number_Resul[i]!=-1 && conteo<10){
            cout<<Number_Resul[i];
            conteo++;
        }
    }cout<<endl;

    for(int i=0;i<f;i++){
		delete [] Numbers[i];
	}

	delete [] Numbers;
    delete [] Number_Resul;
}