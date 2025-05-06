#include <iostream>
using namespace std;

// Function Prototypes
void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);
int isPrime(int n); 

void getTwoValues(int &begin, int &end) {
    cout << "Enter two integers for the following: (begin < end): ";
    cin >> begin >> end;

    while (begin >= end) {
        cout << "Invalid input. The first number must be less than the second.\n";
        cout << "Enter two integers  for the following: (begin < end): ";
        cin >> begin >> end;
    }
}

int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int getNextPrime(int begin) {
    int num = begin + 1;
    while (1) {
        if (isPrime(num) == 1)
            return num;
        num++;
    }
}

int getPrevPrime(int end) {
    int num = end - 1;
    while (num >= 2) {
        if (isPrime(num) == 1)
            return num;
        num--;
    }
    return -1; 
}