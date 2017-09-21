#include <stdio.h>

int binsearch(int x, int v[], int n);

int main() {
    int x = 7;
    int n = 10;
    int v[10] = {1, 7, 9, 10, 18, 23, 24, 30, 31, 43};

    printf("Found at position: %d", binsearch(x, v, n));

}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {
    int low, mid, high;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while(low <= high && x != v[mid]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    return (x == v[mid]) ? mid : -1;
}
