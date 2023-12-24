#include <stdio.h>
struct Student
{
    char name[50];
    char address[50];
    int roll;
    int reg;
};

int main()
{
    struct Student s[50],rs[50];
    FILE *fptr;
    int n,i;
    printf("Enter the number of record:");
    scanf("%d",&n);
    fptr=fopen("myfile.txt","w+");
    if(fptr=NULL)
    {
        printf("File could not be opened");
    }
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the details:\n");
        printf("Enter the name:");
        gets( s[i].name);
        printf("\nEnter the address:");
        gets(s[i].address);
        printf("\nEnter the roll number:");
        scanf("%d",&(s[i].roll));
        printf("Enter the registration number:");
        scanf("%d",&(s[i].reg));
    }

    fwrite(&s,sizeof(struct Student),n,fptr);
    printf("\nThe file successfully written");
    rewind(fptr);

    fread(&rs,sizeof(struct Student),n,fptr);
    printf("The details are:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("\nName:%s\nAddress:%s\nroll number:%d\nregistration num:%d",s[i].name,s[i].address,s[i].roll,s[i].reg);
    }

    int choice;
    printf("\npress 1 to display all records \n press 2 to get details about a particular student\nEnter the choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            for(i=0;i<=n-1;i++)
            {
             printf("\nName:%s\nAddress:%s\nroll number:%d\nregistration num:%d",s[i].name,s[i].address,s[i].roll,s[i].reg);   
            }
            break;
        }

        case 2:
        {
            int check;
            printf("Enter the reg num:");
            scanf("%d\n",&check);

            for(i=0;i<=n-1;i++)
            {
                if(s[i].reg==check)
                {
                    printf("\n Name:%s\n Address:%s\n roll number:%d\n registration num:%d",s[i].name,s[i].address,s[i].roll,s[i].reg);
                }
                break;
            }
        }
    }

    fclose(fptr);
    return 0;


    
}