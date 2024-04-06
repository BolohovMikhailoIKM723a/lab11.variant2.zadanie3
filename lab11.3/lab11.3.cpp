#include <iostream>
#include <Windows.h>

using namespace std;
int countOccurrences(int* x, int* y, int n, int m) {
    int count = 0;
    for (int i = 0; i < m; ++i) {
        if (*y == *(x + 1)) {  
            count++;
        }
        y++;  
    }
    return count;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, m;
    cout << "введіть розмірність першого масиву: ";
    cin >> n;
    int* x = new int[n];  
    cout << "введіть елементи першого масиву:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(x + i);  
    }
    cout << "введіть розмірність другого масиву: ";
    cin >> m;
    int* y = new int[m];  
    cout << "введіть елементи другого масиву:\n";
    for (int i = 0; i < m; ++i) {
        cin >> *(y + i); 
    }
    int occurrences = countOccurrences(x, y, n, m);
    cout << "кількість входжень другого елементу першого масиву у другий масив: " << occurrences << endl;
    delete[] x;
    delete[] y;

    return 0;
}