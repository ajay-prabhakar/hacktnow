#include<bits/stdc++.h>
using namespace std;
int main()
{
	int start, end, i, j, count=0;
	// to print all the prime number between any range
	// enter the two number (starting and ending)
	cout<<"Enter starting number : ";
	cin>>start;
	cout<<"Enter ending number : ";
	cin>>end;
	cout<<"Prime Number Between "<<start<<" and "<<end<<" is :\n";
	for(i=start; i<=end; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
}
