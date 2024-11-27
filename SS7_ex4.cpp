#include <stdio.h>
int main(){
	int mang[5];
	printf("Moi ban nhap cac bien vao mang\n");
	for(int i=1;i<=5;i++){
		printf("so thu nhat %d : ",i);
		scanf("%d",&mang[i]);
	}
	return 0;
	
}

