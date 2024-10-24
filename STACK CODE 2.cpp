#include <iostream>
#include <string>
using namespace std;


struct Node {
    string item;
    Node* next;
};

class GroceryList {
private:
    Node* head;  

public:
    
    GroceryList() {
        head = nullptr;
    }

   
    void addItem(string newItem) {
        Node* newNode = new Node();
        newNode->item = newItem;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;  
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;  
        }
        cout << newItem << " added to the grocery list." << endl;
    }

    
    void removeItem(string removeItem) {
        if (head == nullptr) {
            cout << "The list is empty. Nothing to remove." << endl;
            return;
        }

        if (head->item == removeItem) {
            Node* temp = head;
            head = head->next;  
            delete temp;
            cout << removeItem << " removed from the grocery list." << endl;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr && current->item != removeItem) {
            previous = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << removeItem << " not found in the list." << endl;
        } else {
            previous->next = current->next;
            delete current;
            cout << removeItem << " removed from the grocery list." << endl;
        }
    }

    
    void displayList() {
        if (head == nullptr) {
            cout << "The grocery list is empty." << endl;
            return;
        }

        Node* temp = head;
        cout << "Grocery List:" << endl;
        while (temp != nullptr) {
            cout << "- " << temp->item << endl;
            temp = temp->next;
        }
    }
};

int main() {
    GroceryList list;
    int choice;
    string item;

    do {
    	cout<<" 1. add a new item"<<endl;
    	cout<<"2. remove an item"<<endl;
    	cout<<"3. view all items "<<endl;
    	cout<<"4. existing"<<endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  

        switch (choice) {
            case 1:
                cout << "Enter the item to add: ";
                getline(cin, item);
                list.addItem(item);
                break;

            case 2:
                cout << "Enter the item to remove: ";
                getline(cin, item);
                list.removeItem(item);
                break;

            case 3:
                list.displayList();
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
