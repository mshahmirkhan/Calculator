

main()
{
    int choice=0 ,a=0 ,b=0;


   printf("\n\n\t\t****************  CALCULATOR  ***************");
    printf("\n\n\n\n\n\t1. TYPE  *1*  FOR ADDITION ");
     printf("\n\n\n\t2. TYPE  *2*  FOR SUBTRACTION ");
      printf("\n\n\n\t3. TYPE  *3*  FOR MULTIPLICATION ");
       printf("\n\n\n\t4. TYPE  *4*  FOR DIVISION ");
        printf("\n\n\n\t5. TYPE  *5*  FOR TAKING SQUARE ");
         printf("\n\n\n\t6. TYPE  *6*  FOR EXIT ");




      printf("\n\n\n\t*************************************************************");
             printf("\n\n\n\t:-  ENTER YOUR OPERATION  %d",choice);
       scanf("%d",&choice);


                  //switch operation

        switch(choice)
        {
            case 1:
                printf("\n\n\n\n\t\t********  ADDITION  *********");

                printf("\n\n\n\n\t ENTER FIRST NUMBER   %d",a);
                scanf("%d",&a);

                printf("\n\n\t ENTER SECOUND  NUMBER   %d",b);
                scanf("%d",&b);

                printf("\n\n\t %d + %d =  %d",a,b,a+b);

                getch();

                return(0);


                  break;


            case 2:
                printf("\n\n\n\n\t\t********  SUBTRACTION  *********");

                printf("\n\n\n\n\t ENTER FIRST NUMBER   %d",a);
                scanf("%d",&a);

                printf("\n\n\t ENTER SECOUND  NUMBER   %d",b);
                scanf("%d",&b);

                printf("\n\n\t %d - %d =  %d",a,b,a-b);

                getch();


                  break;


            case 3:
                printf("\n\n\n\n\t\t********  MULTIPLICATION  *********");

                printf("\n\n\n\n\t ENTER FIRST NUMBER   %d",a);
                scanf("%d",&a);

                printf("\n\n\t ENTER SECOUND  NUMBER   %d",b);
                scanf("%d",&b);

                printf("\n\n\t %d * %d =  %d",a,b,a*b);

                getch();


                  break;


            case 4:
                printf("\n\n\n\n\t\t********  DIVISION  *********");

                printf("\n\n\n\n\t ENTER FIRST NUMBER   %d",a);
                scanf("%d",&a);

                printf("\n\n\t ENTER SECOUND  NUMBER   %d",b);
                scanf("%d",&b);

                printf("\n\n\t %d  / %d =  %d",a,b,a%b);

                getch();


                  break;


            case 5:
                 printf("\n\n\n\n\t\t********  EVEN OR ODD  *********");
                 printf("\n\n\n\n\t ENTER A NUMBER   %d",a);
                  scanf("%d",&a);

                  if(a>0)
                  {
                       printf("\n\n\t NUMBER IS POSITIVE");
                  }
                  else
                  {
                       printf("\n\n\t NUMBER IS NEGATIVE");
                  }

                  getch();

              break;

            case 6:exit(0);


            default:
                    printf("\n\n\n\n\n\n\t\t******** YOU HAVE ENTER AN INVALID NUMBER *********");

                    getch();

    }

}
