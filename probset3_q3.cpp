#include <iostream>
#include <cmath>
using namespace std;
class employees // creating the base clss eployees
{
public:
    float bonus; // declaring public variables for bonus, id and type
    int ID;
    int Type;

public:
    float calculateBonus(int type, int pay) // return the bonus for the basic pay according to the type
    {
        float CalBonus;
        if (type == 0) // if Technical
        {
            if (pay >= 15000)
            {
                CalBonus = pay * 0.1;
            }
            else
            {
                CalBonus = pay * 0.12;
            }
        }
        else // if NonTechnical
        {
            if (pay >= 7000)
            {
                CalBonus = pay * 0.15;
            }
            else
            {
                CalBonus = pay * 0.20;
            }
        }
        CalBonus = ceil(CalBonus * 100.0) / 100.0; // ceiling function to rounf by two decimal
        return CalBonus;
    }
};

class Technical : public employees // inheriting Technical class from employees
{

public:
    void TechDetails(int Tpay, int id, int type) // assigning details for the global variable ID,Type and the bonus
    {
        ID = id;
        Type = type;
        bonus = calculateBonus(id, Tpay); // bonus is calculated
    }
};

class NonTechnical : public employees // inherting NonTechnival class from employees
{

public:
    void NonTechDetails(int Npay, int id, int type)
    {
        ID = id;
        Type = type;
        bonus = calculateBonus(id, Npay);
    }
};

int main()
{
    int n, id, type, pay;
    int Tcount = 0;     // counter for counting Techincal employees
    int Ncount = 0;     // counter for counting Non technical employees
    Technical T[20];    // array of Technical objects
    NonTechnical N[20]; // array of non technical objects
    employees e[20];    // array of employee objects
    cout << "Enter number of employees ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the ID of employee " << i + 1 << " ";
        cin >> id;
        cout << "Type of employee (0 for Technical and 1 for non technical ";
        cin >> type;
        cout << "Basic pay of employee " << i + 1 << " ";
        cin >> pay;

        if (type == 0) // if type is Technical
        {
            T[Tcount].TechDetails(pay, id, type); // Technical details are updated
            Tcount++;
        }
        else // if type is non technical
        {
            N[Ncount].NonTechDetails(pay, id, type);
            Ncount++;
        }
    }
    // sorting Non techinal object in descending order by bonus
    for (int i = 0; i < Tcount - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < Tcount; j++)

            if (T[j].bonus > T[min].bonus)

                min = j;

        Technical temp = T[i];
        T[i] = T[min];
        T[min] = temp;
    }
    // sorting non techincal objects by bonus
    for (int i = 0; i < Ncount - 1; i++)
    {
        cout << "pari";
        int min = i;
        for (int j = i + 1; j < Ncount; j++)

            if (N[j].bonus > N[min].bonus)

                min = j;

        NonTechnical temp = N[i];
        N[i] = N[min];
        N[min] = temp;
    }

    int i = 0, j = 0, k = 0;
    while (i < Tcount && j < Ncount)

    {
        // if element of Technical is greater than element fo non technical array
        // copy the element in Technical array to employee array

        if (T[i].bonus > N[j].bonus)
        {

            e[k] = T[i];
            k++;
            i++;
        }
        // if element of Non Technical is greater than element fo technical array
        // copy the element in Non Technical array to employee array
        else
        {
            e[k] = N[j];
            k++;
            j++;
        }
    }
    // Copy remaining elements of Tecnical array
    while (i < Tcount)
    {

        e[k] = T[i];
        k++;
        i++;
    }
    // Copy remaining elements Non techncal array
    while (j < Ncount)
    {
        e[k] = N[j];
        k++;
        j++;
    }

    cout << "Details after sorting\n";
    cout << "Technical employees\n";
    for (int i = 0; i < Tcount; i++)
    {
        cout << "ID :" << T[i].ID << ", " << T[i].bonus << " bonus \n";
    }
    cout << "NonTechnical employees\n";
    for (int i = 0; i < Ncount; i++)
    {
        cout << "ID :" << N[i].ID << ", " << N[i].bonus << " bonus \n";
    }
    cout << "Descending ordered sorting of entire employees\n";
    for (int i = 0; i < n; i++)
    {
        cout << "ID :" << e[i].ID << ", " << e[i].bonus << " bonus \n";
    }
}
