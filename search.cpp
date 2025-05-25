#include <iostream>
#include <string>
using namespace std;

int main() {
    string items[3] = {"shirts", "shoes", "watches"};
    char status;
    
    for (int i = 0; i < 3; i++) {
        cout << "Item: " << items[i] << endl;
        cout << "Status (I/O): ";
        cin >> status;
        
        switch(status) {
            case 'I':
                cout << "Available" << endl;
                break;
            case 'O':
                cout << "Out of stock" << endl;
                break;
            default:
                cout << "Invalid" << endl;
        }
    }
    return 0;
}
