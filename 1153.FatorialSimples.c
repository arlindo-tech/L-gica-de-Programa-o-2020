#include <stdio.h>
 
int main() {
    int N, i, facto=1;
    scanf("%d",&N);
    for (i=0;i<N;i++){
        facto = facto *(N-i);
    }
    printf("%d\n",facto);
    return 0;
}
