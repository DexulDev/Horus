#include <string>

class Input{

  public:
    std::string read();

  private:
    bool sintaxValidate(std::string i);
    std::string separateArguments(std::string i);

};
