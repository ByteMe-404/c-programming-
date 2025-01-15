// 9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies


#include <stdio.h>
int main(){


    int x,y;
    scanf("%d %d",&x,&y);
    if(x >= 0 && y >= 0 )
    {
        printf("first coordinate");
    }else if(x>= 0 && y<0)
    {
        printf("second coordinate");
    }else if(x<0 && y< 0 ){
        printf("third coordinate");
    }else{
        printf("forth coordinate");
    }

    return 0;
}