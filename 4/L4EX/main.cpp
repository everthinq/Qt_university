#include "first.h"
#include "second.h"
#include "third.h"

int main()
{
    First first;
    Second second;
    Third third;

    int switcher = 0;
    while (switcher != 4)
    {
        system ("cls");

        cout << "     First example = 1" << endl;
        cout << "    Second example = 2" << endl;
        cout << "     Third example = 3" << endl;
        cout << "              EXIT = 4" << endl;

    cout << endl;
    cin >> switcher;

      switch (switcher)
      {
        case 1:
        {
          first.f_example();
          break;
        }

        case 2:
        {
          second.s_example();
          break;
        }

        case 3:
        {
          third.t_example();
          break;
        }
      }

     getch();
    }
}

