#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,c,n,m,k;
    cin>>n>>m>>k;
    long long A[n][m],count=0;
    for(long long i=0;i<n;i++)
        for(long long j=0;j<m;j++)
            A[i][j]=0;
    for(long long i=0;i<k;i++){
        cin>>a>>b>>c;
        for(long long j=b-1;j<=c-1;j++)
            A[a-1][j] = 2;
    }
    for(long long i=0;i<n;i++){
	
        for(long long j=0;j<m;j++){
		
             
            if(A[i][j]!=2)
               count++;
        }
       
		
    }
    cout<<count;
    
    return 0;
}
