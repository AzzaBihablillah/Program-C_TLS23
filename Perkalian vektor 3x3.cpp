#include <iostream>

using namespace std;

int main() {
    int i, j, k;
    float matrixA[3][3], matrixB[3][3], matrixC[3][3];
    cout<<"PROGRAM PERKALIAN DOT MATRIKS 3X3"<<endl;
    cout<<"C = A * B"<<endl;
    cout<<"Silakan masukkan elemen matriks A dan B sesuai petunjuk"<<endl;
    for(i=0; i<3; i++) {        // Input for 9 elements of A
        for(j=0; j<3; j++) {
            cout<<"Masukkan elemen matriks A baris "<<i+1<<" kolom "<<j+1<<endl;
            cin>>matrixA[i][j];
        }
    }
    for(i=0; i<3; i++) {        // Input for 9 elements of A
        for(j=0; j<3; j++) {
            cout<<"Masukkan elemen matriks B baris "<<i+1<<" kolom "<<j+1<<endl;
            cin>>matrixB[i][j];
        }
    }
    cout<<"Matriks A"<<endl;
    for(i=0; i<3; i++) {        
        cout<<"|\t";
         for(j=0; j<3; j++) {
            cout<<matrixA[i][j]<<"\t";  // Displaying matrixA
        }
        cout<<"|"<<endl;        // Switch to the next row
    }
    cout<<endl;
    cout<<"Matriks B"<<endl;
    for(i=0; i<3; i++) {        
        cout<<"|\t";
         for(j=0; j<3; j++) {   
            cout<<matrixB[i][j]<<"\t";  // Displaying matrixB
        }
        cout<<"|"<<endl;        // Switch to the next row
    }
    cout<<endl;
    cout<<"Matriks C = Matriks A * Matriks B"<<endl;
    for(i=0; i<3; i++){
        cout<<"|\t";
        for(j=0; j<3; j++){
            matrixC[i][j] = 0;      // Clear the memory address for matrixC used in dot product calculation.
            for(k=0; k<3; k++){
            matrixC[i][j] += matrixA[i][k] * matrixB[k][j];     // Dot product calculation
            }
            cout<<matrixC[i][j]<<"\t";  // print the result
        }
        cout<<"|"<<endl; // switch to the next row
    }
    return 0;
}