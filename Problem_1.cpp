//1 find maximum and minimum element

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >>n;
    int arr[n];
    cout << "Enter " << n << " elemnts : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max,min;
    max=min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout << "Maximum element : "<< max << endl;
    cout << "Minimum element : "<< min ;
    return 0;

}