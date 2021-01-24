//1)
int main()
{
	int x = 1000000;
	int y = 1000000;

	// This causes overflow even
	// if z is long long int
	long long int z = x * y;

	cout << z;
	return 0;
}

// output :- -727379968
//use (long long int)x*y
//or 1LL*x*y
//1LL is 1 in long long int data type

//2)
int main()
{
	int n;
	cin >> n;
	string s;
	// cin.ignore(1, '\n');
	for (int i = 0; i < n; ++i)
	{
		getline(cin, s);
		cout << s.length() << " ";
		cout << s << endl;
	}
	return 0;
}
//here not using cin.ignore before geline is mistake
//cin.ignore should be used.


//3)
int main()
{
	string s;
	while (getline(cin, s))
	{
		if (s.empty())
			break;
		cout << s << endl;
	}
	return 0;
}
//if we don't know the size of input

//4)
z = (z + x*y) % mod;
z = ((z % mod) + ((x % mod) * (y % mod)) % mod) % mod;
//use the second always many wrong answers are saved

//5)
int main()
{
	float a ;
	cin >> a;
	if (a == 10)
		cout << “YES”;
}

// float and double data types don’t have infinite precision .
// Beware (6/15 digit precision for them respectively).
// So always use a margin of (~0.0000001) in comparing.

if (abs(a - 10) < (0.0000001))
{
	cout << “YES”;
}











