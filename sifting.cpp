#include<iostream>
using namespace std;

int Flag[100];	//����1~100֮����������±�Ϊ��������Ԫ��ֵΪ1 
int Prime[100];	//��������

int main(int argc, char const *argv[])
{
    /* code */
    int i, j, s = 0;
   Flag[0] = Flag[1] = 0;
   for (i = 2; i <= 100; i++)	//��ʼ������ 
	  Flag[i] = 1;
	
   for (i = 2; i <= 100; i++)
   {
	  if (Flag[i] == 1)	//
	  {
		 Prime[s++] = i;	//�����s������Ϊi 
		 j = 2 * i;
		 while (j <= 100)
		 {
			Flag[j] = 0;
			j = j + i;	//��i�ı���ɸѡ�� 
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


