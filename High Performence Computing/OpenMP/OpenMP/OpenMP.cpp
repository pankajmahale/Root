#include<iostream>
#include<chrono>
#include<vector>
#include<omp.h>
using namespace std;

void Hello()
{
	omp_set_num_threads(10);
#pragma omp parallel
#pragma omp critical
	cout << "Hello World" << omp_get_thread_num() << "/" << omp_get_num_threads() << endl;
}

void forloop()
{
	const int length = 1024 * 1024 * 64;
	float *a = new float[length];
	float *b = new float[length];
	float *c = new float[length];
	float *result = new float[length];

#pragma omp parallel for
	for (int i = 0; i < length; i++)
	{
		result[i] = a[i] + b[i] * erff(c[i]);
	}

	delete[] a;
	delete[] b;
	delete[] c;
	delete[] result;

}

void doloop()
{
	const int length = 1024 * 1024 * 64;
	float *a = new float[length];
	float *b = new float[length];
	float *c = new float[length];
	float *result = new float[length];

	int i = 0;
//#pragma omp parallel do	
	do
	{
		result[i] = a[i] + b[i] * erff(c[i]);
		i++;
	} while (i < length);
	delete[] a;
	delete[] b;
	delete[] c;
	delete[] result;
}

void section()
{
#pragma omp parallel sections // if you forget the parallel key word then section will run in sequece
	{
#pragma omp section
		{
			for (int i = 0; i < 1000; i++)
			{
				cout << i;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < 1000; i++)
			{
				cout << static_cast<char>('a' + (i % 26));
			}
		}
	}
}

void Single_Master()
{
#pragma omp parallel
	{
#pragma omp single //nowait
		{
			cout << "Get input" << omp_get_thread_num() << endl;
			cout << "Get input" << omp_get_thread_num() << endl;
		}		

		cout << "in Parallel on " << omp_get_thread_num() << endl;
		cout << "in Parallel on " << omp_get_thread_num() << endl;

#pragma omp barrier
#pragma omp master
		cout << "Output on" << omp_get_thread_num() << endl;
	}
}

void Atomic()
{
	int sum = 0;
#pragma omp parallel for num_threads(2)
	for (int i = 0; i < 10000; i++)
	{
#pragma omp atomic
		++sum;
	}
	cout << sum;
}

void Ordered()
{
	vector<int> vec;
#pragma omp parallel for ordered
	for (int i = 0; i < 20; i++)
	{
		int j = i*i;
#pragma omp ordered
		vec.push_back(j);
	}
	for (auto v : vec) cout << v << endl;
}
int add(int a)
{
	return 10 + 10;
}
int main(int argc, char** argv)
{
	//Hello();
	//forloop();
	//doloop();
	//section();
	//Single_Master();
	//Atomic();
	Ordered();
	cin.get();
	return 0;
}