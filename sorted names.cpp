#include<stdio.h>
#include<string.h>
main(){
   int i,j,n;
   char str[100][100],s[100];
   char choice;
   printf("Enter number of names :\n");
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   printf("enter the choice(a/d):");
   scanf("%c",&choice);
   
   
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   if(choice=='A')
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
   else if(choice=='D')
   for(i=0;i>n;i--){
      for(j=i-1;j>n;j--){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
   else
   {
   	printf("enter the crt choice:");
   }
   
   
}
