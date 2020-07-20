//counting the number of 1's in binary representation of gcd
//playing around with XOR

#include<bits/stdc++.h>

using namespace std;

int gcd(int n1,int n2)
{
	if(n1 == 0)
	return n2;
    
    else
    {
    	return(gcd(n2%n1,n1)); //gcd using Euler Algorithm O(log min(n1,n2))
    }
	
}

int countones(int res)
{
	int cnt = 0;
	while(res)
	{
		int temp = res % 2;
		if(temp == 1)
			cnt++;

        res = res/2;

	}
	return cnt;
}

int main()
{
	int a = 36;
	int b = 60;
	int res = gcd(a,b);
	cout<<res<<endl;
	cout<<countones(res);
	return 0;


}



