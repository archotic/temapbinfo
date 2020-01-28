
#include <iostream>
#include <cstring>

using namespace std;

int ejon(char f){
    char v[256] = "abcdefghijklmnopqrstuvwxyz";
    int i;
    for(i = 0 ; v[i] ; i++)
        if(v[i] == f)
            return i+1;
}
int main()
{
    char s[256] , *firstword , *lastword , *copyr;
    char v[256] = "aeiou";
    char f;
    char l;
    cin.getline(s,256);
    copyr = s;
    firstword = strtok(s," ");
    lastword = copyr+(strlen(s)+1);
    f = tolower(s[0]);
    l = tolower(lastword[0]);
    if(ejon(l) > ejon(f))
        cout << s << " " << lastword;
    else
        cout << lastword << " " << s;
    return 0;
}
/***

    by : justin seitz , source : BlackHatPython ( Python programming for hacker and pentesters )

            import socket

            target_host = "www.pbinfo.ro"
            target_port = "80"

            client = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

            client.sendto("Hi"(target_host,target_port))

            response = client.recv(4096)

            print response

            # a gift for reader , don't compile it


*/
