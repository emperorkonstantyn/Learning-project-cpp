// russian_win32_cpp.cpp
#include <iostream>
#include <locale>

int main()
{
  using namespace std;
  locale::global(locale("Russian"));
  cout << "Текст" << endl;
  return EXIT_SUCCESS;
}