#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int reading, total = 0;
    float average;
    for(int i = 1; i <= 4; i++) {
        printf("Enter BP reading %d (mmHg): ", i);
     total += reading;
    }
    average = total / 4.0;

    printf("\nTotal BP: %d mmHg\n", total);
    printf("Average BP: %.2f mmHg\n", average);		
	return 0;
}
