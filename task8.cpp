#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int countOfCargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> countOfCargo;
    int minibusCount = 0, truckCount = 0, trainCount = 0, totalWeight = 0;

    for (int i = 0; i < countOfCargo; i++)
    {
        int weight;
        cout << "Enter the tonnage of the current cargo: ";
        cin >> weight;

        totalWeight += weight;
      //  cout << totalWeight;   it was 25
        if (weight <= 3)
        {
            minibusCount += weight;
           // cout << minibusCount;  it was 4
        }
        else if (weight <= 11)
        {
            truckCount += weight;
        }
        else
        {
            trainCount += weight;
        }
    }

    double averagePrice = (minibusCount * 200.0 + truckCount * 175.0 + trainCount * 120.0) / totalWeight;
    double minibusPercentage = (static_cast<double>(minibusCount) / totalWeight) * 100.0; // type casting coz 4/25 would be 0.16 and we took minibuscount in int.
    double truckPercentage = (static_cast<double>(truckCount) / totalWeight) * 100.0;
    double trainPercentage = (static_cast<double>(trainCount) / totalWeight) * 100.0;

    cout << fixed;
    cout << setprecision(2);

    cout << averagePrice << endl;
    cout << minibusPercentage << "%" << endl;
    cout << truckPercentage << "%" << endl;
    cout << trainPercentage << "%" << endl;

    return 0;
}
