//cipher Assignment
#include <iostream>
#include <string>
using namespace std;
int main (){
     string real_letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
     string key ="zyxwvutsrqponmlkjighfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA";

     string secret_message{};
     cout << "Enter your sceret message : ";
     getline(cin, secret_message);

     string encrypted_message{};

     cout << "Encrypting message" << endl;
     cout << "---------------" << endl;

     for (char c:secret_message){
        size_t position= real_letter.find(c);
        if (position!=string::npos){
            char new_character {key.at(position)};
            encrypted_message+= new_character;


        }else{
         encrypted_message+=c;
        }
     }
     cout << "Encrypted message " << encrypted_message << endl;

     string decrypted_message{};
     cout << "-------------" << endl;
     cout << "Decrypting message..." << endl ;



     for (char c:encrypted_message){
        size_t position= key.find(c);
            if(position!= string::npos){
            char new_character{real_letter.at(position)};
            decrypted_message+=new_character;

        }else{
            decrypted_message+=c;
        }
     }
     cout << decrypted_message;
     return 0;

}






