#include <iostream>
#include <string>
#include <thread>
#include <ostream>
#include <sstream>
#include <vector>

using namespace std;

void validate(string s)
{
if(isalpha(s[0])){
string s1= s.substr(s.length()-4)
if(s1==".com"|| s1==".edu")
{
cout<<s<<"mail is valid"<<endl;
}
else
{
cout<<s<<"mail invalid"<<endl;
}
}
else
{
cout<<s<<"mail invalid"<<endl;
}
}

int mai(int argc,char*argv[])
{
int i;
cout<<"enter the arguments"<<argc<<endl;
{
cout<<argv[i]<<endl;
}
char *ptr;
string str;
str=argv[1];
string s[200],s1,T;
stringstream X(str);
int j=0;
int m=0;
if(str.length()>1){
j=0;
while(getline(X,T,',')){
s[j++]=T;
m+=1;
}
}
for(int i=0;i<=m;i++){
thread*t1= new thread(validate,s[i]);
}
return 0;
}
