#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int strlen(string str){

    int len = 0;
    int i = 0;
    while(str[i] != '\0'){

        len++;
        i++;
    }

    return len;
}
int main(){
// i am giving one example of my name to varify this code lets see 


// here you can compare by print (value in debugger or registers and value in this code )

// you can varify this c++ to generate the key acc to usrename (only valid for small letters name and atleast 4 chars username )

cout<<"enter the name"<<endl;
string _name;
cin >> _name;
int edx = strlen(_name);
int ebx = 1;
char al;
int index = 0;
int ecx = 0;

// first loop
while(edx != ebx){

  al = _name[index];
  if(al > 'Z'){    
      ecx = ecx + int(al);     
  }
  index++;
  ebx++;
}  

// arithmetic calculations 

ecx = ecx + 0x29A;
ecx = ecx*0x3039;
// printf("%x",ecx); 
ecx = ecx - 0x17;
// printf("%x",ecx);
ecx = ecx*9;
ebx = 0;

int eax;
// printf("%x",al);
eax = ecx;
// printf("%x",eax);

ecx = 0xA;
edx = 0;
string str = "";
int str_index = 0;
//second loop
while(eax != 0){

edx =  eax%ecx;
edx = edx + 0x30;
str[str_index] = edx;
str_index++;
eax = eax/ecx;

}
//  printf("%x",ecx);
al = 0;
ebx = 9;

string edi = "";
int esi = 0;
// third loop
// storing the esi string in reverse order in edi (or you can reverse the esi string that will also work )
while(ebx != 0){

    al = str[ebx-1 + esi];
    edi = edi + al;
    
    ebx--;   

}

// generating password 
//  reverse string + skip the three chars username 
string password = "";

password = password + edi;
for(int i = 3; _name[i] != 0; i++){

    password = password + _name[i];
}

cout<<"username = "<<_name<<endl;
cout<<"password = "<<password<<endl;

return 0;
}




























 