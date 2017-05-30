#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name [20];
    float kilogram;
    char type[2];
    float price;

}Icecream;
typedef  struct{
    Icecream one;
    struct LIST * next;
} LIST;

int main()
{
    LIST * head = NULL;
    LIST * curr = NULL;
    FILE * fp;
    if((fp = fopen("bin.bin","rb"))== NULL)
    {
    printf("Error whit open!");
    exit(1);
    }


    if(head == NULL)
    {
       head = createStackList(head,fp);

    }


    return 0;
}
double totalCost(LIST * head,char ch[])
{
    double price;
    LIST * curr = head;
    while(curr != NULL)
    {
       if(!strcmp(curr->one.type,ch))
       {
        price = curr->one.kilogram *curr->one.price;
        break;
       }

       curr = curr ->next;
    }

        return price;
}

LIST * createStackList(LIST * head ,FILE *fp)
{
    while(1)
    {
       if(head == NULL)
        {
        head = (LIST*) malloc(sizeof(LIST));

       }
       if()
    }



}


