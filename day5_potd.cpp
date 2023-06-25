// C++ program to demonstrate
// use of set for vectors

#include <bits/stdc++.h>
using namespace std;

set<pair<int,vector<int>>> set_of_vectors;

// Print elements of Vector
void Print_Vector(pair<int,vector<int>>item)
{
	for (int i = 0; i < item.second.size(); i++) {
		cout << item.second[i] << " ";
	}
	cout << endl;
	return;
}

// Driver code
int main()
{
	// Initializing some vectors
	vector<int> data_1={ 10, 20, 30, 40 };
	vector<int> data_2={ 5, 10, 15 };
	vector<int> data_3={ 1, 3, 5, 7, 9, 11, 13 };
	vector<int> data_4={ 5, 10, 15 };
	vector<int> data_5={ 10, 20, 30, 40 };
    ;

	// Inserting vectors into set
	set_of_vectors.insert( make_pair(0,data_1));
	set_of_vectors.insert( make_pair(1,data_2));
	set_of_vectors.insert( make_pair(2,data_3));
	set_of_vectors.insert( make_pair(1,data_4));
	set_of_vectors.insert( make_pair(0,data_5));

	// printing all the unique vectors in set
	cout << "Set of Vectors: \n";
	for (auto it = set_of_vectors.begin();
		it != set_of_vectors.end();
		it++) {

		Print_Vector(*it);
	}

	return 0;
}
