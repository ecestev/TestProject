# TestProject
A basic project consisting of an application and test harness. This is to serve as an example framework for developing using test driven development. Both a desktop project and an embedded project for the Texas Instruments Tiva C (TM4c1294NCPDT) are provided.

## Brief Intro to Git

Git is a version control system for tracking changes in computer files and coordinating work on those files among multiple people [Wikipedia]. 

My preferred tools for using Git within Windows are:
  - GitBash
  - GitHub for Windows

There is so much great documentation on Git already out there so I am not going to go into exhaustive detail on the subject. I will suggest however that you create an account on GitHub and/or GitLab and/or GitBucket and familiarize yourself with the Git protocol. To make your life easier, you should also take the ten minutes to learn how to generate an SSH keypair and upload your public key to your Git account. See: [https://help.github.com/articles/connecting-to-github-with-ssh/] for full instructions. 

## Test Driven Development

TODO: ADD explanation on TDD here. 

## Visual Studio Project

Simply open the .sln file in Visual Studio. You may need to upgrade your installation to meet the target version. 

To select a startup project, right click the solution in 'Solution Explorer' and select a single startup project. You will switch between 'TestFramework' and 'Application' as you proceed through the development process. 'CommonLib' is a static library used in the other two projects and is not a valid startup project. It contains no entry point. 

## Code Composer Project

You will need to download the latest version of Code Composer Studio in order to open this project or at the very lest, dowwnload and manually register the TI v18.1.2LTS compiler. 

### Importing the Project to Workspace
  - Launch Code Composer Studio and select a workspace. 
  - Click 'File' -> 'Open Projects from File System'
  - Click 'Directory'
  - Navigate to where you cloned the 'TestProject' repo 
    - Select the three projects 'Application', 'CommonLib', and 'TestFramework'
  - Click 'Finish'
  - In your project explorer you should now see the three projects. You are ready to begin development. 
