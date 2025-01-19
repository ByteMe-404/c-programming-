/*
Author    : Rian
Created on: 2025-01-17    
      time: 21:40:09
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
int solve(){
int m,n;
scanf("%d %d",&m,&n);
int countx = 0;
int county = 0;
int f,s;
for (int i = 0; i < m; i++)
{
    
    int x,y;
    scanf("%d %d",&x,&y);
    if (i==0)
    {
        f=x;
        s=y;
    }
    countx+=x;
    county+=y;
}

countx+=n -f;
county+=n -s;
printf("%d\n",2*(countx+county));

}


int main(){
int t;
scanf("%d",&t);
while (t--)
{
    solve();
}




return 0;
}