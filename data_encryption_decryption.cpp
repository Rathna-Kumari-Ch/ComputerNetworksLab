//Data Encryption and Decryption

#include <iostream> 
using namespace std; 
  
string encrypt(string text, int s) 
{ 
    string result = ""; 
    for (int i=0;i<text.length();i++) 
    { 
        if (isupper(text[i])){
		    result += char(int(text[i]+s-65)%26 +65); 
		}
		else{
		    result += char(int(text[i]+s-97)%26 +97);
		}
    }
    return result; 
} 
string decrypt(string text, int s) 
{ 
    string result = ""; 
    for (int i=0;i<text.length();i++) 
    { 
        if (isupper(text[i])){
		    result += char(int(text[i]-s-65)%26 +65); 
		}
		else{
		    result += char(int(text[i]-s-97)%26 +97);
		}
    }
    return result; 
} 
int main() 
{ 
    string text;
    cout<<"Enter text : ";
	cin>>text; 
    int n;
    cout<<"Enter shift : ";
    cin>>n;
    string s = encrypt(text,n);
    cout << "\nEncrypted: " << s; 
    string t = decrypt(s,n);
    cout << "\nDecrypted: "<<t;
    cout << endl;
    return 0; 
}

