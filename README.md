# colours-for-terminal-c--linux
I have writtin a basic library that allows you to print coloured text to the screen.
```c++
#include <iostream>
#include "colours"

int main(){
    cout << fg.green << "hello world in green text" << cl.reset << endl;  
}
```
Output:

[#1589F0]hello world in green text '#1589F0'
