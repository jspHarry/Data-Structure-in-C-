#include <iostream>
#include <vector>
using namespace std;
using std::vector;

//Traversing of an array
// int main(){
//     int arr[] = {10,20,30,40,50};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     for (int i=0; i<length;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//find the largest element from an array

// class Solution
// {
// public:
//     int largest(vector<int> &arr, int n)
//     {
//         int largest = arr[0];
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] > largest)
//             {
//                 largest = arr[i];
//             }
//         }
//         return largest;
//     }
// };

// int main()
// {
//     Solution sol;
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
//     cout << "The largest element is " << sol.largest(arr, n) << endl;
//     return 0;
// }

//second largest element from an array
// class Solution {
//   public:
//     // Function returns the second
//     // largest elements
//     int print2largest(vector<int> &arr) {
//         int n = arr.size();
//         if(n==0){
//             return -1;
//         }
//         int largest = arr[0];
//         for (int i = 1; i < n; i++){
//             if (arr[i]>largest){
//                 largest = arr[i];
//             }
//         }
//         int S_largest = -1;
//         for (int i = 0; i < n; i++){
//             if (arr[i] > S_largest && arr[i] != largest){
//                 S_largest = arr[i];
//             }
//         }
//         return S_largest;
//     }
// };
// int main(){
//     Solution sol;
//     vector<int>arr={1,2,3,4,5};
//     int n = arr.size();
//     cout<<"the second largest element is: "<<sol.print2largest(arr) << endl;
//     return 0;
// }


//sorted the array

// class Solution {
// public:
//   int isSorted(int n,vector<int> a) {
//     for (int i = 1; i < n; i++) {
//       if (a[i] >= a[i - 1]) {
//       } else {
//         return false;
//       }
//     }
//     return true;
//   }
// };

// int main() {
//   Solution sol;
//   vector<int> a = {5, 3, 1, 1, 3, 6, 8, 2, 3};
//   int n = a.size();
//   cout << "Is the array sorted? " << (sol.isSorted(n, a) ? "Yes" : "No") << endl;
//   return 0;
// }

//remove duplicates from an array
// class Solution{
//     public:
//     int removeDuplicates(vector<int> &arr, int n)
//     {
//         int i=0;
//         for (int j=0;j<n;j++){
//             if (arr[i]!=arr[j]){
//                 arr[i+1]=arr[j];
//                 i++;
//             }
//         }
//         return i+1;
//     }
// };
// int main(){
//     Solution sol;
//     vector <int> arr={1,1,1,2,2,3,5,5,5,9,9};
//     int n=arr.size();
//     cout<<"duplicate element in array "<<sol.removeDuplicates(arr,n)<<endl;
//     return 0;
// }
