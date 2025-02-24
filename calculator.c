#include<stdio.h>
#include<math.h>
void print_menu();
double Mod(int,int);
double divide(double,double);

int main(){
    int choice;
    double first,second,result;
while(1){
    print_menu();
    scanf("%d",&choice);
    if(choice==7){
        break;
    }
    if(choice>7 || choice<1){
        printf("\nWrong choice Entered.");
        continue;
    }
    printf("Enter the First Number:");
    scanf("%lf",&first);
    printf("Enter the Second Number:");
    scanf("%lf",&second);
    switch (choice)
    {
    case 1:
      result=first+second;
        break;
    case 2:
      result=first-second;
        break;
    case 3:
       result=first*second;
        break;
    case 4:
        result=divide(first,second);
        break;
    case 5:
        result=Mod(first,second);
        break;
    case 6:
        result=pow(first,second);
        break;

    }
    if(!isnan(result)){
    printf("\nThe Result of the Operation is :%.2lf",result);
        }
   }
   return 0;
}
void print_menu(){
    printf("\n---------------------------------\n");
    printf("\nWelcome to Simple Calculator\nChoose one of the following option:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n6.Power\n7.Exit");
    printf("\nNow,Enter your choice:");

}
double Mod(int a,int b){
    if(b==0){
        fprintf(stderr,"\nInvalid Argument for Modulus");
        return NAN;
    }
    else{
    return a % b;}
}
double divide(double a,double b){
    if(b==0){
        fprintf(stderr,"\nInvalid Argument for Modulus");
       return NAN;
    }
    else{
        return a/b;
    }
}
