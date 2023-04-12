#include <stdio.h>
 main (){
	int a [6];
	scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5]);
	
	for(int i = 0; a[i] != '\0'; i++){
		printf("%d\n", a[i]);
	}
}