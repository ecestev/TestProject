# TestProject
A basic project consisting of an application and test harness. This is to serve as an example framework for developing using test driven development. This project contains configuration files to allow it to be opened both as a desktop project using Visual Studio and as an  embedded project for the Texas Instruments Tiva C Launchpad (TM4C1294NCPDT) using Code Composer Studio. 

## Brief Intro to Git

Git is a version control system for tracking changes in computer files and coordinating work on those files among multiple people [Wikipedia]. 

My preferred tools for using Git within Windows are:
  - GitBash
  - GitHub for Windows

There is so much great documentation on Git already out there so I am not going to go into exhaustive detail on the subject. I will suggest however that you create an account on GitHub and/or GitLab and/or GitBucket and familiarize yourself with the Git protocol. To make your life easier, you should also take the ten minutes to learn how to generate an SSH keypair and upload your public key to your Git account. See: [https://help.github.com/articles/connecting-to-github-with-ssh/] for full instructions. 

## Test Driven Development

TODO: ADD explanation on TDD here. 

## Visual Studio Project

This project requires the Windows SDK version 10.0.17134.0 so you may need to upgrade your installation to meet the target version. If you open the solution and it fails to build, your SDK version is likely the culprit. Download the newest SDK from: [https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk] and then simply open the .sln file in Visual Studio.

`**You must build this project in x86 configuration!**`

To select a startup project, right click the solution in 'Solution Explorer' and select a single startup project. You will switch between 'TestFramework' and 'Application' as you proceed through the development process. 'CommonLib' is a static library used in the other two projects and is not a valid startup project. It contains no entry point. 

## Code Composer Project

You will need to download the latest version of Code Composer Studio in order to open this project or at the very lest, dowwnload and manually register the TI v18.1.2LTS compiler. 

This project is tested working on the Texas Instruments Tiva C Launchpad (TM4C1294NCPDT) with printf support to CIO Console enabled. I suggest you only use printf within the test project as your device will not always be connected to a debugger. Your main application should print to UART and be accessed via puTTY or some other terminal console.

### Importing the Project to Workspace
  - Launch Code Composer Studio and select a workspace. 
  - Click 'File' -> 'Open Projects from File System'
  - Click 'Directory'
  - Navigate to where you cloned the 'TestProject' repo 
    - Select the three projects 'Application', 'CommonLib', and 'TestFramework'
  - Click 'Finish'
  - In your project explorer you should now see the three projects. You are ready to begin development. 
