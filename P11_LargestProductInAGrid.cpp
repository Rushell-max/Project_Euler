//     11                                    ///////////////////////
/* In the 20×20 grid below, four numbers along a diagonal line have 
    been marked in red. The product of these numbers is 26 × 63 × 78 × 14 = 1788696.
    What is the greatest product of four adjacent numbers in the same direction 
    (up, down, left, right, or diagonally) in the 20×20 grid? 
*/

#include <iostream>
#include <fstream>

using namespace std;

long long int greatest_diag(int** G, int f, int c, int n){
    long long int greatest=0, product=1;
    for(int j=0; j<=f-n; j++){
        for(int k=0; k<=c-n; k++){
            product=1;
            for(int i=0; i<n ; i++){
                product*=G[j+i][k+i];
            }if(product>greatest){
                greatest=product;
            }
        }
    }
    return greatest;
}

long long int greatest_diagInv(int **G, int f, int c, int n){
    long long int greatest=0, product=1;
    for(int j=0; j<=f-n; j++){
        for(int k=n-1; k<c; k++){
            //cout<<j<<" "<<k<<endl;
            product=1;
            for(int i=0; i<n ; i++){
                product*=G[j+i][k-i];
            }if(product>greatest){
                greatest=product;
            }
        }
    }
    return greatest;
}

long long int greatest_UpDown(int **G, int f, int c, int n){
    long long int greatest=0, product=1;
    for(int j=0; j<=f-n; j++){
        for(int k=0; k<c; k++){
            product=1;
            for(int i=0; i<n; i++){
                product*=G[j+i][k];
            }if(product>greatest){
                greatest=product;
            }
        }
    }
    return greatest;
}

long long int greatest_LeftRight(int **G, int f, int c, int n){
    long long int greatest=0, product=1;
    for(int j=0; j<f; j++){
        for(int k=0; k<c-n+1; k++){
            product=1;
            for(int i=0; i<n; i++){
                product*=G[j][k+i];
            }if(product>greatest){
                greatest=product;
            }
        }
    }return greatest;
}

void print_array(int **M, int fi, int col){ 
    cout<<" >> MOSTRANDO MATRIZ . . . "<<endl;
    for(int i = 0 ; i < fi ; i++){ 
        for(int j = 0 ; j < col ; j++){
            cout<<*(*(M+i)+j)<<" ";
        }cout<<"\n";
    }
}

int main(){
    int f=20, c=20, **Grid, n=4;
	Grid=new int *[f];
	for(int i=0; i<f;i++)
		Grid[i]=new int[c];
    ifstream grid;
	grid.open("D:\\projects\\Laboratorio_CC_II\\Project_Euler\\P11_LargestProductInAGrid.txt");

	for(int i=0; i<f; i++)
		for(int j=0; j<c; j++){
			grid >> Grid[i][j];
	}
    //print_array(Grid, f, c);
    
    int *valores = new int[4];
    valores[0]=greatest_UpDown(Grid, f, c, n);
    valores[1]=greatest_LeftRight(Grid, f, c, n);
    valores[2]=greatest_diag(Grid, f, c, n);
    valores[3]=greatest_diagInv(Grid, f, c, n);
    long long int greatest=0;
    for(int i=0; i<4; i++){
        if(valores[i]>greatest){
            greatest= valores[i];
        }
    }
    
    cout<<" The greatest product of four adjacent numbers in the same direction is "<<greatest<<endl;

 	for(int i=0;i<f;i++){
		delete [] Grid[i];
	}

	delete [] Grid;
}