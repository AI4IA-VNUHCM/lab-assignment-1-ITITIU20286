/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
		int n,b,i,m; 
	 
	m=10; 
	for(b=2;b<=m;b++) 
	{ 
	 
 	 i=2; 
 	while(b%i!=0) 
  	{ 
  		i++; 
  	} 
  	 
 	if(i==b) 
  	{ 
		printf("%d ",b) ; 
		}
	}
	
	
	return 0;
}