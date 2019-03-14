Author  : [Srinikethan Mankala
    ](mailto:sriz1392@gmail.com)

# Basic commands
1. __cat__  < Concatenate to create file and display its contents >
   > __*syntax*__ :  cat > filename </br>
      Add the text </br>
      to display use same command cat > filename </br></br>
      To append data again to same file </br>
     __*syntax*__: cat >> filename  </br>
      Add the text </br>



2. __*touch*__  < Creating multiple files at same time >
    >__*syntax*__ : touch file1 file2 file3

3. __*mkdir*__     < Create a directory >
    > ex            : *making multiple directory into a tree* </br>
      __*syntax*__  : mkdir Kernel/{Linux/{advlinux, linuxclstr},Aix/{hacmp, lpar}, Storage/{san,netapp}} </br>
                     to display them in a tree structure --> *tree Kernel* </br>

4. __*cp*__           < Copying files into directory ></br>
    > __*syntax*__  :  cp file1 kdir </br>
                    < Copying files from one location to another > </br>
    > __*syntax*__  : cp -rvfp <dir_name> <dest_name> </br>


5. __*mv*__          < Moving files from one location to another (Cut & Paste)> </br>
    > __*syntax*__ : mv <dir_name> <dest_name> </br>
    < Renaming a file> </br>
    > __*syntax*__ : mv <old_name> <new_name> </br>
    < Renaming a Directory> </br>
    > __*syntax*__ : mv <old_name> <new_name> </br>

6. __*rm*__ < Remove> </br>
   >    __*syntax*__ : rm -f <filename>   </br>
   >    __*syntax*__ : rmdir <dirname>    (To remove a directory)</br>
   >    __*syntax*__ : rm -rf <dirname>   (To remove a directory with files, -r for recursive & -f for forceful)

<!-- --------------------------------------------------------------------------------------------- -->

</br></br>
# Vim commands
It has 3 modes:
1. Command mode
2. Insert mode (edit mode)
3. extended command mode

By default when vim is opened, it is in command mode.</br>
we can use "__h /l /k /j__" to move cursor "__left/ right /up /down__"


####  Insert Mode

Option  |   Description                                         |
--------| ------------------------------------------------------|
i       |   To begin insert mode at the cursor position         |
l       |   To insert at the begining of the line               |
a       |   To append to the next word's letter                 |
A       |   To Append at the end of the line                    |
o       |   To Insert a new line below the cursor position      |
O       |   To Insert a new line above the cursor position      |

