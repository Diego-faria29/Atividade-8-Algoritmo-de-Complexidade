#include<iostream>
using namespace std;

// Merge Sort
void merge(int aM[], int p, int q, int r) {
  
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++){ //O(N)
    L[i] = aM[p + i];}
  for (int j = 0; j < n2; j++){ //O(N)
    M[j] = aM[q + 1 + j];}

  int i, j, k;
  i = 0;
  j = 0;
  k = p;


  while (i < n1 && j < n2) { //O(N)
    if (L[i] <= M[j]) {
      aM[k] = L[i];
      i++;
    } else {
      aM[k] = M[j];
      j++;
    }
    k++;
  }


  while (i < n1) { //O(N)
    aM[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) { //O(N)
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
   int aM[] = {64,63,21,84,2,12,33,55,6,43};
   int aA[10] = {64,63,21,84,2,12,33,55,6,43};
   int TAM = sizeof(aM) / sizeof(aM[0]);
   mergeSort(aM, 0, TAM - 1);
   cout <<"Lista aleatoria:\n";
   for(int i = 0; i<10; i++) { //O(N)
      cout <<aA[i]<<"\t";
   }

cout<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";
cout <<"\nLista ordenada Merge Sort:\n"; 
for (int i = 0; i < TAM; i++){ //O(N)
  cout << aM[i] << " "<<"\t";
}
cout<<endl;

return 0;
}

//Complexidade:
// 7O(N)
// Melhor Caso: O(N)
// Pior Caso: O(N)