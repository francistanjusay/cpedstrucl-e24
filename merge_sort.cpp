#include<iostream>
using namespace std;
//merge
int main(){
int numArr[ ] = {6,5,3,1,8,7,2,4};
int l1,k,h1,l2,h2,i,j;
int n=8;
int temp[100];
int size;
for(size=1;size<n;size=size*2){ l1=0; k=0; while(l1+size<n){ h1=l1+size-1; l2=h1+1; h2=l2+size-1; if(h2>=n)
{
	h2=n-1;
}
	i=l1;
	j=l2;
	while(i<=h1&&j<=h2){
	if(numArr[i]<=numArr[j]){
	temp[k++]=numArr[i++];
}
	else{
	temp[k++]=numArr[j++];
}
}
	while(i<=h1){
	temp[k++]=numArr[i++];
}
	while(j<=h2){
	temp[k++]=numArr[j++];
}
	l1=h2+1;
	for(int l=0;l<n;l++){
	cout<<numArr[l];
	cout<<" ";
}
	cout<<"\n";
}
	for(i=l1;k<n;i++){
	temp[k++] = numArr[i];
}
	for(i=0;i<n;i++){
	numArr[i]=temp[i];
}
}
	for(int l=0;l<n;l++){
	cout<<numArr[l];
	cout<<" ";
}
	cout<<"\n";
return 0;
}
 
