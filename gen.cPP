#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int t = rnd.next(1, 1000);
    printf("%d\n", t);

    for (int i = 0; i < t; i++) {
        int n = rnd.next(1, 100);
        printf("%d\n", n);
        for (int j = 0; j < n; j++) {
            int x = rnd.next(0, 100000);
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}