#include <iostream>
using namespace std;

void update(int & n){  // pass by refrence
    n++;
    cout<<n<<endl;

}

int getsum(int *arr , int n) {
    int sum=0;
    for(int i=0; i<n; i++){
       sum+=arr[i];
    }
    return sum;
}

int main (){

/*
    int i =5;
  // j is refrence variable 
    int &j = i;
// both are giving the same memory but diffrent name i,j
    j++;
    cout<<i<<" "<<j;

---------------------------------------------------------------------------------

int n = 5;
cout<<n<<endl;
update(n);
cout<<n<<endl;

---------------------------------------------------------------------------------

char ch = 'a';
cout<<sizeof(ch)<<endl;
char *p = &ch;
cout<<sizeof(p)<<endl;

---------------------------------------------------------------------------------

new int[5];  // heap me int banaya ha 5 size ka
int *arr = new int [5]; // pointer se uska heap ka phele int ka address le liya 



creating variable array (n size)by using heap memory

int n;
cin>>n;

int *arr = new int[n]; 

// taking array 
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int ans = getsum(arr , n);
cout<< ans;

*/

}