#include <vector>

int positive_sum (const std::vector<int> arr){
  int arr_sum = 0;
  for (int i; i < arr.size(); i++){
    if (arr[i] >= 0){
    arr_sum += arr[i];
      }
    else {
     arr_sum += 0;
    }
  }
   return arr_sum;
}
