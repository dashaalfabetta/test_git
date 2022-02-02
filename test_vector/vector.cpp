#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input_value;
    vector<int> sequence;
    
    while (true) {
        cin >> input_value;
        if (input_value == 0) {
            break;
        }
        sequence.push_back(input_value);   
    }

    int n = sequence.size();
    for (int i = 0; i < n; i++) { 
        cout << "Вывод:" << sequence[i] << endl;
    }
    
    return 0;
}