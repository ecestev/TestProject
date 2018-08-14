# TestProject
A basic project consisting of an application and test harness. This is to serve as an example framework for developing using test driven development. Both a desktop project and an embedded project for the Texas Instruments Tiva C (TM4c1294NCPDT) are provided.

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
