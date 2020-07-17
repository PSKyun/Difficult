#include <iostream>

#include <algorithm>

#include <cstring> //memset

using namespace std;

const int MAX = 1000;

const int MOVE = 30 + 1;

int T, W;

int plum[MAX];

int cache[3][MAX][MOVE];

int maxPlum(int tree, int second, int move) //나무 번호, 초, 움직인 횟수

{

    //기저사례

    if (second == T)

        return 0;

    int &result = cache[tree][second][move];

    if (result != -1)

        return result;

    if (plum[second] == tree) //현재 있는 나무에서 자두가 떨어진다면

        if (move < W) //아직 움직일 수 있다면

            //max(움직이지 않을 경우, 움직였을 경우)

            return result = max(1 + maxPlum(tree, second + 1, move), maxPlum(3 - tree, second + 1, move + 1));

        else

            return result = 1 + maxPlum(tree, second + 1, move);

    else //반대쪽 나무에서 자두가 떨어진다면

        if (move < W)

        return result = max(maxPlum(tree, second + 1, move), 1 + maxPlum(3 - tree, second + 1, move + 1));

    else

        return result = maxPlum(tree, second + 1, move);
}

int main(void)

{

    cin >> T >> W;

    for (int i = 0; i < T; i++)

        cin >> plum[i];

    memset(cache, -1, sizeof(cache));

    cout << maxPlum(1, 0, 0) << endl;

    return 0;
}