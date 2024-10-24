#include <iostream>
using namespace std;
#define MAX 3 
class PlateStack{
private:
    int stack[MAX];  
    int top;         
public:
    PlateStack(){
        top=-1;  
    }
    void push(int plate) {
        if (top == MAX - 1) {
            cout << "Stack is full! Can't add more plates." << endl;
        } else {
            top++;
            stack[top] = plate;
            cout << "Plate " << plate << " added to the stack." << endl;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack is empty! Can't remove any plates." << endl;
        } else {
            cout << "Plate " << stack[top] << " removed from the stack." << endl;
            top--;
        }
    }
    void peek() {
        if (top == -1) {
            cout << "Stack is empty! No plate on top." << endl;
        } else {
            cout << "Plate " << stack[top] << " is on top of the stack." << endl;
        }
    }
    bool isEmpty() {
        return (top == -1);
    }
    bool isFull() {
        return (top == MAX - 1);
    }
};

int main() {
    PlateStack plates;
    int choice, plate;
    do {
cout<<”add a plate”<<endl;
cout<<”remove a plate”<<endl;
cout<<”check top plate”<<endl;
cout<<”exist”<<endl;
 cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter plate number to add: ";
                cin >> plate;
                plates.push(plate);
                break;
            case 2:
                plates.pop();
                break;
            case 3:
                plates.peek();
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
