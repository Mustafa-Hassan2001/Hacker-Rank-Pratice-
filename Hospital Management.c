//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define fee 500
//#define fee1 2000
//#define samepatient 250
//int keyupdate_=0;
//int keyupdate1_=0;
//int keyupdate2_=0;
//struct node
//{
// int age;
// char sex[10];
// int key;
// char bloodgroup[3];
// char name[50];
// char date[15];
// char phonenumber[15];
// char category[25];
// struct node *link;
//};
//struct node *start1=NULL;
//struct node *start=NULL;
//struct node * createnode()
//{
// struct node *p;
// p=(struct node*)malloc(sizeof(struct node)); 
// return p;
//};
//void insertnormalpatient_()
//{
// int option;
// struct node *temp=createnode();
// keyupdate_++;
// temp->key=keyupdate_;
// temp->link=NULL;
// printf("Enter your name,sex,bloodgroup and age\n");
// scanf("%s%s%s%d",temp->name,temp->sex,temp->bloodgroup,&temp->age);
// printf("Enter the date of appointment\n");
// scanf("%s",temp->date);
// printf("Enter your phone number\n");
// scanf("%s",temp->phonenumber);
// printf("Please choose the doctor according to ur illness. Also please contact any nurse on her rounds for getting your medical history\n");
// printf("1-General Physician MD-Dr.House[Department head]\n");
// printf("2-Orthopaedician-Dr.Hada\n");
// printf("3-Paediatrician-Dr.Melnick\n");
// printf("4-Opthalmologist-Dr.Salim[Department Head\n");
// printf("5-Dermatologist-Dr.Sweeney\n");
// printf("6-Radiologist-Dr.Malek\n");
// printf("7-Pathologist-Dr.Lever\n");
// printf("8-Urologist-Dr.Murphy\n\n");
// printf("choose your problem\n");
// scanf("%d",&option);
// if(option==1)
// {strcpy(temp->category,"General Physician MD");}
// if (option==2)
// {strcpy(temp->category,"Orthopaedician");} 
// if (option==3)
// {strcpy(temp->category,"Paediatrician");}
// if (option==4)
// {strcpy(temp->category,"Opthalmologist");}
// if (option==5)
// {strcpy(temp->category,"Dermatologist");}
// if (option==6)
// {strcpy(temp->category,"Radiologist");}
// if (option==7)
// {strcpy(temp->category,"Pathologist");}
// if (option==8)
// {strcpy(temp->category,"Urologist");}
// if(start==NULL)
// {start=temp;}
// else{
// struct node *t=start;
// while(t->link!=NULL)
// {
// t=t->link;
// }
// t->link=temp;
// }
// printf("------------\n");
// printf("choose another option\n");
//}
//void insertemergencypatient_() 
//{
// int option1;
// struct node *temp=createnode();
// keyupdate1_++;
// temp->key=keyupdate1_;
// temp->link=NULL;
// printf("This form to be filled out by Family/Guardian only.");
// printf("Please enter your name,sex bloodgroup and age respectively\n");
// scanf("%s%s%s%d",temp->name,temp->sex,temp->bloodgroup,&temp->age);
// printf("Enter the date of admission\n");
// scanf("%s",temp->date);
// printf("Enter your phone number\n");
// scanf("%s",temp->phonenumber);
// printf("1-Neuerologist-Dr.Foreman\n");
// printf("2-cardiologist-Dr.Chase\n");
// printf("3-gynaecologist-Dr.Cuddy\n\n");
// printf("choose the option");
// scanf("%d",&option1);
// if(option1==1)
// {strcpy(temp->category,"Neuerologist");}
// if(option1==2)
// {strcpy(temp->category,"Cardiologist");}
// if(option1==3)
// {strcpy(temp->category,"gynaecologist");}
// if(start1==NULL)
// {start1=temp;}
// else{
// struct node *t=start1;
// while(t->link!=NULL) 
// {
// t=t->link;
// }
// t->link=temp;
// }
// printf("------------\n");
// printf("choose another option\n");
//}
//void printemergencypatientdetails()
//{
// int i=1;
// struct node *t=start1;
// while(t!=NULL)
// {
// printf("%d.>",i);
// printf("%s\n",t->name);
// printf(" %s\n",t->sex);
// printf(" %d\n",t->age);
// printf(" %s\n",t->bloodgroup);
// printf(" %s\n",t->date);
// printf(" %s\n",t->phonenumber);
// printf(" ------------");
// t=t->link;
// i++;
// }
// printf("------------\n");
// printf("choose another option\n");
//}
//void printnormalpatientdetails_() 
//{
// int i=1;
// struct node *t=start;
// while(t!=NULL)
// {printf("%d.>",i);
// printf("%s\n",t->name);
// printf(" %s\n",t->sex);
// printf(" %d\n",t->age);
// printf(" %s\n",t->bloodgroup);
// printf(" %s\n",t->date);
// printf(" %s\n",t->phonenumber);
// t=t->link;
// i++;
// }
// printf(" ------------\n");
// printf("choose another option\n");
//}
//void totalfee()
//{
// int a=((keyupdate2_*samepatient)+(keyupdate_*fee)+(keyupdate1_*fee1));
// printf("total fees :%d\n",a);
// printf("------------\n");
// printf("choose another option\n");
//}
//void totalpatient()
//{
// int a=keyupdate1_+keyupdate_+keyupdate2_;
// printf("total number of patients :%d\n",a);
// printf("------------\n");
// printf("choose another option\n");
//}
//int main()
//{
// int j,k;
//printf("****************PRINCETON-PLAIINSBORO TEACHING TEACCHING HOSPITAL*******************\n\n");
//printf("1:- Normal patient\n");
//printf("2:- Emergency patient\n");
//printf("3:- Print normal patient details\n");
//printf("4:- Print emergency patient details\n");
//printf("5:- total fee\n"); 
//printf("6:- total patients currently in the hospital\n");
//printf("7:- to exit the program\n");
//while(1)
//{
//scanf("%d",&j);
// {
//switch(j)
//{
// case 1: insertnormalpatient_();
// break;
// case 2: insertemergencypatient_();
// break;
// case 3: printnormalpatientdetails_();
// break;
// case 4: printemergencypatientdetails();
// break;
// case 5: totalfee();
// break;
// case 6: totalpatient();
// break;
// case 7: exit(0);
// break;
//}
//} 
//}
//return 0; 
//}

#include <bits/stdc++.h>

using namespace std;

void Reverse(int arr[],int size){
    cout<<"Array Before : ";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\nArray Ater : ";
    for(int i=size;i<=0;i++){
        cout<<arr[i]<<"  ";
    }    
}

int main(){
    int arr[4]={2,3,4,1};
    Reverse(arr, 4);
}
