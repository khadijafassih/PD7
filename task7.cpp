#include <iostream>
using namespace std;

main()
{
    int days, doctors = 7, treated = 0, untreated = 0;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    int upatients;
    for (int p = 1; p <= days; p++)
    {
        int patients;
        cout << "Number of patients who visited hospital on day" << p << " : ";
        cin >> patients;
        if (p % 3 == 0 && untreated > treated)
        {
            doctors++;
        }
        if (patients <= doctors)
        {
            treated += patients;
        }
        else
        {
            treated += doctors;
            untreated += (patients - doctors);
        }
    }
    cout << "Treated Patients: " << treated << "." << endl;
    cout << "Untreated Patients: " << untreated << "." << endl;
}
