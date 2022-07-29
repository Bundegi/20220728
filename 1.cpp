#include <string>
#include <set>
#include <cmath>
using namespace std;
int solution(string dirs) {
    set<string> s;
    double x = 0,y = 0;
    for (int i = 0; i < dirs.size(); i++) {
        if (dirs[i] == 'U') {
            y++;
            if (abs(y) > 5) {
                y--;
                continue;
            }
            s.insert(to_string(x) + to_string(y-0.5));
        }
        else if (dirs[i] == 'D') {
            y--;
            if (abs(y) > 5) {
                y++;
                continue;
            }
            s.insert(to_string(x) + to_string(y + 0.5));
        }
        else if (dirs[i] == 'R') {
            x++;
            if (abs(x) > 5) {
                x--;
                continue;
            }
            s.insert(to_string(x-0.5) + to_string(y));
        }
        else {
            x--;
            if (abs(x) > 5) {
                x++;
                continue;
            }
            s.insert(to_string(x+0.5) + to_string(y));
        }
    }
    return s.size();
}
int main() {
    solution("LULLLLLLU");//LRLRLRL
}