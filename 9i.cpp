#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int luythua(int sohang)
{
	int i,tich=1;
	for(i=1;i<=sohang;i++) tich*=i;
	return tich;
}
	
int main(int argc,char*argv[])
{
	int x,n,j;
	float SoHang,s=0;
	printf("Nhap lan luot x va n:");
	scanf("%d%d",&x,&n);
	for (j=0;j<=n;j++)
	{
		SoHang=pow(-1,j)*(float(pow(x,2*j))/float(luythua(2*j)));
		s+=SoHang;
	}
	printf("Ta co tong la:%f\n",s);
}
		
