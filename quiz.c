#include <stdio.h>
struct automobile
{
	int serialnumber;
	int manufyear;
	char materialused[20];
	int manufacturequantity;
};
struct automobile part[2];
void retrievedata();
void displaydata();
void setautomobiledata();
int main()
{
	int i;
	setautomobiledata();
	displaydata();
	retrievedata();
	return 0;
}
void retrievedata()
{
	int i, j = 0;
	printf("\n List of parts between BB1 & CC6");
	for (i = 0; i < 2; i++)
	{
		if ((part[i].serialnumber >= 0xbb1) && (part[i].serialnumber >= 0xcc6))
		{
			j = 1;
			printf("\n\n\tPart Number=%d", i);
			printf("\nSerial Number=%x", part[i].serialnumber);
			printf("\n Year of manufacturing = %d", part[i].manufyear);
			printf("\n Material used=%s", part[i].materialused);
			printf("\n Manufacture quantity=%d", part[i].manufacturequantity);
		}
	}
	if (j == 0)
		printf("\nNo such record present");
}
void displaydata()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("\n\n\tPart Number = %d", i);
		printf("\nSerial Number = %x", part[i].serialnumber);
		printf("\nYear of manufacturing = %d", part[i].manufyear);
		printf("\nMaterial used : %s", part[i].materialused);
		printf("\nManufacture quantity=%d", part[i].manufacturequantity);
	}
}
void setautomobiledata()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		while (1)
		{
			printf("\nEnter the serial Number of the part");
			printf("\nNumber must be between AA0 and FF9 ");
			scanf("%x", &part[i].serialnumber);
			if (part[i].serialnumber >= 0xAA0 && part[i].serialnumber <= 0xff9)
				break;
		}
		printf("\nEnter the Year of manufacturing of the part");
		scanf("%d", &part[i].manufyear);
		printf("\nEnter the materialused of the part");
		scanf("%s", &part[i].materialused);
		fflush(stdin);
		printf("\nEnter the manufacturequantity of the part");
		scanf("%d", &part[i].manufacturequantity);
	}
}
