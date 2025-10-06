// // // 1 Largest element in array 

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int max,min;
//     max=min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout << "Max : " << max;
//     cout << "\nMin : " << min;
//     return 0;

// }

// // // 2 Second smallest element

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int smallest=arr[0];
//     int slargest=-1;
//     for(int i=1;i<n;i++){
//         if(arr[i] > smallest){
//             slargest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i] < smallest && arr[i] > slargest){
//             slargest=arr[i];
//         }
//     }
//     cout << "Largest : " << smallest;
//     cout << "\nSecond smallest : " << slargest;
//     return 0;
// }

// // //2nd smallest + smallestt

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int smallest=arr[0];
//     int ssmallest=100000;
//     for(int i=1;i<n;i++){
//         if(arr[i] < smallest){
//             ssmallest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i] > smallest && arr[i] < ssmallest){
//             ssmallest=arr[i];
//         }
//     }
//     cout << "Smallest : " << smallest;
//     cout << "\nSecond Smallest : " << ssmallest;
//     return 0;
// }

// // //3 check arry is sorted ??

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int is_sorted=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]>=arr[i-1]){
//         }
//         else{
//             is_sorted=0;
//         }
//     }
//     if(is_sorted==0){
//         cout << "not sorted Array ";
//     }
//     else{
//         cout << "Sorted";
//     }
//     return 0;

// }

// // //4 Remove duplicates from array 

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[i] != arr[j]){
//             arr[i+1]=arr[j];
//             i++;
//         }
//     }
//     i=i+1;
//     cout << "Unique elements : " << i;
//     return 0;
// }

// // //using set 

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Array Entered : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     set <int > st ;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     cout <<"\nNew array : ";
//     for(auto it : st){
//         cout  <<  it << " ";
//     }
//     return 0;

// }

// // //5 - Left rotate by one place 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     cout << "New Array : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// // //6 Left rotate by D places

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Rotated Array : ";
//     for(int i=n-1;i>=0;i--){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// //7-  move all zeroes to end 

// // Brute force

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin>> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     vector <int> temp;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     int nonz=temp.size();
//     for(int i=0;i<nonz;i++){
//         arr[i]=temp[i];
//     }
//     cout << "New array : ";
//     for(int i=nonz;i<n;i++){
//         arr[i] =0;
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// // OPTIMAL APPROACH FOR SAME QUESTION 

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin>> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int j=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             j=i;
//             break;
//         }
//     }
//     for(int i=j+1;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     cout << "New array : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// // Linear Search 

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >>n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter number to search : ";
//     cin >> key;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             cout << "Element "<< key << " found at index : "<< i;
//             break;
//         }
//         else{
//             cout << key << " Not found ";
//             return -1;
//         }
//     }
//     return 0;
// }

// // UNION of two sorted arrays  [ BRUTE FORCE ]

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n1,n2;
//     cout << "Enter n1 : ";
//     cin >> n1;
//     int arr1[n1];
//     cout <<"Array 1 - " <<"Enter "<< n1 << " elements : ";
//     for(int i=0;i<n1;i++){
//         cin >> arr1[i];
//     }
//     cout << "Enter n2 : ";
//     cin >> n2;
//     int arr2[n2];
//     cout <<"Array 2 - " <<"Enter "<< n2 << " elements : ";
//     for(int i=0;i<n2;i++){
//         cin >> arr2[i];
//     }
//     set <int> st;

//     for(int i=0;i<n1;i++){
//         st.insert(arr1[i]);
//     }
//     for(int i=0;i<n2;i++){
//         st.insert(arr2[i]);
//     }
//     int uni[st.size()];
//     int i =0;
//     for(auto it : st){
//         uni[i++]=it;
//     }

//     cout << "Union of Both : " ;
//     for(int i=0;i<st.size();i++){
//         cout << uni[i] << " ";
//     }
//     return 0;

// }

// // Optimal approach
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout << "Enter n1 : ";
    cin >> n1;
    int arr1[n1];
    cout <<"Array 1 - " <<"Enter "<< n1 << " elements : ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "Enter n2 : ";
    cin >> n2;
    int arr2[n2];
    cout <<"Array 2 - " <<"Enter "<< n2 << " elements : ";
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    vector <int> uniarr;
    int i=0;
    int j=0;
    while(i< n1 && j < n2){
        if(arr1[i]<=arr2[j]){
            if(uniarr.size()==0 || uniarr.back() != arr1[i]){
                uniarr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uniarr.size() ==0 || uniarr.back() != arr2[j]){
                uniarr.push_back(arr2[j]);
            }
            j++;
            
        }
    }
    while(j<n2){
        if(uniarr.size() ==0 || uniarr.back() != arr2[j]){
            uniarr.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n1){
        if(uniarr.size() ==0 || uniarr.back() != arr1[i]){
            uniarr.push_back(arr1[i]);
        }
        i++;
    }
    cout << "\nUnion Array : ";
    for(auto it : uniarr){
        cout << it << " ";
    }
    return 0;
}

