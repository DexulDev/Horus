#include<iostream>
#include<string>

void clear(){
  for(int i = 0;i<150;i++) std::cout << std::endl;
}

void screen(){
  std::cout << std::endl;
  std::cout << "> ";
}

void help(){
  clear();
  std::cout << std::endl << "Available commands: " << std::endl;
  std::cout << "  kill" << std::endl;
  std::cout << "  create" << std::endl;
  std::cout << "  status" << std::endl;
  std::cout << "  help" << std::endl;
  std::cout << "  exit" << std::endl;
  screen();
}

void exit(){
  clear();
  std::cout << "Thanks, have a great day!";
}

int main(){
  std::string _;
  std::string r;
  //Input input = new Input();
  //Output output = new Output();
  while(true){
    screen();
    std::getline(std::cin, r);
    if(r == "help"){
      help();
    }else if(r == "exit"){
      exit();
      return 0;
    }else{ //keep this to last else because lack of switch method 
      clear();
      std::cout << "Error: Unknown command...\n" << "Press enter to exit";
      std::getline(std::cin, _);
      screen();
    }
    //TODO: create, kill, status w arguments
  }
}
