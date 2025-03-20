#include <iostream>
#include <unordered_set>
using namespace std;



//Write a program that stores N integers in an unordered_set<int>. Then, take a number as input and check if it 4exists in the set. Print "Found" or "Not Found".


int main() {
    
    int N, num, searchNum;
    unordered_set<int> numbers;

    cout << "Enter the number of elements: ";
    cin >> N;

    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> num;
        numbers.insert(num);
    }

    cout << "Enter number to search: ";
    cin >> searchNum;

    if (numbers.find(searchNum) != numbers.end()) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
