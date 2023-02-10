#include <iostream>

// using namespace std; NO NO NO NO NO

int main() {
    int i = 9;
    //std::cout << "Write and integer:\n";
    //std::cin >> i;
    if (i < 0) { 
        std::cout << "negative\n"; 
    } else if (i == 0) {
        std::cout << "zero\n"; 
    } else {
        std::cout << "positive\n"; 
    }

    if ((3<4) && (i <= 7)) {
        std::cout << "se cumplio\n"; 
    }


    return 0;
}