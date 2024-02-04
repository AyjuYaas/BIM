//Student data with appropriate data types
#include<stdio.h>
int main(){
	//student 1st
	int id1 = 007;
	char name1[] = "Ram Abc";
	char address1[] = "Nakkhu, Lalitpur";
	int semester1 = 2;
	char faculty1[] = "BIM";
	long long contact1 = 1234567890;
	
	//student 2nd
	int id2 = 191;
	char name2[] = "Hari Rtq";
	char address2[] = "Maitighar, Kathmandu";
	int semester2 = 6;
	char faculty2[] = "Bsc. Physics";
	long long contact2 = 1232657672;
	
	//student 3rd
	int id3 = 033;
	char name3[] = "Sita Pqr";
	char address3[] = "Thimi, Bhaktapur";
	int semester3 = 5;
	char faculty3[] = "Bsc. CSIT";
	long long contact3 = 9876543201;
	
	printf ("The Details of 3 students are:\n");
	printf ("Student 1:\n");
	printf ("ID No.: %03d\nName: %s\nAddress: %s\nSemester: %i\nFaculty: %s\nContact: %lld\n", id1, name1, address1, semester1, faculty1, contact1);
	printf ("\nStudent 2:\n");
	printf ("ID No.: %03d\nName: %s\nAddress: %s\nSemester: %i\nFaculty: %s\nContact: %lld\n", id2, name2, address2, semester2, faculty2, contact2);
	printf ("\nStudent 3:\n");
	printf ("ID No.: %03d\nName: %s\nAddress: %s\nSemester: %i\nFaculty: %s\nContact: %lld\n", id3, name3, address3, semester3, faculty3, contact3);
	
	return 0;
}
