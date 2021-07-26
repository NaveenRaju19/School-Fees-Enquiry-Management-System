#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int TU,BO,BU,HO,SCF,TF,FC,FTF;
int mark;
int standard;
char name[20];
int age;
char fname[20];
char mname[20];
char nation[10];
char focc[10];
char mocc[10];
char address[30];
char mailid[25];

clrscr();
textbackground(BLUE);
printf("\n\n\n\n\n");
printf("===========================================================\n");
printf(" YNSR HIGHER SECONDARY SCHOOL\n");
printf(" OPPOSITE TO NEHRU STADIUM,SILUKUVARUPATTY,\n");
printf(" SALEM - 636282.\n");
printf(" Mailid: admin@ynsr.ac.in\n");
printf(" CONTACT NUMBERS: 04272001704, 7094240070.\n");
printf("===========================================================\n");
getch();
clrscr();
printf("\t\t\t");
printf("\n");
printf("\t\tPRINCIPAL\n");
printf("\t_________________________\n");
printf("\n\n");
printf("\tMR.NAVEEN RAJU.K (B.E[ECE])\n");
printf("\tMail id: principal@ynsr.ac.in\n");
printf("\tContact Number: +91 7094240070\n");
printf("\n\n");
printf("\t\tCHAIRMAN\n");
printf("\t__________________________\n");
printf("\n\n");
printf("\tMR.SASIDHARAN.K (B.E)\n");
printf("\tMail id: chairman@ynsr.ac.in\n");
printf("\tContact Number: +91 8925438100\n");
printf("\n\n");
getch();
clrscr();
printf("\t\tVICE CHAIRMAN\n");
printf("\t__________________________\n");
printf("\n\n");
printf("\tMR.YUVARAJ.P (B.E)\n");
printf("\tMail id: vicechairman@ynsr.ac.in\n");
printf("\tContact Number: +91 9876543210\n");
printf("\n\n");
printf("\t\tTREASURER\n");
printf("\t__________________________\n");
printf("\n\n");
printf("\tMR.SATISH.A (B.E)\n");
printf("\tMail id: treasurer@ynsr.ac.in\n");
printf("\tContact Number: +91 9873209560\n");
getch();
clrscr();
printf("\t\tALL OVER INCHARGER\n");
printf("\t__________________________\n");
printf("\n\n");
printf("\tMR.RANGARAJ.P (B.E)\n");
printf("\tMail id: alloverincharger@ynsr.ac.in\n");
printf("\tContact Number: +91 9093123456\n");
getch();
clrscr();
printf("\t\tSPECIAL OBJECTIVES OF OUR SCHOOL\n");
printf("\t\t====================================");
printf("\n\n");
printf("\t *TO DEVELOP THE COMMUNICATION SKILLS IN ENGLISH,TAMIL & HINDI\n");
printf("\t *TO ENCOURAGE SELF CONFIDANCE IN STUDENTS\n");
printf("\t *TO IMPROVE THEIR SELF ESTEEM\n");
printf("\t *TO MAKE THEM TO ACCEPT,FACE CHALLENGES IN THEIR LIFE\n");
printf("\t *TO DEVELOP HELPING & SHARING TENDANCIES IN STUDENTS MIND\n");
printf("\n\n\n");
printf("\t\tFACILITIES AVAILABLE IN OUR SCHOOL\n");
printf("\t\t=======================================");
printf("\n\n\n");
printf("\t *WE PROVIDE SPECIAL CARE FOR EVERY STUDENTS\n");
printf("\t *WE PROVIDE ACTIVITIES BASED TRAINING & LEARNING PROCESS\n");
printf("\t *WE INCLUDE PROJECT WORKS AND EXHIBITIONS\n");
getch();
clrscr();
printf("\n\n\n");
printf("\t\t1.Fees Details for LKG\n");
printf("\t\t2.Fees Details for UKG\n");
printf("\t\t3.Fees Details for FIRST STANDARD\n");
printf("\t\t4.Fees Details for SECOND STANDARD\n");
printf("\t\t5.Fees Details for THIRD STANDARD\n");
printf("\t\t6.Fees Details for FOURTH STANDARD\n");
printf("\t\t7.Fees Details for FIFTH STANDARD\n");
printf("\t\t8.Fees Details for SIXTH STANDARD\n");
printf("\t\t9.Fees Details for SEVENTH STANDARD\n");
printf("\t\t10.Fees Details for EIGHTH STANDARD\n");
printf("\t\t11.Fees Details for NINENTH STANDARD\n");
printf("\t\t12.Fees Details for TENTH STANDARD\n");
printf("\t\t13.Fees Details for ELEVENTH STANDARD\n");
printf("\t\t14.Fees Details for TWELVETH STANDARD\n");
printf("\n\n\t\tENTER YOUR NUMBER: ");
scanf("%d",&standard);
clrscr();
switch (standard)
{
case 1:
printf("\t\tFEES DETAILS OF LKG\n");
printf("\t\t===========================\n");
printf("\n\n");
TU=10000;
printf("\t\tTution Fees is:%d\n",TU);
BO=4000;
printf("\t\tBook Fees is:%d\n",BO);
BU=6000;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 20000");
}
break;
case 2:
printf("\t\tFEES DETAILS OF UKG\n");
printf("\t\t===========================\n");
printf("\n\n");
TU=11000;
printf("\t\tTution Fees is:%d\n",TU);
BO=4000;
printf("\t\tBook Fees is:%d\n",BO);
BU=6000;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 21000");
}
break;
case 3:
printf("\t\tFEES DETAILS OF FIRST STANDARD\n");
printf("\t\t=====================================\n");
printf("\n\n");
TU=12000;
printf("\t\tTution Fees is:%d\n",TU);
BO=4000;
printf("\t\tBook Fees is:%d\n",BO);
BU=6000;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 22000");
}
break;
case 4:
printf("\t\tFEES DETAILS OF SECOND STANDARD\n");
printf("\t\t======================================\n");
printf("\n\n");
TU=13000;
printf("\t\tTution Fees is:%d\n",TU);
BO=4200;
printf("\t\tBook Fees is:%d\n",BO);
BU=6000;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 23200");
}
break;
case 5:
printf("\t\tFEES DETAILS OF THIRD STANDARD\n");
printf("\t\t=====================================\n");
printf("\n\n");
TU=14000;
printf("\t\tTution Fees is:%d\n",TU);
BO=4200;
printf("\t\tBook Fees is:%d\n",BO);
BU=6000;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 24200");
}
break;
case 6:
printf("\t\tFEES DETAILS OF FOURTH STANDARD\n");
printf("\t\t===========================================\n");
printf("\n\n");
TU=15000;
printf("\t\tTution Fees is:%d\n",TU);
BO=5600;
printf("\t\tBook Fees is:%d\n",BO);
BU=6200;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 26800");
}
break;
case 7:
printf("\t\tFEES DETAILS OF FIFTH STANDARD\n");
printf("\t\t=======================================\n");
printf("\n\n");
TU=16000;
printf("\t\tTution Fees is:%d\n",TU);
BO=5700;
printf("\t\tBook Fees is:%d\n",BO);
BU=6200;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 27900");
}
break;
case 8:
printf("\t\tFEES DETAILS OF SIXTH STANDARD\n");
printf("\t\t======================================\n");
printf("\n\n");
TU=17000;
printf("\t\tTution Fees is:%d\n",TU);
BO=5700;
printf("\t\tBook Fees is:%d\n",BO);
BU=6200;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 28900");
}
break;
case 9:
printf("\t\tFEES DETAILS OF SEVENTH STANDARD\n");
printf("\t\t=======================================\n");
printf("\n\n");
TU=18000;
printf("\t\tTution Fees is:%d\n",TU);
BO=5700;
printf("\t\tBook Fees is:%d\n",BO);
BU=6200;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 29900");
}
break;
case 10:
printf("\t\tFEES DETAILS OF EIGHTH STANDARD\n");
printf("\t\t======================================\n");
printf("\n\n");
TU=19000;
printf("\t\tTution Fees is:%d\n",TU);
BO=5900;
printf("\t\tBook Fees is:%d\n",BO);
BU=6200;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 31100");
}
break;
case 11:
printf("\t\tFEES DETAILS OF NINTH STANDARD\n");
printf("\t\t=====================================\n");
printf("\n\n");
TU=20000;
printf("\t\tTution Fees is:%d\n",TU);
BO=5900;
printf("\t\tBook Fees is:%d\n",BO);
BU=6200;
printf("\t\tBus Fees is:%d\n",BU);
TF=TU+BO+BU;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 32100");
}
break;
case 12:
printf("\t\tFEES DETAILS OF TENTH STANDARD\n");
printf("\t\t=====================================\n");
printf("\n\n");
TU=21000;
printf("\t\tTution Fees is:%d\n",TU);
BO=5900;
printf("\t\tBook Fees is:%d\n",BO);
BU=6300;
printf("\t\tBus Fees is:%d\n",BU);
SCF=6000;
printf("\t\tSpecial Class Fees:%d\n",SCF);
TF=TU+BO+BU+SCF;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 39200");
}
break;
case 13:
printf("\t\tFEES DETAILS OF ELEVENTH STANDARD\n");
printf("\t\t=====================================\n");
printf("\n\n");
TU=25000;
printf("\t\tTution Fees is:%d\n",TU);
BO=6500;
printf("\t\tBook Fees is:%d\n",BO);
BU=6000;
printf("\t\tBus Fees is:%d\n",BU);
SCF=6000;
printf("\t\tSpecial Class Fees:%d\n",SCF);
TF=TU+BO+BU+SCF;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Mark:");
scanf("%d",&mark);
if(mark>=480)
{
printf("\t\tYou Have Fees Discount of 75%  \n");
printf("\t\tFinal Total Fees is:10875 \n");
}
else
{
printf("\t\t***No Fees Discount***\n");
printf("\t\tThe Final Total Fees is: 43500");
}
break;
case 14:
printf("\t\tFEES DETAILS OF TWELTH STANDARD\n");
printf("\t\t=====================================\n");
printf("\n\n");
TU=27000;
printf("\t\tTution Fees is:%d\n",TU);
BO=9000;
printf("\t\tBook Fees is:%d\n",BO);
BU=6000;
printf("\t\tBus Fees is:%d\n",BU);
SCF=6000;
printf("\t\tSpecial Class Fees:%d\n",SCF);
TF=TU+BO+BU+SCF;
printf("\t\tTotal Fees= %d\n",TF);
printf("\t\tWe need Fees Conssesion\n");
printf("\t\tEnter The Amount:");
scanf("%d",&FC);
if(FC<=2000)
{
printf("\t\t%d rupees is possible\n",FC);
FTF=TF-FC;
printf("\t\tFinal Total Fees is:%d\n",FTF);
}
else
{
printf("\t\tNot Possible\n");
printf("\t\tThe Final Total Fees is: 48000");
}
break;
default :
printf("\t\t *There is no standard available!!!\n");
break;
}
getch();
clrscr();
printf("\t\tAPPLICATION FORM\n");
printf("\t=======================\n");
printf("\n\n");
printf("\t1.STUDENT NAME:");
scanf("%s",&name);
printf("\n");
printf("\t2.AGE OF THE STUDENT:");
scanf("%s",&age);
printf("\n");
printf("\t3.FATHER'S NAME:");
scanf("%s",&fname);
printf("\n");
printf("\t4.MOTHER'S NAME:");
scanf("%s",&mname);
printf("\n");
printf("\t5.NATIONALITY:");
scanf("%s",&nation);
printf("\n");
printf("\t6.FATHER'S OCCUPATION:");
scanf("%s",&focc);
printf("\n");
printf("\t7.MOTHER'S OCCUPATION:");
scanf("%s",&mocc);
printf("\n");
printf("\t8.ADDRESS:");
scanf("%s",&address);
printf("\n");
printf("\t9.MAIL ID:");
scanf("%s",&mailid);
printf("\n");
getch();
clrscr();
printf("\t\tAPPLICATION FORM\n");
printf("\t=======================\n");
printf("\n\n");
printf("\t1.STUDENT NAME: %s",name);
printf("\n");
printf("\t2.AGE OF THE STUDENT: %d",age);
printf("\n");
printf("\t3.FATHER'S NAME: %s",fname);
printf("\n");
printf("\t4.MOTHER'S NAME: %s",mname);
printf("\n");
printf("\t5.NATIONALITY: %s",nation);
printf("\n");
printf("\t6.FATHER'S OCCUPATION: %s",focc);
printf("\n");
printf("\t7.MOTHER'S OCCUPATION: %s",mocc);
printf("\n");
printf("\t8.ADDRESS: %s",address);
printf("\n");
printf("\t9.MAIL ID: %s@gmail.com",mailid);
printf("\n");
printf("==============================================================");
printf("\n\t\t\t***THANKYOU***");
getch();
}








