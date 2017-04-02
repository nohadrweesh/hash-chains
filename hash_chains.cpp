//#include <iostream>
//#include <vector>
//#include <string>
//#include<map>
//#include<fstream>
//#define SIZE 10000000
//using std::string;
//using std::vector;
//using std::cin;
//
//struct Query {
//	string type, name;
//	int number;
//};
//
//vector<std::pair<int, string>>myContacts(SIZE);
//vector<Query> read_queriesMine() {
//	std::ifstream in;
//	in.open("in.txt");
//	
//	int n;
//	in >> n;
//	vector<Query> queries(n);
//	for (int i = 0; i < n; ++i) {
//		in >> queries[i].type;
//		if (queries[i].type == "add")
//			in >> queries[i].number >> queries[i].name;
//		else
//			in >> queries[i].number;
//	}
//	in.close();
//	return queries;
//}
//
//vector<Query> read_queries() {
//	int n;
//	cin >> n;
//	vector<Query> queries(n);
//	for (int i = 0; i < n; ++i) {
//		cin >> queries[i].type;
//		if (queries[i].type == "add")
//			cin >> queries[i].number >> queries[i].name;
//		else
//			cin >> queries[i].number;
//	}
//	return queries;
//}
//void write_responsesTrial(const vector<std::pair<int, string>>& result) {
//	for (size_t i = 0; i < result.size(); ++i)
//		std::cout << result[i].first<<" ::"<<result[i].second << "\n";
//}
//void write_responses(const vector<string>& result) {
//	for (size_t i = 0; i < result.size(); ++i)
//		std::cout << result[i] << "\n";
//}
//vector<string> process_queriesMine(const vector<Query>& queries) {
//	vector<string> result;
//	 Keep list of all existing (i.e. not deleted yet) contacts.
//	vector<Query> contacts;
//	contacts.resize(SIZE);
//	for (size_t i = 0; i < queries.size(); ++i)
//		if (queries[i].type == "add") {
//			bool was_founded = false;
//			 if we already have contact with such number,
//			 we should rewrite contact's name
//			for (size_t j = 0; j < contacts.size(); ++j)
//
//			if (myContacts[queries[i].number].first== queries[i].number) {
//				myContacts[queries[i].number].second = queries[i].name;
//				was_founded = true;
//				break;
//			}
//			 otherwise, just add it
//			if (!was_founded){
//				myContacts[queries[i].number].first == queries[i].number;
//				myContacts[queries[i].number].second = queries[i].name;
//			}
//				
//
//		}
//		else if (queries[i].type == "del") {
//
//			if (myContacts[queries[i].number].first == queries[i].number) {
//				contacts.erase(contacts.begin() + queries[i].number);
//				
//			}
//		}
//		else {
//			string response = "not found";
//
//			if (contacts[queries[i].number].number == queries[i].number) {
//				response = contacts[queries[i].number].name;
//
//			}
//			result.push_back(response);
//		}
//		return result;
//}
//vector<string> process_queriesTrial(const vector<Query>& queries) {
//	vector< string> result;
//	 Keep list of all existing (i.e. not deleted yet) contacts.
//	std::map<int,string> contacts;
//	
//	for (size_t i = 0; i < queries.size(); ++i){
//		
//			std::cout << contacts[76213].number << " " << contacts[76213].name << std::endl;
//		if (queries[i].type == "add") {
//			bool was_founded = false;
//			 if we already have contact with such number,
//			 we should rewrite contact's name
//			for (size_t j = 0; j < contacts.size(); ++j)
//			contacts[queries[i].number] = queries[i].name;
//
//		}
//		else if (queries[i].type == "del") {
//
//			if (contacts[queries[i].number].length()) {
//				contacts.erase(queries[i].number);
//
//			}
//		}
//		else {
//			string response = "not found";
//
//			if (contacts[queries[i].number] .length()) {
//				response = contacts[queries[i].number];
//
//			}
//			result.push_back( response);
//		}
//	}
//		return result;
//}
//
//vector<string> process_queries(const vector<Query>& queries) {
//	vector<string> result;
//	 Keep list of all existing (i.e. not deleted yet) contacts.
//	vector<Query> contacts;
//	contacts.resize(SIZE);
//	for (size_t i = 0; i < queries.size(); ++i)
//		if (queries[i].type == "add") {
//			bool was_founded = false;
//			 if we already have contact with such number,
//			 we should rewrite contact's name
//			for (size_t j = 0; j < contacts.size(); ++j)
//			
//			if (contacts[queries[i].number].number == queries[i].number) {
//				contacts[queries[i].number].name = queries[i].name;
//					was_founded = true;
//					break;
//				}
//			 otherwise, just add it
//			if (!was_founded)
//				contacts[queries[i].number]=(queries[i]);
//			
//		}
//		else if (queries[i].type == "del") {
//
//			if (contacts[queries[i].number].number == queries[i].number) {
//				contacts.erase(contacts.begin() + queries[i].number);
//				
//			}
//		}
//		else {
//			string response = "not found";
//
//			if (contacts[queries[i].number].number == queries[i].number) {
//				response = contacts[queries[i].number].name;
//
//			}
//			result.push_back(response);
//		}
//		return result;
//}
//
//int main() {
//	write_responses(process_queriesTrial(read_queries()));
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <string>
//#include<algorithm>
//using namespace std;
//int main(){
//	/*int p1 = 0, p2 = 0,c1,c2;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; ++i){
//		cin >> c1 >> c2;
//		if (c1 > c2)
//			p1 += 1;
//		else if (c2 > c1)
//			p2 += 1;
//	}
//	if (p1 > p2)
//		cout << "Mishka\n";
//	else if (p2 > p1)
//		cout << "Chris\n";
//	else if (p1 == p2)
//		cout << "Friendship is magic!^^\n";*/
//	
//	/*int lemons, apples, pears;
//	cin >> lemons >> apples >> pears;
//	int nlemons=1, napples=2, npears=4;
//	int sum = 0;
//	nlemons = lemons;
//	napples = apples / 2;
//	npears = pears / 4;
//	int minimum = min(nlemons, min(napples, npears));
//	sum = minimum * 7;
//		/*for (int i = 0;nlemons<=lemons&&napples<=apples&&npears<=pears; ++i){
//			sum += 7;
//			nlemons += 1;
//			napples += 2;
//			npears += 4;
//
//		}*/
//		//cout << sum << endl;
//	
//	//system("pause");
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<iostream>
//
//unsigned long long getFib(int n){
//	if (n<1)
//		return 0;
//	if (n <= 2)
//		return 1;
//	unsigned long long f0 = 0, f1 = 1, temp; int c;
//	for (int i = 0; i < n - 1; ++i){
//		
//		temp = f0;
//		f0 = f1; 
//		f1 = f1 + temp;
//	}
//	return f1;
//}
//
////static long long *glob_var;
////long long getFibFork(int n){
////	//shared memory between processes
////	glob_var = mmap(NULL, sizeof *glob_var, PROT_READ | PROT_WRITE,
////		MAP_SHARED | MAP_ANONYMOUS, -1, 0);
////	pid_t pid, pidCh, endId;
////	long long sumChild = 0, sumParent = 0;
////	int status;
////	//long long child=0,parent=0;
////	pid = fork();
////	if (pid<0){
////		printf("Error");
////		return 1;
////
////	}
////
////	else if (pid>0){//parent  --->calcfib(n-2)
////		sumParent = getFib(n - 2);
////
////
////
////		endId = wait(NULL);
////
////
////		return *glob_var + sumParent;
////	}
////	else{//child  --->calcfib(n-1)
////		pidCh = getpid();
////
////		*glob_var = getFib(n - 1);
////
////		exit(sumChild);
////	}
////
////
////	//*sum =child+parent;
////
////}
//int main()
//
//{
//	int n;
//	printf("Enter the number of a Fibonacci Sequence:\n");
//	std::cin >> n;
//	unsigned long long child = 0, parent = 0, sum;
//	sum = getFib(n);
//
//	printf("fib(%d) = %llu\n", n, sum);
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<list>

