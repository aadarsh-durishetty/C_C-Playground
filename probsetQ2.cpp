#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class employees
{
public:
    float bonus;
    int ID;
    int Type;
public:
     double Calculate_Bonus(int type, float b_pay)
     {
         float Cal_Bonus;
         if (type == 0)
         {
             if (b_pay >= 15000)
             {
                 Cal_Bonus = b_pay *0.1;
             }
             else
             {
                 Cal_Bonus = b_pay *0.12;
             }
         }
         if (type == 1)
         {
             if (b_pay >= 7000)
             {
                 Cal_Bonus = b_pay *0.15;
             }
             else
             {
                 Cal_Bonus = b_pay *0.20;
             }
         }
         Cal_Bonus = float(Cal_Bonus *100.00)/100.00;
         return float(Cal_Bonus);
     }
};

class Technical: public employees
{
    public:
      void Tech_data(int Tech_pay, int id, int type)
      {
          ID=id;
          Type=type;
          bonus = Calculate_Bonus(type, Tech_pay);
      }
};

class NonTechnical: public employees
{
    public:
       void NonTech_data(int Non_pay, int id, int type)
       {
           ID=id;
           Type=type;
           bonus = Calculate_Bonus(type, Non_pay);
       }
};

int main()
{
    int num, id, type;
    float b_pay;
    int Tech_count=0;
    int Non_count=0;
    Technical Tech[20];
    NonTechnical Non[20];
    employees emp[20];
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        cin >> id;
        cin >> type;
        cin >> b_pay;
        
        if (type==0)
        {
            Tech[Tech_count].Tech_data(b_pay, id, type);
            Tech_count++;
        }
        else
        {
            Non[Non_count].NonTech_data(b_pay, id, type);
            Non_count++;
        }
    }
    for (int i=0; i<Tech_count-1; i++)
    {
        int min=i;
        for (int j=i+1; j<Tech_count; j++)
        {
           if (Tech[j].bonus > Tech[min].bonus)
           {
              min = j;
              Technical temp = Tech[i];
              Tech[i]=Tech[min];
              Tech[min]=temp;
           }
        }

    }
    
    for (int i=0; i<Non_count-1; i++)
    {
        int min=i;
        for (int j=i+1; j<Non_count; j++)
        {
           if (Non[j].bonus > Non[min].bonus)
           {
               min=j;
               NonTechnical temp = Non[i];
               Non[i]=Non[min];
               Non[min]=temp;
           }
        }
    }
    
    int i=0,j=0,k=0;
    while (i<Tech_count && j<Non_count)
    {
        if (Tech[i].bonus > Non[j].bonus)
        {
            emp[k] = Tech[i];
            k++;
            i++;
        }
        else
        {
            emp[k]=Non[j];
            k++;
            j++;
        
        }
    }
    
    while (i<Tech_count)
    {
        emp[k]=Tech[i];
        k++;
        i++;
    }
    while (j<Non_count)
    {
        emp[k]=Non[j];
        k++;
        j++;
    }
   
    for (int i=0; i<num; i++)
    {
        if (emp[i].Type == 0)
        {
           cout<< emp[i].ID <<" - "<< "Technical" << " - " << fixed << setprecision(2) << (emp[i].bonus) << "\n";
        }
        if (emp[i].Type == 1)
        {
            cout << emp[i].ID<<" - "<< "Non-Technical" << " - " << fixed << setprecision(2) << (emp[i].bonus) << "\n";
        }
    }
    return 0;
  
    
}
