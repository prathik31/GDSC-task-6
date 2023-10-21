// to find the length of last word;

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int count=-1;
    for (int i = n; i >0; i--)
    {    
        if (s[i]!=' ')
        {
            cout<<s[i]<<endl;
            count++;
        }
        else{
            break;
        }
    }   
    cout<<count;
}



// array of unique quadruplets;

#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    array<int,10> arr;
    int n,target;
    cin>>n>>target;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    vector<int> v;
    vector<vector<int>> ans;

     for (int i = 0; i < n-3; i++)
    {
        for (int j = i+1; j < n-2; j++)
        {
            for (int k = j+1; k < n-1; k++)
            {
                for (int l = k+1; l < n; l++)
                {
                    if ((arr[i]+arr[j]+arr[k]+arr[l])==target)
                    {
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[k]);
                        v.push_back(arr[l]);
                    }
                    
                }
                
            }
            
        }
        
    }
    for(auto i:v){
       cout<<i<<" ";
    }

}