#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float temperature;
    int heartRate, bloodPressure;
    printf("Enter body temperature (°C): ");
    scanf("%f", &temperature);
    printf("Enter heart rate (bpm): ");
    scanf("%d", &heartRate);
    printf("Enter blood pressure (mmHg): ");
    scanf("%d", &bloodPressure);
    printf("\n--- Patient Vitals ---\n");
    printf("Body Temperature: %.1f °C\n", temperature);
    printf("Heart Rate: %d bpm\n", heartRate);
    printf("Blood Pressure: %d mmHg\n", bloodPressure);	
	return 0;
}
