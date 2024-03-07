#include <iostream>
using namespace std;

void sol() {
    int n;
    cin >> n;
    int arr[3] = {1, 1, 1};
    int cnt1 = 1, cnt2 = 1, cnt3 = 1;


    while(arr[0]+arr[1]+arr[2]<n && arr[0]<26) {
        while(arr[0]+arr[1]+arr[2]<n && arr[1]<26) {

            while(arr[0]+arr[1]+arr[2]<n && arr[2]<26) {
                if(arr[0]+arr[1]+arr[2]==n) break;
                arr[2]++;
            }
            if(arr[0]+arr[1]+arr[2]==n) break;
            arr[1]++;
        }
        if(arr[0]+arr[1]+arr[2]==n) break;
        arr[0]++;
    }

   for(int i=0; i<3; i++) cout<<char(arr[i]+96);


   cout<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}



