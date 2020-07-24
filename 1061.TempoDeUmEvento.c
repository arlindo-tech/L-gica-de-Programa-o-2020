#include <stdio.h>
int main() {
    char dIn[5], dFi[5]; // só o dia do scanf
    int dI, dF, hI, hF, mI, mF, sI, sF;
    int dias, horas, minutos, segundos;
    // I= incício e F=fim, d=dia, h=hora, m=minuto e s=segundo
    scanf("%s%d\n",dIn,&dI);
    scanf("%d : %d : %d\n",&hI,&mI,&sI);
    scanf("%s%d\n",dFi,&dF);
    scanf("%d : %d : %d\n",&hF,&mF,&sF);
    // tranformando tudo para segundos (final - inicial)
    int totalseg = ((dF*86400) + (hF*3600) + (mF*60) + sF )- ((dI*86400) + (hI*3600) + (mI*60) + sI);
    // agora vamos achar o número de dias, horas, min e seg
    dias = totalseg/86400;
    totalseg = totalseg - dias*86400;
    horas = totalseg/3600;
    totalseg = totalseg - horas*3600;
    minutos = totalseg/60;
    totalseg = totalseg - minutos*60;
    segundos = totalseg;
    printf("%d dia(s)\n",dias);
    printf("%d hora(s)\n",horas);
    printf("%d minuto(s)\n",minutos);
    printf("%d segundo(s)\n",segundos);
    return 0;
}
