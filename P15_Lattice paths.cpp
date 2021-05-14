//     15                                    ///////////////////////
/* Starting in the top left corner of a 2×2 grid, and only being able to move to the 
    right and down, there are exactly 6 routes to the bottom right corner.
    How many such routes are there through a 20×20 grid? 
*/

#include <iostream>

using namespace std;

int main(){
    int fi=20, co=20;
    fi++;co++;
    long long int **Grid = new long long int*[fi];
    for(int i=0; i<fi; i++){
        Grid[i]=new long long int[co];
    }
    for(int i=0; i<fi; i++){
        for(int j=0; j<co; j++){
            Grid[i][j]=1;
        }
    }

    for(int i=1; i<fi; i++){
        for(int j=1; j<co; j++){
            Grid[i][j]=Grid[i-1][j]+Grid[i][j-1];
        }
    }
    cout<<"There are exactly "<<Grid[fi-1][co-1]<<" routes "<<endl;

    for(int i=0;i<fi;i++){
		delete [] Grid[i];
	}

	delete [] Grid;
}
