#include <iostream>
#include <vector>
#define ll long long
using namespace std;
std::vector<ll int> multiple(ll int n)
{
	std::vector<ll int> vec;
	ll int i=0;
	for (i=1; i <n; ++i)
	{
		if(i%3==0 || i%5==0)
		{
			vec.push_back(i);
		}
	}

	return vec;
}

void findSum(const std::vector<ll int> &v,ll int ul)
{

	ll int sum=0;
	for (ll int i = 1; i < ul; ++i)
	{
		sum+=v[i];
	}
	cout<<sum<<endl;
}

int main()
{
	std::vector<ll int> v=multiple(100000000);
	ll int n;
	ll int i;
	scanf("%lld",&n);
	ll int arr[n];
	for (i = 0; i < n; ++i)
	{
		scanf("%lld",arr+i);
	}

	for(i=0;i<n;++i)
	{
		findSum(v,arr[i]);
	}

	return 0;
}