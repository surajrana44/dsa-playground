#include <iostream>
using namespace std;
int main(){
/*
int n;
cin>>n;
 
// creation a 2d array
int ** arr = new int*[n];
for(int i=0;i<n;i++){
    arr[i]=new int [n];

}

// taking input 
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin >> arr[i][j];
    }
}
// taking output
cout<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<< arr[i][j];
    } cout<<endl;
}
*/

int row;  // crating 3*4 matrix
cin>>row;

int col;
cin>>col;

// creating 2d  array
int **arr = new int*[row];
for(int i=0;i<row;i++){
   
    arr[i] = new int[col];
}


// taking input

for (int i=0; i<row ;i++){
    for(int j=0; i<col ;j++){
        cin >> arr[i][j];
        
    }
}

// taking ouotput 
cout<<endl;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<< arr[i][j];
    } cout<<endl;
}

// releasing memory 
for(int i=0; i<row ; i++){
    delete []arr[i];

}

delete []arr;







}