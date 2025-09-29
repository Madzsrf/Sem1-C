#include <stdio.h>

void main() {
    float w,h,bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f",&w);
    printf("Enter height in meters: ");
    scanf("%f",&h);

    bmi = w/(h*h);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 15) {
        printf("Category: Starvation\n");
    } else if (bmi>=15.1&&bmi<=17.5) {
        printf("Category: Anorexic\n");
    } else if (bmi>=17.6&&bmi<=18.5) {
        printf("Category: Underw\n");
    } else if (bmi>=18.6&&bmi<=24.9) {
        printf("Category: Ideal\n");
    } else if (bmi>=25&& bmi<=25.9) {
        printf("Category: Overw\n");
    } else if (bmi>=30&&bmi<=39.9) {
        printf("Category: Obese\n");
    } else if (bmi>=40) {
        printf("Category: Morbidity Obese\n");
    } else {
        printf("Invalid BMI value.\n");
    }
}