#include <iostream>
#include <chrono>
#include <cstring>
#include <string>

#define MAX_LEN 10000

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

std::string input()
{
  std::cout << ">> ";
  std::string inp;

  while(std::getline(std::cin, inp)) 
  {
    break;
  }

  //char *inp=new char[MAX_LEN];
  //fgets(inp, MAX_LEN, stdin);
  std::cout << inp << std::endl;
  
  //printf("the char is: %s\n", inp);

  return inp;
}

void to_change(char *str, size_t maxlen)
{
  std::string inp;
  input();
  
  //make an if statement in main. if char[] is empty change to an empty string.
  //and then return a message of an idiot using.

  strncpy(str, "", maxlen-1);
  str[maxlen] = '\0';

  //inp = str;
  //return inp;
  
}


int main()
{

  std::string inp;

  initializing();
  
  //clock_t start, end;
  auto start = std::chrono::high_resolution_clock::now();
  //start = clock();
  
  input();
  
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> duration = end - start;
  
  //end = clock();
  printf("the time is: %lf seconds\n", duration);
  

  /*
  if(inp == ' ')
  {
    to_change(&inp, sizeof &inp);
    std::cout << inp;
  }
  */

  std::cout << inp;
  //printf("the char is: %s\n", inp);
  return 0;
}
