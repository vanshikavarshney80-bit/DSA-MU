//Quadratic
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){        //O(n)
        for(int j=0;j<i;j++){      //O(n-1)
                                   // 0+1+2+.........+(n-1)
        }  
    }                    // This is a standard arithmetic series. The formula for the sum of the first k integers is k(k+1)/. Substituting (n - 1) 
}                       //O(1)---->constant time complexity  ----->input size increases but iterations remian same

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
       for(int i=0;i<n;i=i*2){ //------->0,2,4,8,16,........2^m----->2^m<n --->t.c:0O(log n)

                for(int i=0;i<n;i++){
                  int k=5;
                  for(int j=0;j<n/k;j++){

                  }//O(log n)----->always decreasing
                }
            }
}



/*(T(n) = 2T(n-1) + O(1))
Expanding this tree leads to (1 + 2 + 4 + .... + 2^n = 2^(n+1) - 1) total operations.This simplifies to the Big-O time complexity of O(2^n).
//recursion with two calls */
void solve(int n){
    if(n==0)
    return;
    solve(n-1);
    solve(n-1);
}


//space complexity:---extra space need to store the alogorithm
#include<iostream>
using namespace std;
int main(){
         int sum=0,n;//  ------------------>constant for sum
         cin>>n;
         for(int i=0;i<n;i++){ //------->constant for i
                sum+=i;
         }

}


// int arr[n]-->O(n)














