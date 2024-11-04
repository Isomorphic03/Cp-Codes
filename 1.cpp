/*The extended Euclidean algorithm is an algorithm that, given an integer pair 
(a,b) as input, finds an integer pair 
(x,y) such that 
ax+by=±gcd(a,b) in 
O(logmin(∣a∣,∣b∣))*/

// Sample implementation of extended Euclidean algorithm
pair<long long, long long> extgcd(long long a, long long b) {
  if (b == 0) return make_pair(1, 0);
  long long x, y;
  tie(y, x) = extgcd(b, a % b);
  y -= a / b * x;
  return make_pair(x, y);
}



