#include "display.h"
#include "input.h"

#include <iostream>

void LoadFromFile(){};
void WriteToFile(){};

int main(int argc, char* argv[]) {
  if(argc != 0) {
    LoadFromFile();
    DisplayToTerminal();
  }
  while(true) {
    UserInput();
    DisplayToTerminal();
  }
  WriteToFile();
}
