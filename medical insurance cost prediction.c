
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double mean(double* array, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

double variance(double* array, int size, double mean) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += pow(array[i] - mean, 2);
    }
    return sum / size;
}

double covariance(double* x, double* y, int size, double mean_x, double mean_y) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += (x[i] - mean_x) * (y[i] - mean_y);
    }
    return sum / size;
}

void linear_regression(double* x, double* y, int size, double* b0, double* b1) {
    double mean_x = mean(x, size);
    double mean_y = mean(y, size);
    double var_x = variance(x, size, mean_x);
    double cov_xy = covariance(x, y, size, mean_x, mean_y);

    *b1 = cov_xy / var_x;
    *b0 = mean_y - (*b1 * mean_x);
}


double predict(double b0, double b1, double x) {
    return b0 + b1 * x;
}

int main() {
    double age[] = {18, 25, 30, 35, 40, 45, 50};
    double cost[] = {2000, 3000, 4000, 5000, 6000, 7000, 8000};
    int size = sizeof(age) / sizeof(age[0]);

    double b0, b1;
    linear_regression(age, cost, size, &b0, &b1);

    printf("Linear Regression Model: cost = %.2f + %.2f * age\n", b0, b1);

    double age_to_predict = 28;
    double predicted_cost = predict(b0, b1, age_to_predict);
    printf("Predicted insurance cost for age %.2f: %.2f\n", age_to_predict, predicted_cost);

    return 0;
}

    