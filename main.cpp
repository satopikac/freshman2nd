#include "stdio.h"
#include "stdlib.h"
#define Pi 3.1415
void getnum(int* p,int n);
void r(int* p,int n);
int main()
{
    int n;
    scanf("%d",&n);
    int* p=(int*) malloc(n*sizeof( int));
    getnum(p,n);
    r(p,n);
    for (int i = 0; i < n; ++i) {
        printf("%d ",p[i]);
    }
}
void getnum(int* p,int n)
{
    for (int i = 0; i < n; ++i)
        scanf("%d", &p[i]);
}
void r(int* p,int n)
{
    int temp;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }

        }

    }
}


