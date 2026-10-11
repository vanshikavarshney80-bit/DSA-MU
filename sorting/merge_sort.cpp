
#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& a) {
    int n = a.size();
    if(n <= 1) return;

    int mid = n / 2;
    vector<int> l(a.begin(), a.begin() + mid);
    vector<int> r(a.begin() + mid, a.end());

    mergeSort(l);
    mergeSort(r);

    int i = 0, j = 0, k = 0;

    while(i < l.size() && j < r.size())
        a[k++] = (l[i] < r[j]) ? l[i++] : r[j++];

    while(i < l.size()) a[k++] = l[i++];
    while(j < r.size()) a[k++] = r[j++];
}

int main() {
    vector<int> a = {5, 2, 8, 1, 3};

    mergeSort(a);

    for(int x : a) cout << x << " ";
}
