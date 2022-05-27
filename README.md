# Record-Students-Data
Record Students Data project using C programming 


## Abstract
Our program is to record students data and restoring. We are recording students data , names, IDs , ages , grade levels and sheets mark in an arrays of structure. In addition to structures and arrays We also use pointer variables to pass data to function in some cases.
The user is to deal with 4 main functions, add student, Search for student , Modify student name , delete student records.
First of all, user have to input to the program the password, the he can choose what he wants.
Introduction
Well, the program’s idea based on internally dividing the program into a set of functions, each function is independent by its work.
The user will be asked to choose one of four options then the program will read the value and put it into Switch statement, that leads to the chosen function, one of five:
• The first is to Adding and receiving new student data
User is to input:
1. ID as an integer variable.
2. name as a string value nothing that not to use the space “ “ in the name because the program depends on scanf function that will stop reading when reaching space or ENTER value we could use underscore sign instead.
3. 4 . Age and grade level as integer variables
Record Students Data Program
5. Sheet Mark as a float variable nothing that it will restore just 2 numbers after decimal point.
The main problem here was how to store that data and control management of each element individually, that enables us to edit , search or delete it. Also, we have to make sure we have every student data separately ... So, we managed to use array of structures. We can define structure as a composite datatype with a collection of variables. These variables can have different data types and collectively form a structure of a composite datatype. And array of structures is a sequential collection of structures. With structures, we can store mixed record types, and with an array supporting this, we can have a list of mixed record types. Our program here shows a structure called student that takes the ID, name, age, grade and sheet marks of a student as an input, then stores each record in an array ST, which stores the elements. Each element will hold a mixed record.
After receiving student data and restoring it the program will show up the message of “student added" and return automatically to Main Menu.
• To Research for a student
the user will choose of two options whether searching with id or name, program will receive the choice and restore in in temporary variable then comparing it with the stored value in if function.
If choosing 1, the user will be asked to enter Id to search for, Id temporary variable will be sent to The second function, srch, that will compare the inputting id to all array elements using for loop to reach the demanded student then the student details will be printed to the screen.
If choosing 2, the user will be asked to enter a student name, then restoring it in temporary string variable then sent it to
Record Students Data Program
the third function srchn, that compares the inputting to all array elements using for loop and the comparing function strcmp, to reach the demanded student no. in the array then the student details will be printed to the screen.
• The fourth is to Modifying student name by entering his ID then pointer variable will passed id to the function that searching in all arrays elements, using for loop and if function, if that student data is existed or not, if it’s found the program will show up stored name and ask the user to enter the new name, that will reads by scanf function, and replace the pervious valve.
• The fifth is to Delete student record, user will be asked to enter id first then program will search for it if existed or not, if found the program will replace all variables of the array with null value that already made just if the condition is fulfilled.
In every function the program will search whether the entrance variable's value is valid or not, if not program will back to The Main Menu.
Also, after preforming every function the program will back to The Main Menu to enable the user to choose the next step.


The algorithm flow charts we use is to be :

![image](https://user-images.githubusercontent.com/66570093/170699263-732964f0-38fa-4044-aec8-699359de6aaf.png)


Record Students Data Program
5 Screenshots showing up the performance of the program :
1. Entering the password 3 times incorrectly leads to Exit the program

![image](https://user-images.githubusercontent.com/66570093/170699170-c1f61aa0-42f9-48d0-b44c-e30d614d29d9.png)

Record Students Data Program
2. Adding function
![image](https://user-images.githubusercontent.com/66570093/170699139-c966b2e5-7ef9-4398-89eb-508cc72149b2.png)


Record Students Data Program
3. Searching function
![image](https://user-images.githubusercontent.com/66570093/170699101-0461bc7c-f611-451a-8c15-63b03a97d7f3.png)

Record Students Data Program
4.Modifying function
![image](https://user-images.githubusercontent.com/66570093/170699060-83d2ff16-e42a-46e9-8124-00ee7137f0ee.png)

Record Students Data Program

5.Delete function
![image](https://user-images.githubusercontent.com/66570093/170699001-eccf4447-cbeb-4134-972d-b81863e8d198.png)

Record Students Data Program
## Discussion
The point that is demanded to be discussed is the password's performance
So how the password is working?
Well the first interface that the user will face is that the program ask him to enter password that already stored while programming.
There was no data about what should the password be as a default, so simply we used [ 4321 ] as a password, the user couldn’t change it just if wanted to modify one have to edit the source code .
So the user will input a value that maybe is true or not , here the program will read it using scanf function and restoring it in an integer variable that will be compared with the value that program already knows using if function. If if Condition is fulfilled, then the program will lead the user to Main Menu to make a decision to the next step.
If the condition is Not fulfilled, then the program will display “ sorry! The password is invalid” and use goto line, to return to the function of reading the password and re –ask the user to enter the password, here the program will make a counter to calculate how many invalid times the user is made. If the counter is 3 the program will let the MAIN function to return 0, that means the program will be exited.


## Conclusion
The main purpose we discuss in this program is simply to make friendly interface using C Programming language that makes it easy for the user to enter the data wanted to store and enable him easily to process and modify the students’ data.
Using coding to simplify, define a real-life problem and introduce a good
example of solving that problem as simplest we can.
Record Students Data Program


## References
Array of structures : Structures in c - studytonight
// Used function:
strcmp( str, str); // to compare two string variables.
strump() - programiz
strcpy(str, str ); // to copy a string into another one.
strcpy() - programiz
fflush(stdin); //to clear the input buffer A Question in stackoverflow
