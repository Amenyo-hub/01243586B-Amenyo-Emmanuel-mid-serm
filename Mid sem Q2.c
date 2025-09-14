#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float temp;

    printf("Enter body temperature (°C): ");
    scanf("%f", &temp);
    if (temp < 35)
        printf("Category: Low temperature.\n");
    else if (temp <= 37.5)
        printf("Category: Normal temperature.\n");
    else
        printf("Category: High temperature.\n");	
	return 0;
}
