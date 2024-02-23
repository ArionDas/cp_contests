#include<bits/stdc++.h>
#define lli long long int
#define ll long long 
#define V vector<lli>
#define VV vector<vector<lli>> 
#define M map<lli,lli>
#define UM unordered_map<lli,lli>
#define S set<lli>
#define US unordered_set<lli,lli>
#define ST stack<lli>
#define Q queue<lli>
#define DQ deque<lli>
#define PQ priority_queue<lli>
using namespace std;

// ------------------------------ BIT MANIPULATION TRICKS -------------------------------------

// // printing the binary representation
// void print_binary(lli num){
//     for(lli i=10;i>=0;i--) cout<<((num>>i)&1);
//     cout<<endl;
// }

// // checking if the ith bit is set or not.
// bool check_ith_bit_set(lli i) {
//      return (number >> x) & 1;
// }

// // checking if power of two
// bool check_power_of_two(lli x)
// {
//      return (x && !(x & (x - 1)));
// }

// // clear right most set bit
// lli clear_right_most_bit(lli n) {
//      return n & (n-1);
// }

// // lowercase to uppercase
// char lower_to_upper(char c) {
//      return c|' ';
// }

// // uppercase to lowercase
// char upper_to_lower(char c) {
//      return c|'_';
// }

// // checking if power of 4
// bool checkPowerOf4(lli n)
// {
//     // return true if `n` is a power of 2, and
//     // the remainder is 1 when divided by 3
//     return !(n & (n - 1))&& (n % 3 == 1);
// }
// using namespace std;

// // count number of set bits
// lli countSetBits(lli n)
// {
//     lli count = 0;
//     while (n)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// // clear all trailing zeros
// lli clear_all_trailing_zeros(lli n) {
//      return n&(n+1);
// }

// // set the last bit which is not set
// lli set_last_cleared_bit(lli n) {
//      return n|(n+1)
// }

// // just keeps the last set bit
// lli keep_the_last_set_bit(lli n) {
//      return n & (-n);
// }

// ------------------------------------------ XXX--------------------------------------------

void Arion() {
    lli n,q;
    cin >> n >> q;

    V c(n,0);
    V ps(n,0);

    for(lli i=0; i<n; i++) {
        cin >> c[i]; 
    }

    for(lli i=1; i<n; i++) {
        c[i] += c[i-1];
        cout << c[i] << " ";
    }

    while(q--) {
        lli l,r;
        cin >> l >> r;
        if(l==r) {
            cout << "NO" << endl;
        }
        else {
            lli sum = c[r]-c[l];
            
        }
    }
}
 
int main() {
     lli t;
     cin >> t;
     while(t--) {
          Arion();
     }
}