#include <iostream>
#include "colours.h"
int main(){
    std::cout << bg.red << cl.reset << std::endl;
    std::cout  << "hello" << cl.reset << std::endl;
    return 0;
}