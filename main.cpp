#include <iostream>
#include <chrono>

void initializing()
{
  for(int i = 0; i < 1; i++)
  {
    std::cout << "!>";
    for(int j = 0; j < 69; j++)
    {
      std::cout << "=";
    }
    std::cout << "<!\n"; 
  }
  std::cout << "\n";
  
  std::cout << "Press Enter to beggin. You can always stop the program by holding Ctrl+c." << std::endl;

  std::cout << "\n";
  for(int i = 0; i < 1; i++)
  {
    std::cout << "!>";
    for(int j = 0; j < 69; j++)
    {
      std::cout << "=";
    }
    std::cout << "<!\n"; 
  }
  std::cout << "\n";
}

char input(char inp)
{
  std::cout << ">> ";
  std::cin >> inp;

  return inp;
}

int main()
{
  char inp;
  
  initializing();
  input(inp);
  
  return 0;
}
