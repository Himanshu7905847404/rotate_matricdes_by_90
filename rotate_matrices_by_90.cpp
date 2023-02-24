
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void rotates(vector<vector<int>>&V){
    for(int i=0;i<V.size();i++){
        for(int j=0;j<i;j++){
            swap(V[i][j],V[j][i]);
        }
    }
    for(int i=0;i<V.size();i++){
        reverse(V[i].begin(),V[i].end());
    }
}

int main()
{
    int n,m;
    cout<<"Enter the row and column should be equal of the matrices so that we can rotate the matrices by 90 clockwise\n";
    cin>>n>>m;
    if(n==m){
        vector<vector<int>> V(n,vector<int>(m));
        cout<<"Enter the elements\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>V[i][j];
            }
        }
        
        cout<<"Intial Matrices before the rotation by 90 degree \n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<V[i][j]<<" ";
            }
            cout<<endl;
        }
        rotates(V);
        cout<<" Matrices After the rotation by 90 degree \n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<V[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Rows and columns are not equal this is for square matrix so not possible\n";
    }

    return 0;
}
