// ex1012.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Prototypes

void Limit(int stop);

#pragma endregion

#pragma region Constructors

/// <remarks />
int main()
{
  int s;

  printf("Enter a stopping value (0-100): ");
  scanf("%d",&s);

  Limit(s);

  return 0;

}

#pragma endregion

#pragma region Functions

/// <returns>f converted to celcius as string</returns><param name="f">float</param>
void Limit(int stop)
{
  for (int x = 0; x < 100; x++)
  {
    printf ("%d ",x);
    if (x == stop) { print("You won!"); return; }
  }

  print("I won!");

}

#pragma endregion
