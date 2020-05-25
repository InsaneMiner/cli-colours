# colours-for-terminal-c-linux-and-mac
I have writtin a basic library that allows you to print coloured text to the screen.
c++
```c++
#include <iostream>
#include "colours.h"

int main(){
    cout << fg.green << "hello world in green text" << cl.reset << endl;  
}
```
Output:
hello world in green text

the output will be green but i cant get green text in my readme.md file

has been tested on linux but not mac but should work.
