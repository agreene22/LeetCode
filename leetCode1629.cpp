#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxDuration = 0;
        int currDuration = 0;
        char key;
        for(int i = 0; i < keysPressed.size(); i++){
            if(i == 0){
                currDuration = releaseTimes[i];
            }else{
                currDuration = releaseTimes[i] - releaseTimes[i-1];
                currDuration = abs(currDuration);
            }
            if(currDuration >= maxDuration){
                if(currDuration == maxDuration){
                    if(key > keysPressed[i]){
                        continue;
                    }
                }
                maxDuration = currDuration;
                key = keysPressed[i];
            }
        }
        return key;
    }
};


int main(int argc, char **argv){
  int l[4] = [6,26,46,47];
  vector<int> r (l, l + sizeof(l)/sizeof(int));
  // vector<int>* rT;
  // rT = &r;
  string entry = "cbdap";
  Solution s;

  cout << s.slowestKey(&r,entry);

  return 0;
}
