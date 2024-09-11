#include <vector>
#include <iostream>
using namespace std;

int main() {
  int N,G;
  bool val=false;
  cin>>N>>G;
  if (N<=100&&N>=1&&G<=100&&G>=1){
    vector<int> X(N);
    for (int k=0;k<N;k++){
        cin>>X[k];
        if (X[k]<0||X[k]>9){
            val=true;
        }
    }
    if (val){
        cout<<"Has introducido valores invalidos";
    }else{
        for (int k=1;k<=G;k++){
            int ulti;
            ulti=X[N-1];
            X.pop_back();
            X.insert(X.begin(),ulti);
        }
        for (int k=0;k<N;k++){
            cout<<X[k]<<" ";
        }
    }
  }else{
    cout<<"Has introducido valores invalidos";
  }
  return 0;
}
