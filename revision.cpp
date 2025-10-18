// //  largest elemnt in array
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >>n;
    int arr[n];
    cout << "Enter " << n << " Elements : ";
    for(int  i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << "max : "<< max;
    return 0;
}

// 2 !
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >>n;
    int arr[n];
    cout << "Enter " << n << " Elements : ";
    for(int  i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    int sl=-1;
    for(int i=1;i<n;i++){
        if(arr[i]> max ){
            sl=max;
            max=arr[i];
        }
        else if(arr[i] < max && arr[i] > sl){
            sl =arr[i];
        }
    }
    cout << "Max : " << max << endl;
    cout << "2nd Max : " << sl;
    return 0;
}