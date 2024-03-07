#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findPrimes(int num) {
    vector<int> primes;
    for (int i = 2; i <= sqrt(num); ++i) {
        while (num % i == 0) {
            primes.push_back(i);
            num /= i;
        }
    }
    if (num > 1) {
        primes.push_back(num);
    }
    return primes;
}

void generateDivisors(vector<int>& primes, int index, int current, vector<int>& divisors) {
    if (index == primes.size()) {
        divisors.push_back(current);
        return;
    }
    generateDivisors(primes, index + 1, current, divisors);
    generateDivisors(primes, index + 1, current * primes[index], divisors);
}

vector<int> findDivisors(int num) {
    vector<int> primes = findPrimes(num);
    vector<int> divisors;
    generateDivisors(primes, 0, 1, divisors);
    return divisors;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    vector<int> divisors = findDivisors(num);

    cout << "Divisors of " << num << " are: ";
    for (int i = 0; i < divisors.size(); ++i) {
        cout << divisors[i] << " ";
    }
    cout << endl;

    return 0;
}
