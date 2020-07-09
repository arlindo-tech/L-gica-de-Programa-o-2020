#include <stdio.h>
 
int main() {
    int tempo, vm; //vm = velocidade média
    scanf("%d",&tempo);
    scanf("%d",&vm);
    printf("%.3lf\n", (vm*tempo)/12.0);
    return 0;
}
