#include<iostream>
#include<string>
#include "../include/Input.hpp"

//TODO: Output stuff
void clear(){
  for(int i = 0;i<150;i++) std::cout << std::endl;
}

//TODO: Output stuff
void screen(){
  std::cout << std::endl;
  std::cout << "> ";
}

//TODO: Output stuff
void help(){
  clear();
  std::cout << std::endl << "Available commands: " << std::endl;
  std::cout << "  kill" << std::endl;
  std::cout << "  create" << std::endl;
  std::cout << "  status" << std::endl;
  std::cout << "  help" << std::endl;
  std::cout << "  exit" << std::endl;
}

//TODO: Output stuff
void exit(){
  clear();
  std::cout << "Thanks, have a great day!";
}

int main(){
  std::string _;
  std::string r;
  Input input;
  //TODO: Output output = new Output();
  while(true){
    //TODO: add command logs to the main screen
    //TODO: Output stuff
    screen();
    r = input.read(); 
    if(r == "help"){
      //TODO: Output stuff
      help();
    }else if(r == "exit"){
      //TODO: Output stuff
      exit();
      return 0; 
    }else{
      //TODO: Output stuff
      clear();
      _ = input.read();
    }
    //TODO: create, kill, status w arguments
  }
}
