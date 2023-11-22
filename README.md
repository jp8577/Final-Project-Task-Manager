# task manager
 
 Authors: [Nathan Do](https://github.com/NathanTDO)
            [Caleb Mak](https://github.com/cmakkkk)
            [Nathan Wang](https://github.com/Riceko)
            [Jooahn Park](https://github.com/jp8577)         

## Project Description
* Why is it important or interesting to you?
  Time management is a common issue for college students so it is important to have an organized timeline when dealing with school, work, and other life events.

* What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
  We plan to do this project in C++ using github to coordinate and use .txt files to save and import dates and events.

* What will be the input/output of your project?
  The output of the project will be in a chalendar format in the terminal. There will be menu options and the user will be able to select an option where they can input different tasks.

* What are the features that the project provides?
  Task categories such as school, chores, fun, family, etc. The ability to see the whole month, how many days have tasks, and how busy the days will be. Tasks will have specific times and dates associated with   
  them to aid in organization.

## Phase II

### Navigation Diagram

![image](https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/61930673/37e22573-408a-489f-b095-428a161db5b5)
The Navigation diagram first portrays a calendar of a specific date provided. Then it is placed in a view screen where the calendar month is shown as well as the tasks on a certain day. From the view screen, the user is allowed to go into an edit screen where they are then given an option to either add a task to the date, delete a task, or edit the task that it currently is on. The diagram represents that you are able to travel backward from each screen depending on what the user wants to do.


### Screen Layouts

Main menu screen:

![image](https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/129914056/94928e92-fe65-41f5-9e1b-2c9e3b3f9178)

View Screen (Displays calendar with options to change tasks for a given day): 

![image](https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/129914056/2a7a0867-caf0-4db6-bb5c-baa4464d9e24)

Edit Screen (Prompts user for edits to chosen tasks): 

![image](https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/129914056/387ad405-cb42-471d-9472-c9dfeb63c591)

Add Screen (Prompts user for a new task to add): 

![image](https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/129914056/530f8172-d15c-4ba6-84bd-8e9b35b32b42)

Delete Screen (Prompts user for a task to delete): 

![image](https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/129914056/28a93e0c-9498-4425-a499-ce7f597543e0)

## Class Diagram

 ![image](https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/61930673/691ff3b7-5e96-4d2a-8c7e-a5288378c786)
Through the class diagram, we are able to work from the bottom up as certain classes are utilized in the more general classes. Within the Time class, it is only necessary to have the hour and minute variable to keep track of the time and utilize accessors and mutators to be able to change or access these variables. Within the task class, we utilize the time class to create a start and end time for a certain event, and is utilized more within the methods to access the times. The task class is utilized in the day class through an array that lists the tasks for that day. Finally, the month class utilizes the day class within the array of days that pertain to the number of days in the month.

## Phase III
You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 <img width="785" alt="image" src="https://github.com/cs100/final-project-jpark670-nwang078-cmak012-ndo050/assets/146979512/71c91b1d-0fa3-4df5-b64b-90029d4c20b7">
 Updated UML based on the feedback received from the TA.

○ What SOLID principle(s) did you apply?
Single Responsibilty Principle

○ How did you apply it? i.e. describe the change.
The print functions for the Day, Month, Calendar, Task, and Time classes were placed into their own Print class in order to split the responsibilities of managing and outputting data. 

○ How did this change help you write better code?
It helped minimize confusion around the role of each class and made our code cleaner and more concise.

BEFORE the meeting you should do the following:
* Update your class diagram from Phase II to include any feedback you received from your TA/grader.
* Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
* A new class diagram incorporating your changes after considering the SOLID principles.
* For each update in your class diagram, you must explain in 3-4 sentences:
* What SOLID principle(s) did you apply?
* How did you apply it? i.e. describe the change.
* How did this change help you write better code?
* Perform a new sprint plan like you did in Phase II.
* You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
During the meeting with your reader you will discuss: 
* How effective your last sprint was (each member should talk about what they did)
* Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
* Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
* What tasks you are planning for this next sprint.

 
## Final deliverable
All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
Before the demo, you should do the following:
* Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
* Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
* Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
Screenshots of the input/output after running your application
 ## Installation/Usage
Instructions on installing and running your application
 ## Testing
How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
