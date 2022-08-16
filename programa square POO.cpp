#include <iostream>
#include<stdio.h>

using namespace std ;

int main ()
{
   int n, t ;
   char simbolo='*';
   
   cout << " Introduzca un numero de lados: " ;
   cin >> n ;
   cout<<"eliga tipo de cuadrado: "<<endl<<"1)lleno "<<endl<<"2)hueco"<<endl;
   cin>>t;
   if(t == 1){
   	
	   	for (int j=0; j<n ; ++j) {
	   	
	      for (int i=0; i<n ; ++i) {
	      	
	         cout << simbolo ;
	      }
	      cout << endl;
	   	}
   	
	}else{
		
	    for (int i = 1; i <= n; i++) {
	    	
        for (int j = 1; j <= n; j++) {
        	
            if (i == 1 || i == n || j == 1 || j == n){
            	cout<<simbolo;
                //printf("* ");
            }else{
            	cout<<" ";
                //printf(" ");
            }
        }
		
        printf("\n");
    	}
	}

}
   
