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

std::string to_change(/*char *str, size_t maxlen*/)
{
  std::string inp;

  inp = "that strig is empty and it's impossible to calculate anything";
 
  //std::cout << "int the to_change: " << inp << std::endl;

  //make an if statement in main. if char[] is empty change to an empty string.
  //and then return a message of an idiot using.
  //print that strig is empty and it's impossible to calculate anything
  //strncpy(str, "", maxlen-1);
  //str[maxlen] = '\0';

  //inp = str;
  return inp;
  
}

float wpm(float ur_wpm)
{
  double duration;
  int length, num_words;
  std::cout << duration;
  ur_wpm = num_words / duration;

  return ur_wpm;
}

int char_count(int length)
{ 
  std::string inp;

  length = inp.length();

  return length;
}

int words_count(int num_words)
{
  int length;

  num_words = length/5;
  
  return num_words;
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
  
  if(inp.empty())
  {
    //to_change(inp, sizeof inp)
    to_change();
    std::cout << inp;
  }

  float ur_wpm;
  int length, num_words;

  printf("chars: %s\nwords: %d\nwpm: %f\n", char_count(length), words_count(num_words), wpm(ur_wpm));

  return 0;
}
