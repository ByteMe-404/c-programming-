// 10. Write a C program to determine eligibility for admission to a professional course based on the following criteria

#include <stdio.h>
int main(){

    int math,phy,chem;

    printf("enter the marks in math :");
    scanf("%d",&math);
    printf("enter the marks in physics :");
    scanf("%d",&phy);
    printf("enter the marks in chemistry :");
    scanf("%d",&chem);



    if (math>=65 && phy>=55 && chem>=50){

        int total_marks = math+phy+chem;
        int math_phy = math+phy;
        
        if(total_marks >=190 || math_phy)
        {
            printf("eligible for admission.");
        }

    }
    else
    {
        printf("not eligible for admission . ");
    }
    






    return 0;
}