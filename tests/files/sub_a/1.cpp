        
// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
        using namespace std;
        
        int main() {
        vector<int> nums;

        vector<int> obj;    
        int target = 6;
        for(int i=0;i<nums.size();i++) 
    {
        //cout<<nums[i]<<" ";
        for(int j=0;j<nums.size();j++){
            if (i != j){
                cout<<j<<"adsasda"<<endl;
                if (nums[i] + nums[j] == target){
                    cout<<j<<"adsasda"<<endl;
                    obj.push_back(i);
                    obj.push_back(j);
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                    //Because nums[0] + nums[1] == 9, we return [0, 1].
                    cout<<"Because nums["<<i<<"] "<<"+ nums["<<j<<"] "<<"== "<<target<<", we return ["<<i<<", "<<j<<"]."<<endl;
                    return 0;
                }

            }
    }
    }
        }