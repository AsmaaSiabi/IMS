#include <iostream>
#include <string>
using namespace std;

int main() {
    string categories[2] = {"Electronics", "Clothing"};
    int sales;
    
    cout << "=== Sales Report Generator ===" << endl;
    
    for (int i = 0; i < 2; i++) {
        cout << "Enter sales for " << categories[i] << ": ";
        cin >> sales;
        
        switch(i) {
            case 0:
                cout << "Electronics Sales: " << sales << endl;
                break;
            case 1:
                cout << "Clothing Sales: " << sales << endl;
                break;
        }
    }
    
    cout << "Report generated successfully!" << endl;
    return 0;
}
