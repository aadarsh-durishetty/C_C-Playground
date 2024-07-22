#include <stdio.h>
typedef struct
{
    char name[20];
    char adress[100];
    char grade;
    int avg_rc;
    int no_room;
} hot;
int main()
{
    int n;
    printf("No of Hotels: ");
    scanf("%d", &n);
    hot h[n];
    for (int i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s", h[i].name);
        printf(" Adress: ");
        scanf("%s", h[i].adress);
        printf("Grade: ");
        scanf("%c", h[i].grade);
        printf("Room charge: ");
        scanf("%d", &h[i].avg_rc);
        printf("No of rooms: ");
        scanf("%d", &h[i].no_room);
    }
    return 0;
}