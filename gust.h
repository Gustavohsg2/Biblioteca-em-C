#ifndef GUST_H
#define GUST_H

#include <stdio.h>

float soma(){
    float n,m;
    scanf("%f", &n);
    scanf("%f", &m);
    float resu = n + m;
    printf("\nA soma de %f + %f é = %f.\n", n, m, resu);
}

char bdn(){
    char n[20];
    printf("Qual o seu nome?\n");
    scanf("%s", &n);
    printf("Bom dia %s, tenha um ótimo dia.\n", n);
}

int fat(int n){
    int resu = 1;
    for(int x = 1; x <= n; x++){
        resu = resu * x;
    }
    return resu;
}
#endif