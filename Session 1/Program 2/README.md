# Session 1 - Program 2

## File Copy Using open(), read(), write(), and close()

### Objective
Develop a C program that uses the system calls `open()`, `read()`, `write()`, and `close()` to copy the contents of one file to another.

### System Calls Used
- `open()` - Opens the source and destination files.
- `read()` - Reads data from the source file into a buffer.
- `write()` - Writes the buffer contents to the destination file.
- `close()` - Closes both file descriptors.

### Compile
```bash
gcc file_copy.c -o file_copy
```

### Run
```bash
./file_copy
```

### Sample Input
```text
Enter source file name: File1.c
Enter destination file name: File2.c
```

### Sample Output
```text
File copied successfully.
```

### Control Transition
1. The program starts in User Space and executes normal C instructions.
2. `open()` switches the CPU from User Mode to Kernel Mode. The kernel checks permissions and opens the file, then returns the file descriptor to User Space.
3. `read()` switches to Kernel Mode. The kernel reads data from storage into a kernel buffer, copies it to the user buffer, and returns to User Space.
4. `write()` switches to Kernel Mode. The kernel copies data from the user buffer to the destination file and returns to User Space.
5. `close()` switches to Kernel Mode. The kernel releases the file descriptor and updates file metadata, then returns to User Space.
