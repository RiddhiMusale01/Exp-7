# Experiment 7

# AIM:

To study and implement C++ Arrays and Strings.

# SOFTARE: 
Visual Studio Code

# THEORY:
ARRAYS:

Arrays in C++ are collections of elements of the same type stored in contiguous memory locations. They provide a way to group multiple values under a single variable name, which can be accessed using an index.

An array is declared by specifying the type of its elements followed by square brackets [] and the size of the array. For example, int numbers[5]; declares an array of 5 integers.

Elements of an array are accessed using indices, with the first element having an index of 0. For instance, numbers[0] refers to the first element.

C++ supports multidimensional arrays, such as 2D arrays, declared with multiple sets of square brackets. For example, 
int matrix[3][4]; declares a 3x4 matrix.

STRINGS:

A string refers to a sequence of characters.The #include <string> in C++ is used to include the standard library's string class, which provides a convenient and powerful way to work with text strings. Strings are essentially arrays of characters.
Strings are used to store words and text. They are also used to store data, such as numbers and other types of information. Strings in C++ can also be defined using the std::string class.

# CODES:

1) Declaring Arrays

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

2) Creating input and output.

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

3) Reversing Arrays.

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

4) Searching elements in an array.

```
#include<iostream>
using namespace std;
int main() {
    int marks[5], i, j, num, flag=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}
```
O/P:

![image](https://github.com/user-attachments/assets/3c4448a4-9ec5-4586-b14c-0dbbc92508e1)

5) Sum and average of an array.

```
#include<iostream>
using namespace std;

int main() {
    int a1[4], i, j;
    float sum=0, avg;
    for(i=0;i<4;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(j=0;j<4;j++) {
        sum = sum + a1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/4;
    cout<<"Average = "<<avg;
}

```

O/P:

![image](https://github.com/user-attachments/assets/4bf9df0b-7abb-4565-9995-303db6245014)


6) Maximum and Minimum element of an array.
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

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "Maximum value in the array: " << max << endl;
    cout << "Minimum value in the array: " << min << endl;

    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/eba21505-9465-4504-aa04-8dfb2c6cdd86)

7)Printing string input:

```
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:"<<endl;
    cin>>s;
    cout<<"Entered string is:"<<s<<endl;
    return 0;
    
}
```
o/p:

![image](https://github.com/user-attachments/assets/d07d5ec8-27a8-476f-a2d1-525258218958)

8)Concatenation of Strings:
```
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter first string:"<<endl;
    cin>>s;
    cout<<"Enter second string:"<<endl;
    cin>>t;
    cout<<"Concatenation of strings is:"<<s+t<<endl;
    return 0;
}
```
o/p;

![image](https://github.com/user-attachments/assets/83d8af9d-5aa3-4eb0-8538-da39b7fb3ecd)

9)Palindrome of string:
```
#include<iostream>
#include<string>
using namespace std;

int main() {
    string a;
    cout<<"Enter string:";
    cin>>a;

    int n = a.length();
    int i;

    for (i=0;i<n/2;i++) {
        if (a[i]!=a[n-1-i]) {
            break; 
        }
    }

    if (i==n/2) {
        cout<<"String is a palindrome."<<endl;
    } else{
        cout<<"String is not a palindrome."<< endl;
    }

    return 0;
}
```
o/p:

![image](https://github.com/user-attachments/assets/1b2dba09-e77b-4f50-a93c-f7e58a2d4707)

10)Reversing string:

```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter string: ";
cin>>a;
int i;
for(i=a.length()-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}

```
o/p:

![image](https://github.com/user-attachments/assets/051bd0c8-fc8c-43df-8c61-4a7977ca1d67)



# CONCLUSION:

These code snippets show basic operations with arrays in C++. They include printing array elements, taking user input to fill arrays, reversing the order of elements, searching for specific values, and calculating sums and averages. The examples use different types of loops and handle both fixed and user-defined array sizes. Overall, they provide a straightforward introduction to working with arrays and performing common tasks like finding maximum and minimum value.

The last four C++ code demonstrate basic string operations: reading, displaying, concatenating, reversing, and checking for palindromes. Each program effectively handles single-word strings. Overall, they provide a solid foundation for understanding string manipulation in C++.




