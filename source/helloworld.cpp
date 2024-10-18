#include <iostream>
#include <vector>

using namespace std;

int main() {
    // ASCII values for "Hello World"
    vector<int> asciiValues = {72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100};
    
    cout << "Constructing 'Hello World' from ASCII values:" << endl;
    
    // Print each ASCII value as a character
    for (int ascii : asciiValues) {
        cout << static_cast<char>(ascii);
    }
    
    cout << endl; // For a new line at the end
    return 0;
}
