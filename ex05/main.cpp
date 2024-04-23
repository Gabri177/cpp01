#include "main.hpp"

int main(void){

    std::string str;
    Harl        cmp;

    retry_input:
        std::cout << "Complain level : ";
        std::cin >> str;
        cmp.complain(str);
        if (str != "EXIT")
            goto retry_input;
    return 0;
}