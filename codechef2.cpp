#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s) {
        stack<char> stk;
        int l =s.size();
        if(l==1) {
            return false;
        }
 
        for(int i=0; i<l; i++) {

            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {  
                stk.push(s[i]);
            }
            else if(s[i] == ')'){
                if(stk.top() == '('){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else if((s[i] == '}')){
                if(stk.top() == '{') {
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                if(stk.top() == '['){
                    stk.pop();
                }
                else{
                    return false;
                }       
            }
        }
   
        if(stk.size() == 0){
            return true;
        }
        else{
            return false;
        }
        
    }

int main(){
    int n;
    string str;

    cin >> str;

    if(isValid(str)){
        cout << "True" << endl;
    } 
    else{
        cout << "False" << endl;
    }
   
    return 0;
}