#include <stdio.h>

/* Function Prototypes */
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    float c = 25.0;
    float f = 77.0;

    float resultF = celsiusToFahrenheit(c);
    float resultC = fahrenheitToCelsius(f);

    printf("Celsius to Fahrenheit:\n");
    printf("%.2f°C = %.2f°F\n\n", c, resultF);

    printf("Fahrenheit to Celsius:\n");
    printf("%.2f°F = %.2f°C\n", f, resultC);

    return 0;
}

/* Function Definitions */

float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}