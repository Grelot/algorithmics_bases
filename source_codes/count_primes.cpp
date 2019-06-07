#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
    	vector<bool> valArray(n,true);
    	for(int i=2; i*i<n ; i++) {    		
    		if(valArray[i]){
    			for(int j =i*i ; j <n ;j=j+i) {    				
    				valArray[j]=false;
    			}
    		}
    	}
    	int nPrimes=0;
	    for(int i=2 ; i<n ; i++) {	    	
	    	if(valArray[i]){
	    		nPrimes+=1;
	    	}
	    }
	    return(nPrimes); 
	}
};


int main() 
{
	Solution solve;
	int n = 10000; // less than this negative number
	int numberPrimes;
	numberPrimes = solve.countPrimes(n);
	printf("The number of prime numbers p less than a non-negative number n = %d is p = %d\n", n, numberPrimes);
	return 0;
}
