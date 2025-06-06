#include<iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> arr={1,2,3,5,4};

    for(int i=0;i<=arr.size()-1;i++){

        int max=i;
        for(int j=i+1;j<=arr.size()-1;j++){
            if(arr[i]>arr[j]){
                max=i;
            }
            arr[j]=arr[i];
            arr[i]=max;
        }
    }


    for (int val:arr){
        cout<<val<<endl;
    }
 return 0;
}