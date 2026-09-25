#include "../include/Input.hpp"
#include<iostream>

std::string Input::read(){
  std::string r;
  std::getline(std::cin, r);
  if(sintaxValidate(r)){
  }else{
    //TODO: this cout needs to be on output.cpp but i don't have it
    std::cout << "Error: Unknown command...\n" << "Press enter to exit";

  }
  return r;
}

//need some like create name and validate, but it doesn't seems hard
bool sintaxValidate(std::string i){
  if(i == "help" || i == "exit") return true;
  return false;
}

