// ex1006.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Prototypes

void graph(int count);

#pragma endregion

#pragma region Constructors

/// <remarks />
int main()
{
  int value=2;

  while (value<64)
  {
    graph(value);
    printf("Value is %d\n",value);
    value=value*2;
  }

  return 0;

}

#pragma endregion

#pragma region Functions

/// <summary>Technically a subroutine</summary><param name="count">int</param>
void graph(int count)
{
  for (int x = 0; x < count; x++) putchar('*');
  putchar('\n');
}

#pragma endregion
