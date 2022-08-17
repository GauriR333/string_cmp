#include<stdio.h>
#include<string.h>
void main(){
	char s1[100];
	char s2[100];
	int i;
	int f=0;
	printf("Enter the string 1 : ");
	scanf("%s",&s1);
	printf("Enter the string 2 : ");
	scanf("%s",&s2);
	
	
	if(strlen(s1)==strlen(s2)){
		for(i=0;s2[i]!='\0';i++){
			if(s1[i]!=s2[i])
				f=1;
		}
		if(f==0){
			printf("stringes are equal");
		}else{
			printf("strings are not equal");
		}
	}else{
		printf("striges are not equal");
	}
}
	

