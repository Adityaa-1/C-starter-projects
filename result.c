#include <stdio.h>

int main() {

    int physics, chemistry, maths;

    printf("Enter marks here (Out of 100):\n");
    
    printf("Physics:");
    scanf("%d", &physics);
    printf("\n");

    printf("Chemistry:");
    scanf("%d", &chemistry);
    printf("\n");

    printf("Maths:");
    scanf("%d", &maths);
    printf("\n");

    // Pass or fail analysis

   if  (physics>=40 && chemistry>=40 && maths>=40){
    printf("This student is PASSED\n");
}

else if((physics<40 && chemistry>=40 && maths>=40) ||
        (physics>=40 && chemistry<40 && maths>=40) ||
        (physics>=40 && chemistry>=40 && maths<40) ){
    printf("This student failed in one subject:");

    if (physics<40) printf("Physics\t");
    if (chemistry<40) printf("Chemistry\t");
    if (maths<40) printf("Maths\t");
    printf("\n");
}

else if ((physics<40 && chemistry<40 && maths>=40) ||
        (physics>=40 && chemistry<40 && maths<40) ||
        (physics<40 && chemistry>=40 && maths<40) ){
    printf("This student failed in two subjects:");

    if (physics<40) printf("Physics\t");
    if (chemistry<40) printf("Chemistry\t");
    if (maths<40) printf("Maths\t");
    printf("\n");
        }

else {
    printf("This student has FAILED\n");
}

// Average Calculation

float average = (physics+chemistry+maths)/3.0;

if (physics>=40 && chemistry>=40 && maths>=40) printf("Average marks = %.2f\n", average);

else if (physics<40 && chemistry<40 && maths<40) printf("Average marks = %.2f\n", average);

else if (average >= 40 &&
        ( (physics<40 && chemistry>=40 && maths>=40) ||
          (physics>=40 && chemistry<40 && maths>=40) ||
          (physics>=40 && chemistry>=40 && maths<40))){
     printf("PASSED with compartment\n");
    printf("Average marks = %.2f\n", average);
}

else {
    printf("FAILED due to less average marks\n");
    printf("Average marks = %.2f\n", average);
}

// Grade assignment

if (average >= 40) {
        printf("Grade: ");
        if (average >= 90) printf("A+\n");
        else if (average >= 75) printf("A\n");
        else if (average >= 60) printf("B\n");
        else if (average >= 50) printf("C\n");
        else if (average >= 40) printf("D\n");
    } 

else {
        printf("Grade: F\n");
}

    return 0;

}