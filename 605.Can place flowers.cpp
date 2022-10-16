//flowerbed in leetcode
/*
1.i/p:
    1 0 0 0 1
    1
  o/p:
    true
    
2.i/p:
    1 0 0 0 1
    1
  o/p:
    false
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    string b;
    int d;
    getline(std::cin, b);
    istringstream iss(b);
    while (iss >> d)
          v.push_back(d);
    int n;
    cin>>n;
	int count = 0 ;
    int s = v.size();
    for(int i = 0 ; i < s ; i++ ){
        if(v[i] == 0){    
            bool leftflag = (i == 0) || (v[i-1] == 0);  
            bool rightflag = (i == s-1) || (v[i+1] == 0);                
            if(leftflag && rightflag){  
                v[i] = 1;
                count++;
                if(count >= n){
                    cout<<"true";
                    return 0;
                }
            }
        }
    }
    if(count>=n)
    {
        cout<<"true";
    }
    else
        cout<< "false";
	return 0;
}