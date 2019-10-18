//Soluzione nel caso di difficoltà: (n = ultima posizione del vettore).

int minimo(int A[], int n)

    if (n > 0)

       if (a[n] < minimo(a, n-1))

          return A[n]

       else return minimo(a, n-1)