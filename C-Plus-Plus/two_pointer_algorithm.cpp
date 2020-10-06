//Two Pointer Algorithm From Scratch in C++

/*
Two Pointer Algorithm is an effective technique which is used for searching pairs in a sorted array.
This technique can be used to solve a number of problems, however the following code demonstrates how to use it to solve the following question:

Question: Given an array A having N integers, sorted in ascending order, print pair if there is any pair of element (A[i],A[j]) such that the sum equals K. 
*/
#include<iostream>
using namespace std;
int sumPair(int a[],int n,int sum){
    int i=0;
    int j=n-1;
    while(i<j){
        int current_sum=a[i]+a[j];//assume it as current sum
        if(current_sum>sum){
            j--;
        }
        else if(current_sum<sum){
            i++;
        }
        else if(current_sum==sum){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
}
int main(){
    int n,sum;
    cin>>sum;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sumPair(a,n,sum);
}


/*
Space Complexity for this problem: O(1)
Time Complexity for this problem: O(N)
*/
/* input:-
sum=5                                                                                                                                      
n=6                                                                                                                                      
array=1 2 3 4 5 6 
Output:-
1 and 4                                                                                                                                
2 and 3 
*/

