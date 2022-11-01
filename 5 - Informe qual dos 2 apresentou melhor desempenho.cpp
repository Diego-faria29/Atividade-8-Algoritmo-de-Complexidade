#include<iostream>
using namespace std;

// Merge Sort
void merge(int aM[], int p, int q, int r) {
  
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++){ 
    L[i] = aM[p + i];}
  for (int j = 0; j < n2; j++){ 
    M[j] = aM[q + 1 + j];}

  int i, j, k;
  i = 0;
  j = 0;
  k = p;


  while (i < n1 && j < n2) { 
    if (L[i] <= M[j]) {
      aM[k] = L[i];
      i++;
    } else {
      aM[k] = M[j];
      j++;
    }
    k++;
  }


  while (i < n1) { 
    aM[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) { 
    aM[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int aM[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergeSort(aM, l, m);
    mergeSort(aM, m + 1, r);

    merge(aM, l, m, r);
    
  }
}

int main ()
{
   int i, auxS=0;
   int aS[10] = { 64,63,21,84,2,12,33,55,6,43};
   int aM[] = {64,63,21,84,2,12,33,55,6,43};
   int TAM = sizeof(aM) / sizeof(aM[0]);
   int auxM = 0;
   mergeSort(aM, 0, TAM - 1);
   cout <<"Lista aleatoria:\n";
   for(int i = 0; i<10; i++) {
  cout <<aS[i]<<"\t";
   }


//Selection Sort
    int m, aux2;

    for(int n=0;n<10-1;n++){ 
        m=n;
        for(int o=n+1 ; o<10 ; o++){ 
            if(aS[m] > aS[o])
                m=o;
            auxS ++;
        }
        if(n!=m){
            aux2=aS[n];
            aS[n]=aS[m];
            aS[m]=aux2;
            
        }
        
    }

cout<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";

cout <<"\nLista ordenada Selection Sort:\n";
for(i = 0; i<10; i++) {  
   cout <<aS[i]<<"\t";
}
cout<<endl;
cout <<"\nSelection Sort utilizou: "<<auxS<< " Trocas para ordenar";
cout<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";
cout <<"\nLista ordenada Merge Sort:\n"; 
for (int i = 0; i < TAM; i++){ 
  cout << aM[i] << " "<<"\t";
  auxM ++;
}
cout<<endl;
cout <<"\nMerge Sort utilizou: "<<auxM<< " Trocas para ordenar";
cout<<endl;

return 0;
}

