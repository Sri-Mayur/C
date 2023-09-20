#include <iostream>
using namespace std;

void un(int m, int n, int a[100], int b[100]){

    int j=0;

    for(int i=0; i<m;i++){
        cout<<a[i]<<" ";
    }

    for(int i=0; i<n;i++){
        if(b[i] != a[j])
        cout<<b[i]<<" ";
        j++;
    }

}

int main() {
    int a[100], b[100], m, n;

    cout<<"Enter the length of Set1:";
    cin>>m;

    cout<<"Enter the length of Set2:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<"of Set1:";
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<"of Set2:";
        cin>>b[i];
    }

    un(m, n, a, b);
}