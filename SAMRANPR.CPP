      #include<stdio.h>
      #include<conio.h>
      void main()
      {
      int i,j,n,m;
      int r=0;
      scanf("%d%d",&n,&m);
      for(i=n;i<=m;i++)
      {
      for(j=2;j<=m;j++)
      {
      if(i%2==0)
      r=0;
      else
      r=1;
      }
      if(r==1)
      printf("%d",i);
      getch();
      }
