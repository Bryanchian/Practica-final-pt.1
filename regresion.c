#include "regresion.h"

double predict(double coef[], double x[], int n) {
    double y_pred = coef[0];  

    for (int i = 0; i < n; i++) {
        y_pred += coef[i + 1] * x[i];  
    }

    return y_pred;
}

