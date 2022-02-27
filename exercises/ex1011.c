// ex1011.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Prototypes

float ConvertToCelcius(float f);
float ConvertToFahrenheit(float f);

#pragma endregion

#pragma region Constructors

/// <remarks />
int main()
{
  float tempF;
  float tempC;

  printf("Temperature in fahrenheit: ");
  scanf("%f", &tempF);

  printf("%.1fF is %.1fC\n\n",tempF,ConvertToCelcius(tempF));

  printf("Temperature in celcius: ");
  scanf("%f", &tempC);

  printf("%.1fC is %.1fF\n",tempC,ConvertToFahrenheit(tempC));

  return 0;

}

#pragma endregion

#pragma region Functions

/// <returns>f converted to celcius as string</returns><param name="f">float</param>
float ConvertToCelcius(float f) { return (f-32)/1.8; }

/// <returns>c converted to fahrenheit as string</returns><param name="c">float</param>
float ConvertToFahrenheit(float c) { return c*1.8+32; }

#pragma endregion
