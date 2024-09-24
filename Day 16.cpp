#include <iostream>
#include <algorithm> // For std::gcd in C++17 or later
using namespace std;

// Function to calculate LCM using GCD
long long find_lcm(long long N, long long M) {
    // Calculate GCD using __gcd() function from algorithm header
    long long gcd = __gcd(N, M);
    // Calculate LCM using the formula LCM(N, M) = (N * M) / GCD(N, M)
    long long lcm = (N / gcd) * M; // Avoid overflow by dividing first
    return lcm;
}

int main() {
    // Test cases
    cout << find_lcm(4, 6) << endl;            // Output: 12
    cout << find_lcm(5, 10) << endl;           // Output: 10
    cout << find_lcm(7, 3) << endl;            // Output: 21
    cout << find_lcm(1, 987654321) << endl;    // Output: 987654321
    cout << find_lcm(123456, 789012) << endl;  // Output: 8117355456

    return 0;
}
