#include <iostream>

// Function to calculate the average of an array of numbers
double calculateAverage(int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int numbers[size];
    std::cout << "Enter " << size << " numbers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }

    double average = calculateAverage(numbers, size);
    std::cout << "The average of the numbers is: " << average << std::endl;

    return 0;
}
