
#include <iostream>
using namespace std;



int main()
{
  int ul = 20;
  int cn = 3;
  int i;

  while (cn < ul)
  {
    for (i = 2; i <= cn; i++)
    {
      if (cn % i == 0)
      {
        break;
      }
    }
    if (i == cn)
    {
      cout << cn << endl;
    }
    cn++;
  }

  return 0;
}
