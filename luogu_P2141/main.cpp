#pragma optimize(2)
#include <iostream>
using namespace std;
int marker[1000][4];
int counter=0;
bool isValid= false;
int main(){
    int n;
    cin>>n;
    int input[1000];
    for (int i = 0; i < n; ++i) {
        cin>>input[i];
    }
    int ans=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if(i==j||i==k||j==k)
                    continue;
                if (input[i]==input[j]+input[k]){
                    isValid= true;
                    for (int l = 0; l < 1000; ++l) {
                        if (marker[l][0]==input[i]&&marker[l][1]==input[j]&&marker[l][2]==input[k]||marker[l][0]==input[i]&&marker[l][1]==input[k]&&marker[l][2]==input[j]){
                            isValid= false;
                            break;
                        }

                        if (!isValid)
                            continue;
                        if (isValid){
                            marker[counter][0];
                            marker[counter][1];
                            marker[counter][2];
                            counter++;
                            ans++;
                        }

                    }
                }

            }
        }
    }
    cout<<ans;
    return 0;
}

int main(){
    int n,a[100],b[100],bk=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=2;
    }
    for(int i=0;i<n;i++){
        for(int o=i+1;o<n;o++){
            for(int p=0;p<n;p++){
                if(a[p]==a[i]+a[o]&&b[p]!=1){
                    bk++;
                    b[p]=1;
                }
            }
        }
    }
    cout<<bk;
    return 0;
}