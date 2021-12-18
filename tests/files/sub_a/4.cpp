        
// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
        using namespace std;
        
        int main() {
        vector<int> nums;
        nums.push_back(3);
        nums.push_back(2);
        nums.push_back(4);
        //nums.push_back(15);

        vector<int> obj;    
        int target = 6;
        for(int i=0;i<nums.size();i++) 
    {
        //cout<<nums[i]<<" ";
        for(int j=0;j<nums.size();j++){
            if (i != j){
                cout<<j<<"adsasda"<<endl;
            
    }
        }