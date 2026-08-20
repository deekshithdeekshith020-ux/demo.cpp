#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int even_total=0;
    int odd_total=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
        if( arr[i]%2==0){
            even_total+=arr[i];
        
    
        
        }
        else{
        odd_total+=arr[i];
        }

    }
    cout<<"the sum of odd number"<<" "<<odd_total<<endl;
    cout<<"the sum of even numbers"<<" "<<even_total<<endl;
    return 0;
}