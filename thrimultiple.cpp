#include<iostream>
using namespace std;
int findtriplate (int n, int m, int arr[]){
    int count = 0;
    for(int i = 0; i<m-1; i++){
        for(int j = i-1; j<m-2; j++){
            for(int k = j-1; k<m; k++){
                count++;
            }
        }
    }
    return count;

}

int main(){
    int arr[]={3, 4, 10, 2, 5, 8 , 9};
    cout<<findtriplate(40, 6, arr);
    return 0;

}