#include <iostream>
#include <vector>
#include <string>

class Student {
	public:
		std::string indexNumber;
		std::string name;
		Student(std::string idx, std::string n) : indexNumber(idx), name(n){
		}
		void display(){
			std::cout << "Index: " << indexNumber <<", Name: " << name << "\n";
		}
};

std::vector<Student> students;

void addStudent() {
	std::string idx, name;
	std::cout << "Enter Index Number: ";
	std::cin >> idx;
	std::cout << "Enter Name: ";
	std::cin.ignore();
	std::getline(std::cin, name);
	students.emplace_back(idx, name);
}

void viewStudents(){
	for (auto& s : students) s.display();	
}

int main(){
		int choice;
		do{
	std::cout << "1. Add Student\n2. View Students\n3. Exit\n";
			std::cin >> choice;
			switch (choice) {
				case 1: addStudent(); break;
				case 2: viewStudent(); break;
			}
		} while (choice != 3);
		return 0;
}
void addStudent(){
	std::string idx, name;
	std::cout << "Enter Index Number: ";
	std::cin >> idx;
	std::cout << "Enter Name: ";
	std::cin.ignore();
	std::getline(std::cin, name);
	if (idx.empty() || name.empty()) {
		std::cout << "Invalid input. Please try again.\n";
		return;
	}
	students.emplace_back(idx, name);
}
intmain() {
	int choice;
	do {
		std::cout << "1. Add Student\n2. View Students\n3. Exit\n";
		std::cin >> choice;
		switch (choice) {
			case 1: addStudent(); break;
			case 2: viewStudents(); break;
			case 3: std::cout << "Exiting..\n"; break;
			default: std::cout << "Invalid choice. Please try agsin.\n";
		}
	} while (choice != 3);
	return 0;
}
std::string date;
	std::string studentIndex;
	bool isPresent;
	Attendance(std::string d, std::string idx, bool present) : date(d), studentIndex(idx), isPresent(present) {
	};
	
	std::vector<Attendance> attendanceRecords;
	
	void markAttendance() {
		std::string date, idx;
		bool present;
		std::cout << "Enter Date: ";
		std::cin >> date;
		std::cout << "Enter Student Index: ";
		std::cin >> idx;
		std::cout << "Is student present? (1/0): ";
		std::cin >> present;
		attendanceRecords.emplace_back(date, idx, present);
	}
	
	void viewAttendance() {
		for (auto& a : attendance) {
			std::cout << "Date: " << a.date << ", Index: " << a.studentIndex <<", Present: " << (a.isPresent ? "Yes" : "No") << "\n";
		}
	}
	void markAttendance() {
		std::string date, idx;
		bool present;
		std::cout << "Enter Date: ";
		std::cin >> date;
		std::cout << "Enter Student Index: ";
		std::cin >> idx;
		std::cout << "Is student present? (1/0): ";
		std::cin >> present;
		if (date.empty() || idx.empty()) {
			std::cout << "Invalid input. please try again.\n";
			return;
		}
		attendanceRecords.emplace_back(date, idx, present);
	}
	int main() {
		int choice;
		do {
			std::cout << "1. Add Student\n2. View Students\n3. Mark Attendance\n4. View Attendance\n5. Exit\n";
			std::cin >> choice;
			switch (choice) {
				case 1: addStudent(); break;
				case 2: viewStudents(); break;
				case 3: markAttendance(); break;
				case 4: viewAttendance(); break;
				case 5: std::cout << "Exiting...\n"; break;
				default; std::cout << "Invalid choice. Please try again.\n";
			}
		} while (choice != 5);
		return 0;
	}
	void generateReport() {
		std::string idx;
		std::cout << "Enter Student Index: ";
		std::cin >> idx;
		int presentCount = 0, totalCount = 0;
		for (auto& a : attendanceRecords) {
			if (a.studentIndex == idx) {
				totalCount++;
				if (a.isPresent) presentCount++;
			}
		}
		std::cout << "Student Index: " << idx <<", Atttendance: " << presentCount << "/" << totalCount << "\n";	
}
void saveData() {
	std::ofstream file("students.txt");
	for (auto& s : students) {
		file << s.indexNumber << "," << s.name << "\n";
	}
	file.close();
}

void loadData() {
	std::ifstream file("students.txt");
	std::string idx, name;
	while (std::getline(file, idx, ',') && std:: getline(file, name)) {
		students.emplace_back(idx, name);
	}
	file.close();
}
int main() {
	loadData();
	int choice;
	do {
		std::cout << "1. Add Student\n2. View Students\n3. Mark Attendance\n4. View Attendance\n5. Generate Report\n6. Exit\n";
		std::cin >> choice;
		switch (choice) {
			case 1: addStudent(); break;
			case 2: viewStudents(); break;
			case 3: markAttendance(); break;
			case 4: viewAttendance(); break;
			case 5: generateReport(); break;
			case 6: saveData(); std::cout << "Exiting...\n"; break;
			default: std::cout << "Invalid choice. Please try again.\n";
		}
	} while (choice != 6);
	return 0;
}
int main() {
	// Add sample data
	students.emplace_back("S1", "John Dick");
	students.emplce_back("S2", "Jane Pusy");
	attendanceRecords.emplace_back("2022-01-01", "S1", true);
	attendanceRecords.emplace_back("2022-01-01", "S2", false);
	//...
}
int main() {
	int choice;
	do {
		std::cout << "Attendance System\n";
		std::cout << "1. Add Student\n2. View Students\n3. Mark Attendance\n4. View Attendance\n5. Generate Report\n6. Exit\n";
		std::cin >> choice;
		switch (choice) {
			//...
		}
	} while (choice != 6);
	return 0;
}
int main() {
	loadData();
	int choice;
	do {
		std::cout << "Attendandce System\n";
		std::cout << "1. Add Student\n2. View Students\n3. Mark Attendance\n4. View Attendance\n5. Generate Report\n6. Exit\n";
		std::cin >> choice;
		switch (choice) {
			// ...
		}
	} while (choice != 6);
	saveData();
	return 0; 
}

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Structure for student data
struct Student {
	string id;
	string name;
	string status;
};

int main() {
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	
	vector<Student> students(n);
	
	// Input student data
	for (int i = 0; i < n; i++) {
		cout << "Enter ID for student " << i + 1 << ": ";
		cin >> students[i].id
		cout << "Enter name for student " << i + 1 << ": ";
		}
	}











