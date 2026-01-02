#include<stdio.h>
void print(int m)
{
    if(m==1)
    {
        printf("1");
        return;
    }
    printf("%d ",m);
    print( m-1);

}
int main()
{
    int n;scanf("%d",&n);
    print(n);
    return 0;
}


