#include <stdio.h>

int *generate_array(size_t N)
{
    int A[N];

    for (int i=0; i<N; i++)
    {
        A[i] = i;
    }

    return A;
}


int main() {

    int *M = generate_array(5);

    for (int i=0; i<5; i++)
    {
        printf("%d\n" , M[i]);
    }

    printf("Hello, World!\n");
    return 0;
}
