#include <stdio.h>
#include<math.h>
int main()
{
 int s,t,n,p,*ps,*pt,*pn,*pp;
 float pr,bill=0,tbill=0,payment=0,nbill=0,*ppr,*pbill,*ptbill,*ppayment,*pnbill;
 char ch,*pch;
ps=&s;
pt=&t;
pn=&n;
pp=&p;
ppr=&pr;
pbill=&bill;
ptbill=&tbill;
ppayment=&payment;
pnbill=&nbill;
pch=&ch;
 printf("welcome to online shopping\n");
 printf("1.men's wear\n");
 printf("2.women's wear\n");
 printf("select your type of wear from above menu:\n");
 scanf("%d",ps);
 switch(*ps)
{
 case 1:
 menu:
 printf("welcome to men's wear section\n");
 printf("1.shirts---999\n");
 printf("2.jeans---1499\n");
 printf("3.t-shirts---499\n");
 printf("4.night pants---699\n");
 printf("select your wear from above menu\n");
 scanf("%d",pt);
 switch(*pt)
 {
 case 1:
 printf("Number of shirts you want to purchase:\n");
 scanf("%d\n",&n);
 *ppr=999;
 *pbill=(*pn)*(*ppr);
 *ptbill=*ptbill+*pbill;
 printf("bill=%f\n",*pbill);
 printf("do you want to purchase one more item(Y/y)\n");
 scanf(" %c",&ch);
 if(ch=='Y'||ch=='y')
 goto menu;
 else
 printf("total bill=%f\n",*ptbill);
 break;
 case 2:
 printf("Number of jeans you want to purchase:\n");
 scanf("%d\n",&n);
 *ppr=1499;
 *pbill=(*pn)*(*ppr);
 *ptbill=*ptbill+*pbill;
 printf("bill=%f\n",*pbill);
 printf("do you want to purchase one more item(Y/y)\n");
 scanf(" %c",&ch);
 if(ch=='Y'||ch=='y')
 goto menu;
 else
 printf("total bill=%f\n",*ptbill);
 break;
 case 3:
 printf("Number of t-shirts you want to purchase:\n");
 scanf("%d\n",&n);
 *ppr=499;
 *pbill=(*pn)*(*ppr);
 *ptbill=*ptbill+*pbill;
 printf("bill=%f\n",*pbill);
 printf("do you want to purchase one more item(Y/y)\n");
 scanf(" %c",&ch);
 if(ch=='Y'||ch=='y')
 goto menu;
 else
 printf("total bill=%f\n",*ptbill);
 break;
 case 4:
 printf("Number of night pants you want to purchase:\n");
 scanf("%d\n",&n);
 *ppr=699;
 *pbill=(*pn)*(*ppr);
 *ptbill=*ptbill+*pbill;
 printf("bill=%f\n",*pbill);
 printf("do you want to purchase one more item(Y/y)\n");
 scanf(" %c",&ch);
 if(ch=='Y'||ch=='y')
 goto menu;
 else
 printf("total bill=%f\n",*ptbill);
 break;
 default:
 printf("sorry!wrong option you have choosed,please try again\n");
 break;
 }
 break;
 case 2:
 menu1:
 printf("welcome to women's section\n");
 printf("1.sarees---9999\n");
 printf("2.chudidhars---5000\n");
 printf("3.kurta---1099\n");
 printf("select your wear from above list:\n");
 scanf("%d",pt);
 switch(*pt)
 {
 case 1:
 printf("Number of sarees you want to purchase:\n");
 scanf("%d\n",&n);
 *ppr=9999;
 *pbill=(*pn)*(*ppr);
 *ptbill=*ptbill+*pbill;
 printf("bill=%f\n",*pbill);
 printf("do you want to purchase one more item to buy(Y/y)\n");
 scanf(" %c",&ch);
 if(ch=='Y'||ch=='y')
 goto menu1;
 else
 printf("total bill=%f\n",*ptbill);
 break;
 case 2:
 printf("Number of chudidhars you want to purchase:\n");
 scanf("%d\n",&n);
 *ppr=5000;
 *pbill=(*pn)*(*ppr);
 *ptbill=*ptbill+*pbill;
 printf("bill=%f\n",*pbill);
 printf("do you want to purchase one more item to buy(Y/y)\n");
 scanf(" %c",&ch);
 if(ch=='Y'||ch=='y')
 goto menu1;
 else
 printf("total bill=%f\n",*ptbill);
 break;
 case 3:
 printf("Number of kurta you want to purchase:\n");
 scanf("%d\n",&n);
 *ppr=1099;
 *pbill=(*pn)*(*ppr);
 *ptbill=*ptbill+*pbill;
 printf("bill=%f\n",*pbill);
 printf("do you want to purchase one more item to buy(Y/y)\n");
 scanf(" %c",&ch);
 if(ch=='Y'||ch=='y')
 goto menu;
 else
 printf("total bill=%f\n",*ptbill);
 break;
 default:
 printf("sorry!wrong option you have choosed,please try again\n");
 break;
 }
 }
 printf("payment gateway\n");
 printf("1.card\n");
 printf("2.google pay---rs.100/-deduction from total bill\n");
 printf("3.amazon pay---rs.70/-deduction from total bill\n");
 printf("4.phone pay---rs.150/-deduction from total bill\n");
 printf("5.net banking---rs.90/-deduction from total bill\n");
 scanf("%d",&p);
 switch(*pp)
 {
 case 1:
 printf("payment through card\n");
 *pnbill=*ptbill;
 printf("net bill=%f\n",*pnbill);
 break;
 case 2:
 printf("payment through google pay\n");
 *pnbill=*ptbill-100;
 printf("net bill=%f\n",*pnbill);
 break;
 case 3:
 printf("payment through amazon pay\n");
 *pnbill=*ptbill-70;
 printf("net bill=%f\n",*pnbill);
 break;
 case 4:
 printf("payment through phone pay\n");
 *pnbill=*ptbill-150;
 printf("net bill=%f\n",*pnbill);
 break;
 case 5:
 printf("payment through net banking\n");
 *pnbill=*ptbill-90;
 printf("net bill=%f\n",*pnbill);
 break;
 }
 printf("thanks you,please visit again\n");
 printf(" ------HAPPY SHOPPING------ ");
 return 0;
 }
