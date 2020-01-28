#include <iostream>
#include <cstring>

using namespace std;

bool ebool(char s){

}
int main(){

    char s[256] , word[256];
    cin.getline(s,256);
    cin >> word;
    int k = 0;
    char *word2 = strtok(s,word);
    while(word2){
        k++;
        word2 = strtok(NULL,word);
    }
    cout << k;
    return 0;
}
