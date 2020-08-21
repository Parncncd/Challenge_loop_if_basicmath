#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
    double num1, num2, sum = 0, n, Average, SUM = 0, SD;
    scanf("%lf %lf", &num1, &num2);


    if (num1 > num2) {
        for (int i = num1; i >= num2; i--) {
            printf("%d ", i);
            sum += i;
        }
        printf("\n");
        n = num1 - num2 + 1;
    }
    else if (num1 < num2) {
        for (int j = num1; j <= num2; j++) {
            printf("%d ", j);
            sum += j;
            n = num2 - num1 + 1;
        }
        printf("\n");
    }
    else {
    }
    Average = sum / n;
    printf("Average : %.1lf", Average);
    if (num1 > num2) {
        for (double k = num1; k >= num2; k--) {

            SUM += (k - Average) * (k - Average);
        }
    }
    else if (num1 < num2) {
        for (double l = num1; l <= num2; l++) {

            SUM += (l - Average) * (l - Average);
        }
    }
    else {
    }

    SD = sqrt(SUM / (n - 1));
    printf("\nSD : %.2lf\n", SD);

    return 0;
}