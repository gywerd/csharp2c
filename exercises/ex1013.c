// ex1013.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#define GRID 3

#pragma region Prototypes

void Forward(void);
void Backwards(void);

#pragma endregion

#pragma region Constructors

/// <remarks />
int main()
{
  print("GRID forward:");
  Forward();

  print("GRID backwards:");
  Backwards();

  return 0;

}

#pragma endregion

#pragma region Functions

/// <returns>f converted to celcius as string</returns><param name="f">float</param>
void Forward(void)
{
  for (int x=0;x<GRID;x++)
  {
    for (int y=0;y<GRID;y++) printf("%d:%d\t",x,y);
    putchar('\n');
  }
}

void Backwards(void)
{
  for (int x=GRID-1;x>=0;x--)
  {
    for (int y=GRID-1;y>=0;y--) printf("%d:%d\t",x,y);
    putchar('\n');
  }
}

#pragma endregion
