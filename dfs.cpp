
/*
��Ŀ����
�����Ȼ��1��n���в��ظ������У���n��ȫ���У�Ҫ������������һ���������в���������ظ������֡�

����
���� n(1��n��9)

���
��1��n��ɵ����в��ظ����������У�ÿ��һ�����С�ÿ������ռ5�С�

��������
3
�������
    1    2    3
    1    3    2
    2    1    3
    2    3    1
    3    1    2
    3    2    1
*/

#include <iostream>
using namespace std;
void dfs(int i);
int n, m;
 int a[10];
 int b[10]={1,2,3,4,5,6,7,8,9};

int main(int argc, char const *argv[])
{
    /* code */
    cin>>n;
    
    dfs(0);
    return 0;
}



void dfs(int i){
    if(n==i){
        for(int j=0;j<n;j++)
            printf("%5d",a[j]);
        printf("\n");
 
    }
    else
        for(int j=0;j<n;j++)
            if(b[j]!=0){
                b[j]=0;
                a[i]=j+1;
                dfs(i+1);
                b[j]=j+1;
            }
 
 
    
 
}

