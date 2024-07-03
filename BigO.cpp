// //time complexity for the loop with elementary operators.
// //complexity for the single for-loop
// #include<iostream>
// using namespace std;
// int main(){
//     int a=0,b=0;
//     int n=8,m=8;
//     for (int i=0;i<n;i++){
//         a=a+5;
//     }
//     for (int i=0;i<m;i++){
//         b=b+20;
//     }
//     cout<<a<<' '<<b;
//     return 0;
// }


//time complexity for the nested loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int a=0;
//     int n=8,m=8;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             a=a+j;
//             cout<<a<<" ";
//         }
//         cout<<endl;
//     }
// }


//Let’s have two iterators in which, outer one runs N/2 times, 
//and we know that the time complexity of a loop is considered as O(log N), 
//if the iterator is divided / multiplied by a constant amount K then the time complexity is considered as O(logK N).
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5,k=0;
//     //loop runs for n/2 times
//     for (int i=n/2;i<=n;i++){
//         //loop runs for log n times for all i
//         for(int j=2;j<=n;j=j*2){
//             cout<<k<<' ';
//             k=k+n/2;
//         }
//     }
//     return 0;
// }


//let’s understand the while loop and try to update the iterator as an expression.
#include <iostream>
using namespace std;
int main(){
    int n=18;
    int i=n,a=0;
    while (i>0){
        cout<<a<<' ';
        a=a+i;
        i=i/2;
    }
    return 0;
}