# Understanding Internals of Unix Kernel

## Introduction
* Written in high-level language -> hence easy to read, understand , change and move.
* It has a simple but power user interface  
* Unix has a hierarchial file system -> allows easy maintenance and efficient implementation
* Multi-user, multi-processing system

### Architecture

![](images/UNIX-Architecture.png)
<br></br>
![](images/01fig01.gif)
<br></br>
"*the Onion architecture*"
<br></br>
![](images/kernal-2-638.jpg)

## User Perspective

#### FILE Subsystem
    > Hirearchical structure- as tree with root
    > Ability to create and delete files
    > Dynamic growth of files.
    > Protection of file data - access permissions for three classes of users. (owner, group, others)
    > Treatment of peripheral devices as files.

#### PROCESS Subsystem
    > Program is an executable.
    > Process is a program in execution.
    > Multiprogramming / Multi tasking -- all process run parallel in the background
    > System calls for controlling processes
    > Shell is a command line interpreter

    ### Process environment
        > Process control : fork () -> creates a new child
                            exec () -> execute a program
                            wait () -> wait for the program to execute
                            exit () -> kill the process once its done

        > Shell 3 types of commands :  Internal command
                                       External command
                                       Script files (executables) 


#### Building Block Primitives
