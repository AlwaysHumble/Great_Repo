/* Love Nines 28=19+9*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

long long int numsum(long long int n){
    if(n<9 || (n>9 && n<18)) return -1;
    long long int last = n%10;
    if(last==8) if(n<18) return -1;
    if(last==7) if(n<27) return -1;
    if(last==6) if(n<36) return -1;
    if(last==5) if(n<45) return -1;
    if(last==4) if(n<54) return -1;
    if(last==3) if(n<63) return -1;
    if(last==2) if(n<72) return -1;
    if(last==1) if(n<81) return -1;
    if(last==0) if(n<90) return -1;
    return 10-last;
    
    
}

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<numsum(n)<<endl;
        
    }
    return 0;
}

