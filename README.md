# lab3
Question A:

	compile:
		g++ -o lab3 lab3.cpp

Question B:

	I replaced 'const int size' with 1000,10000,100000,1000000. The following are the results:

		1) size = 1000
			output:
				sort(): 0 seconds
				v1/v2 are different.
				insertion_sort(): 0.02 seconds
				v1/v2 are the same.
									
		2) size = 10000
			output:
				sort(): 0 seconds	
				v1/v2 are different.
				insertion_sort(): 1.31 seconds
				v1/v2 are the same.

		3) size = 100000
			output:
				sort(): 0.04 seconds
				v1/v2 are different.
				insertion_sort(): 128.11 seconds
				v1/v2 are the same.

		4) size = 1000000
			output:
				sort(): 0.55 seconds
				v1/v2 are different.
				insertion_sort(): 12815.8 seconds
				v1/v2 are the same.

		I reserached 'insertion sort' online and discovered that O(n^2) is the "worst case", which happens when the data is already sorted from large to small, it has to compare 'i' times on the 'i-th' round, so it's much slower when we called the sort() function first, since it sorts data from large to small.
		As far as I can research, I got some information that the std::sort() in C++ is some sort of hybrid sort, uses more than one kind of sorting algorithm, so it performs O(nlogn) in the worst case and on average. 	
