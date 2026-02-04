#include <iostream>
#include <string>

int searchArray(int array[], int size, int element);
int searchArray(std::string array[], int size, std::string element);

int main()
{
    // ETO INT ARRAY NA SAMPLE NOH
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numSize = sizeof(numbers) / sizeof(numbers[0]);
    int myNum;
    int numIndex;

    std::cout << "Enter number to search for: ";
    std::cin >> myNum;

    numIndex = searchArray(numbers, numSize, myNum);

    if (numIndex != -1)
    {
        std::cout << myNum << " is at index " << numIndex << "\n\n";
    }
    else
    {
        std::cout << myNum << " is not in the array\n\n";
    }

    std::cin.ignore(); // clear newline before getline :>

    // ETO NAMAN STRING NA SAMPLE
    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int foodSize = sizeof(foods) / sizeof(foods[0]);
    std::string myFood;
    int foodIndex;

    std::cout << "Enter food to search for: ";
    std::getline(std::cin, myFood);

    foodIndex = searchArray(foods, foodSize, myFood);

    if (foodIndex != -1)
    {
        std::cout << myFood << " is at index " << foodIndex;
    }
    else
    {
        std::cout << myFood << " is not in the array";
    }

    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1; // this means not found
}

int searchArray(std::string array[], int size, std::string element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
