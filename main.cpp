#include <iostream>

int main()
{
  for (int i=0; i!=10; ++i)
  {
    //Allocate memory here
    int * const p = new int;

    if (!p) return 1;

    //delete p; //Oop, forgotten!
  }
}
