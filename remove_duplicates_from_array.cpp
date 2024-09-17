#include <iostream>
using namespace std;

int remove_duplicates(int *arr, int size_of_the_array)
{
    if (size_of_the_array == 0) {
        printf("The array is empty\n");
        return 0;
    }
    else if (size_of_the_array == 1) {
        printf("There can't be duplicates\n");
        return size_of_the_array;
    }

    int current_index = 1;
    for (int i = 1; i < size_of_the_array; i++) {
        if (arr[i - 1] != arr[i]) {
            arr[current_index] = arr[i];
            current_index++;
        }
    }
    cout << "total elements: " << current_index << "\n";
    return current_index;
}

int main(int argc, char const *argv[])
{
    int size_of_array;
    // int arr[10] = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[1] = {1};
    size_of_array = sizeof(arr);
    size_of_array = size_of_array / 4;
    size_of_array = remove_duplicates(arr, size_of_array);
    if (size_of_array != 0) {
        cout << "Printing array: ";
        for (int i = 0; i < size_of_array; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
