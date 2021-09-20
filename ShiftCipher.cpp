/*
Nama        : Yuela Thahira
NPM         : 14081019064
Kelas       : A
Deskripsi   : Shift Cipher Enkripsi Deskripsi 
*/

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

string encryption(string plainText, int key){
    string cipherText = "";
    for (int i = 0; i < plainText.size(); i++){
        if (isupper(plainText[i])){
            cipherText += char((int(plainText[i] + key - 65) % 26) + 65);
        }
        else{
            cipherText += char((int(plainText[i] + key - 97) % 26) + 97);
        }
    }
    return cipherText;
}

string decryption(string cipherText, int key){
    string plainText = "";
    for (int i = 0; i < cipherText.size(); i++){
        if (isupper(cipherText[i])){
            plainText += char((int(cipherText[i] - key - 65) % 26 + 26) % 26 + 65);
        }
        else{
            plainText += char((int(cipherText[i] - key - 97) % 26 + 26) % 26 + 97);
        }
    }
    return plainText;
}

int main(){
    string plainText;
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "Masukkan Text: ";

    getline(cin, plainText);
    int key;
    cout << "Masukkan Kunci: ";
    cin >> key;
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";

    string cipherText = encryption(plainText, key);
    string plain_Text = decryption(cipherText, key);

    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "Hasil Enkripsi: " << cipherText;
    cout << "\nHasil Dekripsi: " << plain_Text;
    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
}