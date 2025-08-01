
#include<bits/stdc++.h>
using namespace std;

int main(){
//   *  
//  *** 
// *****
        int r=3;
        int c = 5;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(j<=2+i && j>=4-i){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;

        }

        // butter fly pattern
// *                  *
// **                **
// ***              ***
// ****            ****
// *****          *****
// ******        ******
// *******      *******
// ********    ********
// *********  *********
// ********************
// *********  *********
// ********    ********
// *******      *******
// ******        ******
// *****          *****
// ****            ****
// ***              ***
// **                **
// *                  *
                    
        
        int n;
        cout<<"Enter num: ";
        cin>>n;

        // this 1st upper part
        for(int i=1;i<=n;i++){
            // this for *
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            // this for space
            for(int j=1;j<=2*n-2*i;j++){
                cout<<" ";
            }
            // this for *
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        // this lower part
        for(int i=1;i<=n;i++){
            // *
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            // space
            for(int j=1;j<=2*i;j++){
                cout<<" ";
            }
            // *
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        
}


