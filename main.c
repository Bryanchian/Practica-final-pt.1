#include <stdio.h>
#include "regresion.h"

int main() {
    double coef[] = {2.0, 0.5, -1.0}; 
    double x[] = {4.0, 1.0};         

    double y_pred = predict(coef, x, 2);

    printf("Predicción: %.2f\n", y_pred); 

    return 0;
}

