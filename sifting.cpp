#include<iostream>
using namespace std;

int Flag[100];	//保存1~100之间的数，若下标为素数，则元素值为1 
int Prime[100];	//保存素数

int main(int argc, char const *argv[])
{
    /* code */
    int i, j, s = 0;
   Flag[0] = Flag[1] = 0;
   for (i = 2; i <= 100; i++)	//初始化数组 
	  Flag[i] = 1;
	
   for (i = 2; i <= 100; i++)
   {
	  if (Flag[i] == 1)	//
	  {
		 Prime[s++] = i;	//保存第s个素数为i 
		 j = 2 * i;
		 while (j <= 100)
		 {
			Flag[j] = 0;
			j = j + i;	//将i的倍数筛选掉 
		 }
	  }
   }
    for (int a = 0; a <sizeof(Prime)/sizeof(Prime[0]); a++)
    {
        /* code */
        cout<< Prime[a]<<endl;

    }
    
     

     
    return 0;
}


