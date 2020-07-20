//program to check if the both the half of the strings contain exaclty the same frequency of elements in them.
//like abcbca or abacaba
#include<bits/stdc++.h>

using namespace std;

int main()
{
string s = "abcbca";
//cin>>s;
int lfreq[26]; // maintaining freq of all the characters 
int rfreq[26];
for(int i = 0;i<26;i++)
{
	lfreq[i] = 0;
	rfreq[i] = 0;
}
for(int i=0;i<s.length()/2;i++)
{
	char current = s[i];
    lfreq[current - 'a']++;  //providing offset so that array stays 'in bound'


}
//n = 4 ->1 2 3 4      i to start from 2
//n = 5   1 2 3 4 5    i  to start from 3
//n = 6   1 2 3 4 5 6  i to start from 3     
// thus i must start from (n+1)/2
for(int i=(s.length()+1)/2;i<s.length();i++)
{
	char current = s[i];
	rfreq[current - 'a']++;

}
bool result = true;
for(int i = 0;i<s.length();i++)
{
if(lfreq[i] != rfreq[i])
{
	result = false;
	break;
}
}
if(result = true)
cout<<"YES"<<endl;

else
cout<<"NO";
return 0;
}











