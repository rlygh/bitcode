#include <iostream>

int main(){
    int n,i,A=0,B=0;
    char a;
  
    scanf("%d", &n);  
    for(i=1;i<=n;i++){
        scanf("\n%c", &a);
      if(a=='A'){
        A=A+1;
      }else{
        B=B+1;
      }
    }
    if(A>B)
    printf("A");
    else printf("B");
    
    
    return 0;
}