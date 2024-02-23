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
    lli n,k;
    cin >> n >> k;

    V a(n,0),x(n,0);

    for(lli i=0; i<n; i++)
        cin >> a[i];
    for(lli i=0; i<n; i++)
        cin >> x[i];

    // for(lli i=0; i<n; i++)
    //     cout << a[i] << " ";
    // cout << endl;
    // for(lli i=0; i<n; i++)
    //     cout << x[i] << " ";

    // cout << endl;
    //lli p=0,n=0;
    // for(lli i=0; i<n; i++) {
    //     cin >> x[i];
    //     if(x[i]>0)
    //         p += 1;
    //     else
    //         n += 1;
    // }

    //vector<pair<lli,lli>> vpp(p),vpn(n);
    vector<lli> vp(n,0);

    for(lli i=0; i<n; i++) {
        if(x[i]>0) {
            vp[x[i]-1] += a[i];
        } else {
            vp[abs(x[i])-1] += a[i];
        } 
    }

    // for(lli i=0; i<n; i++) {
    //     cout << vp[i] << " ";
    // }
    // cout << endl;

    // sort(vp.begin(),vp.end());
    // sort(vpn.begin(),vpn.end());

    lli i=0,j=0;
    lli nb = 0;

    while(i<n) {
        nb += k;
        // if(vp[i]==0)
        //     continue;
        lli curr_sec = vp[i];
        if(curr_sec==0) {
            i += 1;
            continue;
        }
        //cout << vp[i] << endl;
        //cout << "cs " << curr_sec << endl;
        if(curr_sec>nb) {
            cout << "NO" << endl;
            return;
        }
        else if(curr_sec==nb) {
            nb = 0;
            // i += 1;
            // continue;
        }
        else {
            nb -= vp[i];
        }
        i += 1;
    }
    cout << "YES" << endl;
    //sort(vp.begin(),vp.end());
}
 
int main() {
     lli t;
     cin >> t;
     while(t--) {
          Arion();
     }
}