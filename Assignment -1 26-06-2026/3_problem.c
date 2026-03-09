#include <stdio.h>

// Function Prototypes
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main()
{
    float c = 25.0;
    float f = 77.0;

    printf("Celsius to Fahrenheit:\n");
    printf("%.2f C = %.2f F\n", c, celsiusToFahrenheit(c));

    printf("%.2f F = %.2f C\n", f, fahrenheitToCelsius(f));

    return 0;
}

// Function Definitions
float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}