// a must be greater than b
pair< int, int > gcd( int a, int b ) {
  if ( b == 0 ) return { 1, 0 };
  pair< int, int > q = gcd( b, b % a );
  return { q.second, q.first - q.second * ( a / b ) };
}
