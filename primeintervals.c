void main()
{
int  t,l,h,i,c;
clrscr();
printf("Enter any two number(intervals):");
scanf("%d%d",&l,&h);
printf("prime numbers between %d and %d are=",l,h);
for(t=l+1;t<h;t++)
{c=0;
for(i=2;i<=t/2;i++)
{if(t%i==0)
{c=1;break;}}
if(c==0)
printf("\t%d",t);
}
getch();
}
