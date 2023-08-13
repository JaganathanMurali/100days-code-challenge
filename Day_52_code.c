#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, a[1000], x, i, j;
	
	scanf("%d", &t);
	
	for(i = 0; i<t; i++){
	    scanf("%d", &n);
	    
	    for(j = 0; j<n; j++){
	        scanf("%d", &a[j]);
	    }
	    
	    scanf("%d", &x);
        
        for(j = 0; j<n; j++){
	        if(a[j] == x){
	            printf("YES");
	        }
	        else{
	            printf("NO");
	        }
	    }
	}
	return 0;
}

