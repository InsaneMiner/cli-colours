#include <iostream>
#include "colours.h"
int main(){
    std::cout << bg.red << fg.blue << "Hello World"<< cl.reset << std::endl;
    return 0;
}
