#include <iostream>
#include <iomanip>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void decoct() {
  	ifstream open("liczby2.txt");
  	int x,tabval=1000,tab[tabval],dec=0,oct=0;

  	for(int i=0;i<tabval;i++) open>>tab[i];
  	
  	for(int i=0;i<tabval;i++){
    	x=tab[i];
    	while(x){
      		if(x%10==6) 
				dec++;
      		x=x/10;
    	}
    	x=tab[i];
    	while(x){
    		if(x%8==6) 
				oct++;
      		x=x/8;
    	}
  	}
  cout<<oct<<endl<<dec;
}

int main(int argc, char** argv) {
  decoct();
}
