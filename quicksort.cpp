#include <iostream>
	using namespace std;

void quickSort(int input[], int size) {
  
    
    if(size==0||size==1)
        return;
    
    int counter=0;
    for(int i=1;i<size;i++)
        if(input[i]<input[0])
            counter++;
    int temp=input[counter];
    input[counter]=input[0];
    input[0]=temp;
    
    int i=0,j=size-1;
    while(i<counter&&j>counter)
    {
    if(input[i]<input[counter])
        i++;
    else if(input[j]>=input[counter])
        j--;
    else{
        int temp1=input[i];
        input[i]=input[j];
        input[j]=temp1;
        i++;
        j--;
        }
    }
    quickSort(input,counter);
    quickSort(input+counter+1,size-1-counter);
    
    
}
	int main(){
		int in[100];
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>in[i];
		}
		quickSort(in,n);
		cout<<"after sorting \n ";
		for(int i=0;i<n;i++){
			cout<<in[i]<<" ";
		}
		
	}
