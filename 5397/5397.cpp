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
        s.clear();
        cin >> s;    

        password.clear();
        it = password.begin();    

        for(int j = 0 ; j < s.length(); ++j){
            switch(s[j]) {
                case '<':
                    if(it != password.begin())
                        it--;
                    break;
                case '>':
                    if(it != password.end())
                        it++;
                    break;
                case '-':
                    if(it != password.begin()){
                        it--;
                        it = password.erase(it);
                    }
                    break;
                default:
                    it = password.insert(it,s[j]);
                    it++;
                    break;
            }
        }
        for(char x : password)
            cout << x;
        cout << endl;
    }
    return 0;
}