  #include<stdio.h>
  #include<conio.h>
  main()
  {
  int a,sum=0,n;
  clrscr();
  printf("enter n");
  scanf("%d",n);
  printf("enter a");
  scanf("%d",&a);
  sum=sum+a;
  while(!(a==n))
  {
  printf("enter a again");
  scanf("%d",&a);
  sum=sum+a;
  printf("%d",sum);
  }
  getch();
  }