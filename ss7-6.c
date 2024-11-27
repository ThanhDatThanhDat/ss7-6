#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
	int i, a, b;
	for(i = 0;i< 5; i++){
		printf("%d\n", arr[i]);
		if(arr[i] % 2 == 0){
	    	b = arr[i] + 3; 
	    	printf(" la so chan trong mang suy ra :%d .\n", b);
	    } else{
	    	a = arr[i] + 2; 
	    	printf("  la so le trong mang suy ra :%d .\n", a);
	    }
	}
	
	return 0;
}
