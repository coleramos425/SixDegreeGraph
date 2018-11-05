#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "user.cpp"
#include "graph.h"


using namespace std;

int main()
{
	//Opening file sent from Python program
	string user;
	string temp;
	vector<int> listOfIds;

	cout << "What is the username of the person you're searching? ";
	getline(cin, user);
	ifstream inFile;
	inFile.open(user);
	if (inFile.is_open()) {
		cout << "File is open!" << endl;
		while (getline(inFile, temp)) {
			int tempInt = stoi(temp);
			listOfIds.push_back(tempInt);
			cout << temp << endl;
		}
		inFile.close();
	}
	else
		cout << "Error opening file. Check spelling." << endl;

	/****************************BEGIN DUAL BFS******************************/
	//First we will turn every follower into a user object. Could do in above user loop.

	Graph userGraph(listOfIds.size());// Insert graph size based on Followers data
	for (int iter = 0; iter < listOfIds.size(); iter++) {
		userGraph.addEdge(0, listOfIds[iter]); // Insert an edge by grabbing the Users ID and connecting it to either the orig user or the target account.
	}

	//Perform BFS with above graph.
	//userGraph.bfs();
	// Create a graph given in the above diagram.
	return 0;
}