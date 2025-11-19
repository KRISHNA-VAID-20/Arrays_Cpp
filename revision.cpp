// //  largest elemnt in array
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >>n;
//     int arr[n];
//     cout << "Enter " << n << " Elements : ";
//     for(int  i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout << "max : "<< max;
//     return 0;
// }

// // 2 !
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >>n;
//     int arr[n];
//     cout << "Enter " << n << " Elements : ";
//     for(int  i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int max=arr[0];
//     int sl=-1;
//     for(int i=1;i<n;i++){
//         if(arr[i]> max ){
//             sl=max;
//             max=arr[i];
//         }
//         else if(arr[i] < max && arr[i] > sl){
//             sl =arr[i];
//         }
//     }
//     cout << "Max : " << max << endl;
//     cout << "2nd Max : " << sl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void reverse(int arr[],int n){     // used to roatate array - manual function
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Og array : "<<endl;
//     for(int i=0;i<n;i++){
//         cout  << arr[i];
//     }
//     // cout << "\nNew one : "<<endl;
//     // int temp=arr[0];
//     // for(int i=1;i<n;i++){
//     //     arr[i-1]=arr[i];
//     // }
//     // arr[n-1]=temp;
//     // for(int i=0;i<n;i++){
//     //     cout << arr[i];
//     // }
//     cout << "\nReversed array : "<<endl;
//     reverse(arr,n);
//     for(int i=0;i<n;i++){
//         cout << arr[i];
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,4,3};
//     for(int i=1;i<=5;i++){
//         int flag =0;
//         for(int j=0;j<4;j++){
//             if(arr[j]==i){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             cout << i;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={0,1,3,4};
//     int sum=4*(4+1)/2;
//     int s2=0;
//     for(int i=0;i<4;i++){
//         s2+=arr[i];
//     }
//     cout << sum-s2;


// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "N : ";
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int hash[10]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]==1){
//             cout << "Appeared once : " <<arr[i];

//         }
        
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter num : ";
//     cin >> num;

//     int og=num;
//     int rev=0;
//     while(num>0){
//         int lastdigit=num%10;
//         num=num/10;
//         rev=(rev*10)+lastdigit;
        
//     }
//     if(rev==og){
//         cout << "Palindrome";
//     }
//     else{
//         cout << "Not a palindrome";
//     }
//     return 0;

// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int og=n;
    int sum=0;
    int ld=0;
    while(n>0){
        ld=n%10;
        sum+=ld*ld*ld;
        n=n/10;

    }
    if(sum==og){
        cout << "Armstrong no.";
    }
    else{
        cout << "Not a armstrong no.";
    }
    return 0;
}