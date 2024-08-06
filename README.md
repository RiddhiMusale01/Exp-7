# Exp-7
```
#include <iostream>
using namespace std;

int main() {
    int a1[5] = {9, 3, 8, 6, 7}; 
    int a2[] = {2, 1, 6, 3, 4}; 
    int a3[5] = {8, 6, 7};

 
  cout << "\n Traditional Method: ";
  for (int i = 0; i < 5; ++i) {
    cout << a3[i] << "  ";
  }
  cout << endl;



   return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/24629bbf-5dc4-490d-83df-9226e74d4c80)

```
#include <iostream>
#define SIZE 7
using namespace std;

int main() {
    int a1[SIZE];

    
    cout << "Enter " << SIZE << " elements of array: ";
    for (int index = 0; index<SIZE;index++) {
        cin >> a1[index];
    }
  cout << endl;

    
    for (int j : a1) {
        cout << j << "  ";
    }

   return 0;
}
```
O/P:
```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
   
    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/0b8edcf6-02a9-4951-b8cc-70fb9bea29e4)

```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }

    cout << "The reversed array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/1d6539a9-4c0f-4081-8047-d5c69618da9f)




