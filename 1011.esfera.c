#include <stdio.h>
 
int main() {
    double R; //R= raio
    scanf("%lf",&R);
    double volume = (4/3.0)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
