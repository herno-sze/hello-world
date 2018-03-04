# hello-world
A test repository

Testing links:

- [megoldas05osszeg.cpp](megoldas05osszeg.cpp)
- [`megoldas05osszeg.cpp`](megoldas05osszeg.cpp)

```cpp
// A feladat egy koncentrációs játék, ahol 1-től kezdve soroljuk a számokat, 
// és minden 3-mal osztahtó szám helyett azt kell mondani, 
// hogy Fizz, az 5-tel oszthatók helyett, hogy Buzz. 
// Ha 3-mal és 5-tel is osztható a szám, akkor azt kell 
// mondani, hogy FizzBuzz. 
// Írjunk programot, ami ilyen módon számol 1-től 100-ig!

#include <iostream>
using namespace std;

void main() {
	int i = 1;
	for (i; i <= 100; i++) {
		if (i % 15 == 0)
			cout << "FizzBuzz";
		else if (i % 3 == 0)
			cout << "Fizz";
		else if (i % 5 == 0)
			cout << "Buzz";
		else
			cout << i;
		cout << "\n";
	}
}
/* comment */
```

