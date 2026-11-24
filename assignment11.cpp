#include <iostream>
#include <string>

using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int empID1 = 1111, empID2 = 1112;
    cout << "Before swap - Employee IDs: " << empID1 << ", " << empID2 << endl;
    swapValues(empID1, empID2);
    cout << "After swap  - Employee IDs: " << empID1 << ", " << empID2<<endl;
cout<<"*************************************************************************"<<endl;
    string room1 = "UTK auditorium", room2 = "Lab-217";
    cout << "Before swap - Rooms: " << room1 << ", " << room2 << endl;
    swapValues(room1, room2);
    cout << "After swap  - Rooms: " << room1 << ", " << room2<<endl;
cout<<"*************************************************************************"<<endl;
    char priority1 = 'H', priority2 = 'L';
    cout << "Before swap - Priorities: " << priority1 << ", " << priority2 << endl;
    swapValues(priority1, priority2);
    cout << "After swap  - Priorities: " << priority1 << ", " << priority2 << endl;
cout<<"*************************************************************************"<<endl;
    return 0;
}
