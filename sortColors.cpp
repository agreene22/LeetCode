// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int i = 1;
//         int curr = 0;
//         int prev = nums.at(0);
//         // for(int i = 1; i < nums.size(); ++i){
//         //     int curr = nums.at(i);
//         //     while(curr < prev){
//         //         nums.at(i-1) = curr;
//         //         nums.at(i) = prev;
//         //     }
//         // }
//         while(i < nums.size()){
//             curr = nums.at(i);
//             prev = nums.at(i-1);
//             while(curr < prev){
//                 nums.at(i-1) = curr;
//                 nums.at(i) = prev;
//                 if(i >= 2){
//                     prev = nums.at(i-2);
//                     curr = nums.at(i-1);
//                 }
//                 // else{
//                 //     continue;
//                 // }
//
//
//             }
//             i++;
//             // curr = nums.at(i);
//             // prev = nums.at(i-1);
//
//         }
//     }
// };

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
  // void sortColors(vector<int>& nums) {
  int myints[] = {2,0,2,1,1,0};
  std::vector<int> nums (myints, myints + sizeof(myints) / sizeof(int) );
      int i = 1;
      int curr = 0;
      int prev = nums.at(0);
      int pos = 0;
      cout << "Here at least " << endl;
      // for(int i = 1; i < nums.size(); ++i){
      //     int curr = nums.at(i);
      //     while(curr < prev){
      //         nums.at(i-1) = curr;
      //         nums.at(i) = prev;
      //     }
      // }
      while(i < nums.size()){
        cout << "u" << endl;
          curr = nums.at(i);
          prev = nums.at(i-1);
          pos = i;
          int count = 0;
          while(curr < prev){
            cout << "curr" << curr << endl;
            cout << "prev " << prev << endl;
              nums.at(i-1) = curr;
              nums.at(i) = prev;
              pos = i - count;
              if(i >= 2){
                  prev = nums.at(pos-(count + 2));
                  curr = nums.at(pos-(count + 1));
                  continue;
              }
              curr = nums.at(i);
              prev = nums.at(i-1);
              count++;
              // else{
              //     continue;
              // }


          }
          i++;
          for(int j = 0; j < i; j++){
            cout << j << " " << nums.at(j) << endl;
          }
          // curr = nums.at(i);
          // prev = nums.at(i-1);

      }
  // }

  // vector<int> nums;

}
