#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include <fstream>
#include <vector>
#include <sstream>






void main() {
	ifstream fin("source.txt");
	ofstream fout("sorted.txt");



	double num, count = 0, sum = 0, max = 0, min = 0, even = 0, odd = 0, prost = 0;
	int num1;

	cout << "Enter a num: ";
	cin >> num1;

	while (fin >> num) {
		count++;
		sum += num;

		if (num > max || max == 0) {
			max = num;
		}

		if (num < min || min == 0) {
			min = num;
		}

		if (int(num) % 2 == 0){
			even++;
		}

		if (int(num) % 2 != 0) {
			odd++;
		}


		if (num == int(num)) {
			int n = int(num);
			if (n > 1) {
				bool prime = true;
				for (int i = 2; i * i <= n; i++) {
					if (n % i == 0) {
						prime = false;
						break;
					}
				}
				if (prime) {
					fout << "Prime: " << num<<endl;
				}
			}
		}





		if (int(num) % num1 == 0) {
			cout << num << " divisible by " << num1<<endl;
		}

	}

	

	fout << "Count: " << count << endl;
	fout << "Sum: " << sum << endl;
	fout << "Average: " << sum / count << endl;
	fout << "Max: " << max << " Min: " << min<<endl;
	fout << "Even: " << even << " Odd: " << odd << endl;






	


	fin.close();
	fout.close();
}