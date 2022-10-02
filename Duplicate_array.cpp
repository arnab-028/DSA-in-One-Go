#include<bits/stdc++.h>
using namespace std;
class solution{
public:

    vector<int> duplicates(int arr[], int n) {

    bool match{ false };

    int index{ 0 };

    int x{ 0 };

    std::vector<int> vec{};

    std::sort(arr, arr + n);

  for (int i{ 0 }; i < n - 1; ++i)

    {    i = x;

        match = false;

        for ( x=i + 1 ; x < n; ++x)

        {

          if (arr[i] == arr[x])

            {

                index = x;

                match = true;

            }

            else 

                break;

        }

        if (match==true)

        vec.push_back(arr[index]);

    }

       if (vec.empty())

        return{ -1 };

        return vec;

 }

};
//driver code
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int [a];
  for( int i=0; i<n; i++) cin>>a[i];
  solution obj;
  vector<int> ans = obj.duplicates(a,n);
  for(int i: ans) cout<<t<< ' ';
  cout<<endl;
  }
  return 0;
  }

 
