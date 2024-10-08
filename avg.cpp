#include <iostream>

int main() {
    int n;
    int count = 0;
    float avg = 0;
    int sum = 0;
    
    for (int i = 0; i < 10; i++) {
        std::cin >> n;
        sum = sum + n;
    }

    avg = sum / 10.0;
    
    std::cout << "El promedio de los 10 enteros es " << avg << std::endl;
    return 0;
}