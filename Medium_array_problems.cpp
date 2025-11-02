// 1 - Two sum 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Entered Elements : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Enter target element : ";
    cin >> target; 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout << "Target exists " << endl;
                cout << arr[i] << "+" << arr[j] << endl;
                
            }
            
        }
    }
    return 0;
}