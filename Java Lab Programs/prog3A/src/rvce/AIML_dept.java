package rvce;
import aiml.FourthSemester;

public class AIML_dept extends FourthSemester {
    @Override
    public void welcomeMsg() {
        System.out.println("Welcome to AIML Department - 4th semester");
    }

    // Create a new private method
    private void methodPrivate() {
        System.out.println("Private Method in AIML_dept");
    }

    // Create a public method to call the private method
    public void display() {
        System.out.println("Display method in AIML_dept");
        System.out.println("Calling private method: ");
        methodPrivate();
    }

    public static void main(String[] args) {
        AIML_dept aiml_dept = new AIML_dept();

        // Call the overridden welcomeMsg method
        aiml_dept.welcomeMsg();

        // Call the public method in AIML_dept to call the private method
        aiml_dept.display();
    }
}