using std::string;
using std::vector;
using std::cin;

struct Query {
	string type, s;
	size_t ind;
};

class QueryProcessor {
	int bucket_count;
	// store all strings in one vector
	//vector<string> elems;
	vector<std::list<string>>chains;
	size_t hash_func(const string& s) const {
		static const size_t multiplier = 263;
		static const size_t prime = 1000000007;
		unsigned long long hash = 0;
		for (int i = static_cast<int> (s.size()) - 1; i >= 0; --i)
			hash = (hash * multiplier + s[i]) % prime;
		return hash % bucket_count;
	}

public:
	explicit QueryProcessor(int bucket_count) : bucket_count(bucket_count) {
		chains.resize(bucket_count);
	}

	Query readQuery() const {
		Query query;
		cin >> query.type;
		if (query.type != "check")
			cin >> query.s;
		else
			cin >> query.ind;
		return query;
	}

	void writeSearchResult(bool was_found) const {
		std::cout << (was_found ? "yes\n" : "no\n");
	}

	void processQuery(const Query& query) {
		size_t hash_val = hash_func(query.s);
		if (query.type == "check") {
			// use reverse order, because we append strings to the end
			int s = query.ind;
			for (std::list<string>::reverse_iterator it = chains[s].rbegin(); it != chains[s].rend(); ++it)
				//if (*it == query.s)
			{
				std::cout << *it << " ";
			}
			std::cout << "\n";
		}
		else {
			std::list<string>::iterator it = std::find(chains[hash_val].begin(), chains[hash_val].end(), query.s);
			if (query.type == "find")
				writeSearchResult(it != chains[hash_val].end());
			else if (query.type == "add") {
				if (it == chains[hash_val].end())
					chains[hash_val].push_back(query.s);
			}
			else if (query.type == "del") {
				if (it != chains[hash_val].end())
					chains[hash_val].erase(it);
			}
		}
	}

	void processQueries() {
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
			processQuery(readQuery());
	}
};

int main() {
	std::ios_base::sync_with_stdio(false);
	int bucket_count;
	cin >> bucket_count;
	QueryProcessor proc(bucket_count);
	proc.processQueries();
	//system("pause");
	return 0;
}
