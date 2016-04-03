#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int W;
	int total = 0;
	int tot_w = 0;
	int top5[5];
	vector<int> weight;
	fstream infile;

	infile.open("file.in",ios::in);
	if(!infile)
		cout<<"file open failure"<<endl;	
	//read in the total and weight
	while(infile>>W)
	{
		weight.push_back(W);
	}
	//store total of cows first then sort the vector
	total = weight.at(0);
	sort(weight.begin()+1,weight.end());


	//now pick the top 5(caution:it's sorted from little to big)
	for(int i=0;i<5;i++)
	{
		top5[i] = weight.back();
		weight.pop_back();
	}
	//add total weight
	for(int i=0;i<5;i++)
		tot_w += top5[i];

	cout<<tot_w<<endl;

}
