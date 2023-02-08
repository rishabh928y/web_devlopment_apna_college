#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> mp;
  
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]] = 0;
        }
      
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }

        int k=0;

        for(int j=0; j<mp.size(); j++) {
            if(mp[nums[j] == 1]){
                k = j;
                break;
            }
        }

        return k;
    }

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);

    int z = singleNumber(v);
    
    cout << z <<endl;
    return 0;
}