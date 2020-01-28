#include <iostream>
#include <cstring>

using namespace std;


int main(){
    /*a
    char s[256];
    cin.getline(s,256);
    int k=0;
    for(int i=0;i<strlen(s);i++)
        if(s[i] == ' ')
                  k++;
        cout << k + 1;
    */
    /*b
    partial

    char s[256] ;
    cin.getline(s,256);
    char voc[] = "aeiouAEIOU";
    int k = 0 , i ;
    if(strchr(voc,s[0]))
        k = 1;
    for(i = 0; s[i] ; i++){
        if(k == 1 && s[i-1] != ' ')
            cout << s[i];
        else{
            if(s[i] != ' '){
                k = 0;
                cout << endl;
            }
        }
        if(strchr(voc,s[i]))
            k = 1;
    }
    */
    /*c
    */
    char s[256] ;
    cin.getline(s,256);
    int i;
    s[0] = toupper(s[0]);
    for(i = 0; s[i] ; i++)
    {
        if(s[i-1] == ' ')
        {
            cout << endl;
            s[i] = toupper(s[i]);
        }
        cout << s[i];
    }
    return 0;
}
