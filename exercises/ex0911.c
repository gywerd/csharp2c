// ex0911.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
  for (int a='A';a<'G';a++)
  {
    for (int c = 1; c < 8; c++)
    {
      printf("%c%d\t",a,c);
    }
    putchar('\n');
  }

  return 0;

}

#pragma endregion

