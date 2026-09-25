import java.util.*;

public class Result {
	
	 int Student_ID;
	 String Student_Name;
	 String Subject_Name;
	 int Marks_Obtained;
	 char Grade;
	 String Exam_Date;
	 
	 public Result(int student_ID, String student_Name, String subject_Name, int marks_Obtained, char grade,
			String exam_Date) {
		Student_ID = student_ID;
		Student_Name = student_Name;
		Subject_Name = subject_Name;
		Marks_Obtained = marks_Obtained;
		Grade = grade;
		Exam_Date = exam_Date;
	}
	 
	 public int getStudent_ID() {
		return Student_ID;
	}

	public void setStudent_ID(int student_ID) {
		Student_ID = student_ID;
	}

	public String getStudent_Name() {
		return Student_Name;
	}

	public void setStudent_Name(String student_Name) {
		Student_Name = student_Name;
	}

	public String getSubject_Name() {
		return Subject_Name;
	}

	public void setSubject_Name(String subject_Name) {
		Subject_Name = subject_Name;
	}

	public int getMarks_Obtained() {
		return Marks_Obtained;
	}

	public void setMarks_Obtained(int marks_Obtained) {
		Marks_Obtained = marks_Obtained;
	}

	public char getGrade() {
		return Grade;
	}

	public void setGrade(char grade) {
		Grade = grade;
	}
 
	public static void main(String[] args) {
		
		System.out.println("Enter Student Data");
		Result obj = new Result(101, "Shubham", "Math", 20, 'B', "25-09-2026");
		
	    		
	}

}
