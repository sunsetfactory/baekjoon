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

    list<char>::iterator cursor;
    list<char> l;

    for(int i = 0 ; i < N ; ++i){
        s.clear();
        cin >> s;    

        l.clear();
        cursor = l.begin();    

        for(int j = 0 ; j < s.length(); ++j){
            switch (s[j]) {
                case '<':
                    if(cursor != l.begin())
                        cursor--;
                    break;
                case '>':
                    if(cursor != l.end())
                        cursor++;
                    break;
                case '-':
                    if(cursor != l.begin()){
                        cursor--;
                        cursor = l.erase(cursor);
                    }
                    break;
                default:
                    cursor = l.insert(cursor,s[j]);
                    cursor++;
                    break;
            }
        }
        for ()
        // for(char x : l)
        //     cout << x;
        cout << endl;
    }
    return 0;
}
