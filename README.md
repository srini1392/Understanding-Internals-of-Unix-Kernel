# Understanding Internals of Unix Kernel

## Introduction
* Written in high-level language -> hence easy to read, understand , change and move.
* It has a simple but power user interface  
* Unix has a hierarchial file system -> allows easy maintenance and efficient implementation
* Multi-user, multi-processing system

### Architecture
![](/home/srini1392/Pictures/123.png)
<br></br>
"*the Onion architecture*"
<br></br>
![](/home/srini1392/Pictures/1234.gif)

### User Perspective
* FILE Subsystem
  * Hirearchical structure- as tree with root
 * Ability to create and delete files
 * Dynamic growth of files.
 * Protection of file data - access permissions for three classes of users. (owner, group, others)
 * Treatment of peripheral devices as files.





* PROCESS Subsystem

* Building Block Primitives
