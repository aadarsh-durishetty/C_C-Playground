
// -------------------- prime numbers ----------------------- //
/*
#include <stdio.h>

int main()
{
    int n, fact;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        fact=0;
        for(int j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return 0;
}
*/

// --------------------- matrix ----------------------- //
/*
#include <stdio.h>

int main()
{
    int m, n;
    int mat[100][100];
    scanf("%d%d", &m, &n);

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d\n", mat[i][j]);
        }
    }
    int length = sizeof(mat[100][100])/sizeof(mat[0][0]);

    int min = mat[0][0];
    int max = mat[0][0];

    for (int i = 0; i < length; i++) // use only if u want to find max or min of array.
    {
        for (int j=0; j<length; j++)
        {

           if(mat[i][j] < min)
           {
              min = mat[i][j];
           }
        }
    }
    for (int i = 0; i < length; i++)
    {
        for (int j=0; j<length; j++)
        {

           if(mat[i][j] > max)
           {
              max = mat[i][j];
           }
        }
    }
    printf("Smallest element present in given array: %d\n", min);
    printf("greatest element present in given array: %d\n", max);
    return 0;
}
*/

/*
//-------------- matrix operation with user defined functions --------- //

#include <stdio.h>
int mat1(int m, int n)
{
    int arr1[100][100];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    return 0;

}

int mat2(int n, int p)
{
    int arr2[100][100];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<p; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
}

int mul(int m, int p, int n)
{
    int mul[100][100], arr1[100][100], arr2[100][100];
    int sum, j;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<p; j++)
        {
            for (int k=0; k<n; k++)
            {
                sum = sum + (arr1[i][k] * arr2[k][j]);
            }
        }
        mul[i][j] = sum;
        sum = 0;
    }

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<p; j++)
        {
            printf("%d\n", mul[i][j]);
        }
    }
}
int main()
{
    mat1(3,3);
    mat2(3,3);
    mul(3,3,3);

}
*/

//--------------------- reverse string and palindrome -------------------- //
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char n[100];
    int temp, rem[100], rev[100];
    int len, i;
    scanf("%s", n);

    len = strlen(n);

    for (int i=0; i<len/2; i++)
    {
        temp = n[i];
        n[i] = n[len-i-1];
        n[len-i-1] = temp;
    }
    if (int i=0; i<len; i++)
    {
       while (n != 0)
       {
        rem[i] = n[i] % 10;
        rev[i] = rev[i] * 10 + rem[i];
        n[i] = n[i]/10;
       }
    }
    for (int i=0; i<len; i++)
    {
       if (n[i] == rev[i])
       {
          printf("yes, it is palindrome");
       }
    }

    printf("%s", n);


}
*/

//--------------------- structure ------------------------//
/*
#include <stdio.h>

struct data
{
    char name[100];
    char place[100];
    int cost;
};

int main()
{
    struct data d[10];
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%s", d[i].name);
        scanf("%s", d[i].place);
        scanf("%d", &d[i].cost);
    }

    for (int i=0; i<n; i++)
    {
        if (d[i].cost > 250)
        {
            printf("%s", d[i].name);
        }
    }


}
*/

//-------------------- matrix adding using pointers-----------------------//

#include <stdio.h>

void input(int m, int n)
{
    int mat[100][100];
    for (int i = 0; i < m; i < n)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", *(*(mat + i) + j));
        }
    }
}

void disp(int m, int n)
{
    int mat[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", *(*(sum+i)+j);
        }
    }
}

void sum(int m, int n)
{
    int mat[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            (*(*sum+i)+j)) = (*(*(mat+i)+j) + *(*(mat+i)+j));
        }
    }
}

int main()
{
    input(3, 3);
    disp(3, 3);
    sum(3, 3);
}

#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    int lad;
    int place;
    int no_dice;
    int snake_start[100];
    int snake_end[100];
    int ladder_start[100];
    int ladder_end[100];
    int dice[100];

    cin >> x >> y >> z;

    for (int i = 1; i <= z; i++)
    {
        cin >> snake_start[i];
        cin >> snake_end[i];
    }
    cin >> lad;
    for (int i = 1; i <= lad; i++)
    {
        cin >> ladder_start[i];
        cin >> ladder_end[i];
    }
    cin >> place;
    cin >> no_dice;

    for (int i = 1; i <= no_dice; i++)
    {
        cin >> dice[i];
        place = place + dice[i];
        for (int j = 0; j <= 10; j++)
        {
            if (place == snake_start[j])
            {
                place = snake_end[j];
            }
            else if (place == ladder_start[j])
            {
                place = ladder_end[j];
            }
        }
    }
    cout << place;
    return 0;
}