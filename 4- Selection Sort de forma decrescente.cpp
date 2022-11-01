#include<iostream>
using namespace std;

int main ()
{
   int i, auxS=0;
   int aS[10] = { 64,63,21,84,2,12,33,55,6,43};
   cout <<"Lista aleatoria:\n";
   for(i = 0; i<10; i++) { 
      cout <<aS[i]<<"\t";
   }


    int m, aux2;

    for(int n=0;n<10-1;n++){ 
        m=n;
        for(int o=n+1 ; o<10 ; o++){ 
            if(aS[m] < aS[o])
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
for(i = 0; i<10; i++) {  
   cout <<aS[i]<<"\t";
}
cout<<endl;

return 0;
}
