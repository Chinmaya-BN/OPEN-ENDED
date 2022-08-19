#include<stdio.h>
int balance(int a);
int with(int amount, int withdraw);
int depo(int amount, int deposit);

   int amount=10000,pin,choice,w,d,withdraw,deposit,k,W;
  
int main()
{
    
 printf("ENTER YOUR SECRET PIN NUMBER:");
    scanf("%d", & pin);
    if (pin != 1234)
    {
      printf("PLEASE ENTER VALID PASSWORD!! \n");
      main();
    }
  printf("\n**Welcome to XYZ Bank ATM Service**\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Cash\n");
    printf("3. Deposit Cash\n");
    printf("4. Quit\n");
    printf("******\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if(choice==1)
    printf("THE BALANCE IN THE ACCOUNT IS :%d",balance(amount));
    else if (choice==2)
    {
        W:
        printf("\nENTER THE AMOUNT TO WITHDRAW:");
        scanf("%d",&w);
       if (w>5000)
      	{
      	printf(“NO MINIMUM BALANCE\nENTER AMOUNT LESS THAN 5000 ”);
                goto W;

}	
        
        if(w%100!=0)
        {
            printf("\nENTER THE MULTIPLES OF 100");
         goto W;
        }
        else
        printf("THE BALANCE IN THE ACCOUNT IS : %d",with(amount,withdraw));
    }
    else if(choice==3)
    {
        printf("ENTER THE AMOUNT TO DEPOSIT:");
        scanf("%d",&d);
        printf("THE BALANCE IN THE ACCOUNT IS:%d",depo(amount,deposit));
    }
    else if(choice==4)
    {
        printf("THANKS FOR USINF XYZ ATM");
        return(0);
    }
    printf("\nDO YOU WISH TO DO ANOTHER TRANSACTION?:\n");
    printf("IF YES PRESS 1\nIF NO PRESS 2\n");
    scanf("%d",&k);
    if(k==1)
    main();
    else
    {
    printf("\nTHANKS FOR USING XYZ ATM");
    return(0);
    }
}
int balance(int a)
{
   int amount=10000;
    return amount;
}
int with(int amount,int withdraw)
{
 amount = amount - w;
 return amount;
}
int depo(int amount,int deposit)
{
amount = amount + d;
return amount;
} 
