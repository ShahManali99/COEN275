#include <iostream>
using namespace std;

const int capacity = 50;
class ShoppingCart {
    int itemCode[capacity];
    float itemPrice[capacity];
    int count = 0;

    public:
        void addItem();
        void removeItem();
        void displayAllItems();
        void totalValue();

};
void ShoppingCart :: addItem() {
    cout << "Enter new item code : ";
    cin >> itemCode[count];
    cout << "Enter new item price : ";
    cin >> itemPrice[count];
    count++;
}
void ShoppingCart :: removeItem() {
    int a;
    cout << "Enter item code : ";
    cin >> a;
    for(int i=0;i<count;i++) {
        if (itemCode[i] == a) {
            int temp = itemCode[count-1];
            itemCode[count-1] = itemCode[i];
            itemCode[i] = temp;
            temp = itemPrice[count-1];
            itemPrice[count-1] = itemPrice[i];
            itemPrice[i] = temp;
            count-=1;
            cout << "Item removed."
        }
    }
}
void ShoppingCart :: displayAllItems() {
    cout << "Code : Price" << endl;
    for(int i=0; i<count; i++) {
        cout << itemCode[i] << " : " << itemPrice[i] << endl;
    }
}
void ShoppingCart :: totalValue() {
    int total = 0;
    for(int i=0; i<count; i++) {
        total += itemPrice[i];
    }
    cout << "Total Value : " << total << endl;
}
int main () {
    ShoppingCart cart;
    int choice;
    do {
        cout << "You can do the following: \n";
        cout << "1 : Add an item \n";
        cout << "2 : Delete an item \n";
        cout << "3 : Display all items \n";
        cout << "4 : Display Total Value \n";
        cout << "5 : Quit \n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cart.addItem();
                break;
            case 2:
                cart.removeItem();
                break;
            case 3:
                cart.displayAllItems();
                break;
            case 4:
                cart.totalValue();
                break;
            case 5:
                break;
            default:
                cout << "Invalid Output \n";	
        }
    } while(choice != 5);
    return 0;
}