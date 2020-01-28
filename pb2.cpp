
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
    char s[256] , *firstword , *lastword , *copyr , copyr2[256];
    char f;
    char l;
    cin.getline(s,256);
    int i , k ;
    for(i = 0 ; s[i] ; i++)
        copyr2[i++] = s[i];
    copyr = s;
    firstword = strtok(copyr," ");
    lastword = copyr+(strlen(s)+1);
    f = tolower(copyr[0]);
    l = tolower(lastword[0]);
    cout << copyr2;
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
