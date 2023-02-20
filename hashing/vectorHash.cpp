#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>ht[15];
    int n;
    cout<<" how many data elements to be inserted : ";
    cin>>n;
    cout<<" enter the elements : ";
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        int r=x%10;
        ht[r].push_back(x);

    }
    for(int i=0;i<15;i++){
		cout<<i<<" : ";
		for(int j=0;j<ht[i].size();j++){
			cout<<ht[i][j]<<" ";
		}
		cout<<endl;
	}
}
