//output leading elements of an array
//Leading element is the element which is greater than all it's right positioned elements

#include<iostream>

using namespace std;

int main()

{
	int j = 0;
	int arr[] = {1,4,3,2};
	for(int i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(arr[i]<arr[j])
				break;
			
		}
		if(j == 4)
			cout<<arr[i]<<endl;
	}
}
