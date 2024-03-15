#include <bits/stdc++.h>
using namespace std;

typedef struct Student {
	int num;
	int grade;
}stu;

//降序排序 
bool compare_a (Student a, Student b) {
	if (a.grade == b.grade) return a.num < b.num;
	else return a.grade < b.grade;
}

//升序排序 
bool compare_b (Student a, Student b) {
	return a.grade < b.grade;
}

int main() {
	int n;
	cin >> n;
	stu s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i].num >> s[i].grade;
	}
	sort (s, s + n, compare_a);
	for (int j = 0; j < n; j++) {
		cout << s[j].num << ' ' << s[j].grade << endl;
	}
	return 0;
}
