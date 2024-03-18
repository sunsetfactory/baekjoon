#include <iostream>
#include <list>
#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string
#define list std::list


int main(){

    int N;
    string s;
 
    cin >> N;

    list<char>::iterator it;
    list<char> password;

    for(int i = 0 ; i < N ; ++i){
        
        cin >> s;    

        it = password.begin();    

        for(int j = 0 ; j < s.length(); ++j){
            if(s[j] =='<' && it != password.begin())
                it--;
            else if(s[j]=='>' && it != password.end())
                it++;
            else if(s[j]=='-' && it != password.begin()){
                it--;
                it = password.erase(it);
            }
            else{
                it = password.insert(it,s[j]);
                it++;
            }
        }
        for(char x : password)
            cout << x;
        cout << endl;
    }
    return 0;
}
