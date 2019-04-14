#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    //We are going to represent our expenses in a list containing integers.
    //Create a list with the following items.
    //500, 1000, 1250, 175, 800 and 120

    //How much did we spend?
    std::vector<int> expenses = {500, 1000, 1250, 175, 800, 120};

    int sum = 0;
    for (int i = 0; i < expenses.size(); i++) {
        sum = sum + expenses[i];
    }
    std::cout << "How much did we spend: " << sum << std::endl;

    //Which was our greatest expense?
    int greatestSpending = expenses[0];
    for (int i = 1; i < expenses.size(); i++) {
        if (expenses[i] > greatestSpending) {
            greatestSpending = expenses[i];
        }
    }
    std::cout << "The greatest spending: " << greatestSpending << std::endl;

    //Which was our cheapest spending?
    int cheapestSpending = expenses[0];
    for (int j = 1; j < expenses.size(); ++j) {
        if (expenses[j] < cheapestSpending) {
            cheapestSpending = expenses[j];
        }
    }
    std::cout << "The cheapest spending: " << cheapestSpending << std::endl;

    //What was the average amount of our spendings?
    double averageSpending = double(sum) / expenses.size();
    std::cout << "The average spending: " << averageSpending << std::endl;

    return 0;
}