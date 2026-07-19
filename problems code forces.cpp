#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
int n;
cin>>n;
while(n--){
 string s,t;
 cin>>s>>t;
 int slen=s.length();
 int tlen=t.length();
 int maxlen=max(slen,tlen);
 for(int i=0;i<maxlen;i++){
  if(i<slen){
    cout<<s[i];
  }
   if(i<tlen){
    cout<<t[i];
   }

 }
cout<<endl;

}

    return 0;
}
