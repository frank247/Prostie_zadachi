#include <iostream>
#include <string>
 
int main()
{
    const std::string str = "aaa abbb ccc";
    int counterA = 0, counterB = 0;
    for (const auto c : str)
    {
        if (c == 'a')
            counterA++;
        else if (c == 'b')
            counterB++;
    };
    std::cout << std::boolalpha << (counterB < counterA) << std::endl;
}
