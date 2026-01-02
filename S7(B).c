#include<stdio.h>

int print(int m,int p)
{
    if(p>m)
    {
        return;
    }
    printf("%d\n",p);
    print( m,p+1);

}
int main()
{
    int n;scanf("%d",&n);
    int p = 1;
    print(n,p);
    return 0;
}
