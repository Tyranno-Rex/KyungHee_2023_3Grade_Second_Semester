#include <iostream>
#include <stdlib.h>

int main(){
    int rhombus;
    while (1)
    {
        std::cin >> rhombus;
        if (rhombus == 0) {
            std::cout << "이용해주셔서 감사합니다.\n";
            return 0; 
        }
        else if (rhombus % 2 == 0) {
            std::cout << "Error: 잘못된 입력입니다.\n";
        }
        else{
            int middle = rhombus / 2;
            for (int i = 0; i < rhombus; i++){
                for (int j = 0; j < rhombus; j++){
                    if (middle >= i){
                        if (middle + i == j || middle - i == j){
                            std::cout << "*";
                        }
                    }
                    else {
                        if (middle + (rhombus - i - 1) == j 
                            || middle - (rhombus - i - 1) == j) {
                            std::cout << "*";
                        }
                    }
                    std::cout << " ";
                }
                std::cout << "\n";
            }
        }
    }

}