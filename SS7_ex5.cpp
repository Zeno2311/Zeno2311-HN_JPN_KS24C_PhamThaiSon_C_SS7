#include <stdio.h>
int main(){
	int mang[]={6,8,9,1,10};
	int max,min;
	for(int i=0;i<=5;i++){
		if(mang[i]>max){
			max=mang[i];
		}
		if(mang[i]<min){
			min=mang[i];
		}
	}
	printf("So lon nhat trong mang la %d\n",max);
	printf("So nho nhat trong mang la %d",min);
	return 0;
}
