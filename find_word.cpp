#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

class solution{
    public:
        int closeTarget(vector<string>&words, string target, int startindex){
        int n = words.size();
        int minDistance = n;
        bool found = false;

        for(int i=0; i<n; i++){
                if(words[i]==target){
                found = true;
                
                int forwardDist = abs(i-startindex);

                int backwardDist = n - forwardDist;

                int currentMin = min(forwardDist, backwardDist);

                minDistance = min(minDistance,currentMin);
            }
        }
        return found ? minDistance : -1;
    }
};

int main(){
    solution sol;
    vector<string>words = {"hello", "i", "am", "leetcode", "hello"};
    string target = "i";
    int startindex = 0;

    int result = sol.closeTarget(words, target, startindex);

    cout<<"Shortest distaance to '"<<target<<"':"<<result<<endl;
    return 0;
}