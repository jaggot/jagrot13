#include <iostream>

using namespace std;

bool isLetter(char x){
    return toupper(x) != tolower(x);
}

bool isUpper(char x){
    return x == toupper(x);
}

int main()
{
    for(int x=32; x < 130; x+=1){
        cout << "'" << (char)x << "'\t" << isLetter(x) << endl;
    }
    string input;
    getline(cin, input);
    string og = input;
    //int ROT = 3;
    for(int ROT = 0; ROT <= 26; ROT++){
        input = og;
        for(int i = 0; i < input.length(); i++){
            if(isLetter(input.at(i))){
                input.at(i) = isUpper(input.at(i))*24 + ((toupper(input.at(i))-65) + ROT) % 26 + 65;
            }
        }
        cout << "ROT " << ROT << "\t" << input << endl;
    }
    return 0;
}
