int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int a, b, c;

    printf("Enter 4 numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);  //lf is a format specifier to take double as input

    // a is the largest
    if(a >= b && a >= c && a>=d)
    {
        if(b >= c)
        {
            /*
                .2lf restricts the number till 
                2 decimal places
            */
            printf("\n\n%.2lf is the 2nd largest number\n", b);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd largest number\n", c);
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            printf("\n\n%.2lf is the 2nd largest number\n",a);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd largest number\n",c);
        }
    }

    // c is the largest number of the three
    else if(a >= b)
    {
        printf("\n\n%.2lf is the 2nd largest number\n", a);
    else
    {
        printf("\n\n%.2lf is the 2nd largest number\n", b);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}