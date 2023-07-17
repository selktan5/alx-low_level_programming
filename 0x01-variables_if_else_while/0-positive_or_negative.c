cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
srand(time(0));
int n = rand() % (2 * RAND_MAX) - RAND_MAX;

std::cout << "The number " << n << ": ";

if (n > 0) {
std::cout << "is positive";
} else if (n < 0) {
std::cout << "is negative";
} else {
std::cout << "is zero";
}

std::cout << std::endl;

return 0;
}
