#define ll __int128
const ll mod = ((ll)1e18) + 3, p = 53;

struct Hash{
  string s;
  int n;
  vector<ll> h, pw;

  Hash(string ss) : s(ss), n(ss.size()), h(n + 1), pw(n + 1){
    pw[0] = 1;
    h[0] = 0;

    for (int i =0 ;i < n; i++){
      h[i + 1] = (h[i] + ((1ll + (s[i] - 'a'))* pw[i]) % mod) % mod;
      pw[i + 1] = (pw[i] * p) % mod;
    }

  }
  
  ll query(int l, int r){ // inclusive query [l ,r] indexed at 1
    ll hs= (h[r] - h[l - 1] + mod) % mod;
    hs = (hs * pw[n - l]) % mod;
    return hs;
  }
  
};
