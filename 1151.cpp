#include <bits/stdc++.h>
using namespace std;

typedef struct Student {
	string name;
	int grade;
}stu;

//降序排序 
bool compare_a (Student a, Student b) {
	return a.grade > b.grade;
}

//升序排序 
bool compare_b (Student a, Student b) {
	return a.grade < b.grade;
}

int main() {
	int n, order;
	while(cin >> n){
	cin >> order;
	stu s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i].name >> s[i].grade;
	}
	if(order == 0) {
		stable_sort (s, s + n, compare_a);
	}
	else if (order == 1) {
		stable_sort (s, s + n, compare_b);
	}
	for (int j = 0; j < n; j++) {
		cout << s[j].name << ' ' << s[j].grade << endl;
	}
	}
	return 0;
}
