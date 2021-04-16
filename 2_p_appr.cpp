
//2-pointer approach for finding sum of pairs

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int start=0,end,sum,currentsum;
	end=n-1;
	cout<<"Enter the value:- ";
	cin>>sum;
	while(start<=end){
		currentsum=a[start]+a[end];
		if(currentsum==sum){
			cout<<a[start]<<"   "<<a[end]<<endl;
			start++;
			end--;
		}
		else{
			if(currentsum>sum){
				end--;
			}
			else{
				start++;
			}
		}
	}
	
	
	return 0;
}
