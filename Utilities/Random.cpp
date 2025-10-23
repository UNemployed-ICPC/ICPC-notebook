// 32 bit rng
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); //high quality random number generator using time as seed
int random(int l, int r){return uniform_int_distribution<int>(l,r)(rng);} //returns a random integer number between [l, r]

// 64 bit rng
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count()); // seed
ll random(ll l, ll r){return uniform_int_distribution<ll>(l,r)(rng); }
