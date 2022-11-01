#include<iostream>
using namespace std;

int main ()
{
   int i, auxS=0;
   int aS[10] = { 64,63,21,84,2,12,33,55,6,43};
   cout <<"Lista aleatoria:\n";
   for(i = 0; i<10; i++) { // O(N)
      cout <<aS[i]<<"\t";
   }

//Selection Sort
    int m, aux2;

    for(int n=0;n<10-1;n++){ // O(N)
        m=n;
        for(int o=n+1 ; o<10 ; o++){ // O(N)
            if(aS[m] > aS[o])
                m=o;
            
        }
        if(n!=m){
            aux2=aS[n];
            aS[n]=aS[m];
            aS[m]=aux2;
            auxS ++;
        }
        
    }

cout<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";

cout <<"\nLista ordenada Selection Sort:\n";
for(i = 0; i<10; i++) {  // O(N)
   cout <<aS[i]<<"\t";
}
cout<<endl;

return 0;
}

//Complexidade:
// 2 O(N)+ O(N) * O(N)
// Melhor Caso: O(N^2)
// Pior Caso: O(N^2)