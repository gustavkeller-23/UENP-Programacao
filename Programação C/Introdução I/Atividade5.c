#include <stdio.h>
#include <math.h>

int main () {
    float xa, xb, ya, yb, dist, difx, dify;
    
    printf ("Digite as cordenadas: \n");
    printf ("Digite a cordenada x e y do ponto A: \n");
    scanf ("%f %f", &xa, &ya);
    printf ("Digite a cordenada x e y do ponto B: \n");
    scanf ("%f %f", &xb, &yb);

    difx = xb - xa;
    dify = yb - ya;
    dist = sqrt (pow(difx,2) + pow(dify,2));
    
    printf ("A distancia entre os dois ponto e de %0.2f", dist);
    return 0;
}