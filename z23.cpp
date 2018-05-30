#include <iostream>
 
int main()
{
    const std::string sl = "mak";
    std::string st;
    unsigned char i, k;
    std::cout << "Заданное слово " << sl << std::endl;
    std::cout << "Введите текст\n";
    std::getline(std::cin, st);
    k = 0;
    for (i = 0; i < sl.length(); ++i) {
        k += st.find(sl[i]) != std::string::npos;
    }
    std::cout << (k == 3 ? "Yes" : "No");
 
    std::cin.get();
    return 0;
}