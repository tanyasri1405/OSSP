# Session 1 - Program 1

## Linux Command Executor using fork(), exec(), and wait()

### Objective
Develop a C program that demonstrates how a Linux operating system executes a command entered by a user.

### Requirements
- Accept a Linux command as input.
- Create a child process using `fork()`.
- Execute the command in the child process using `execlp()`.
- Allow the parent process to wait for the child using `wait()`.
- Display the PID of both parent and child processes.

### Compile
```bash
gcc command_executor.c -o command_executor
```

### Run
```bash
./command_executor
```

### Example
Enter a command such as:

```text
ls
```

The program displays the parent PID, child PID, and the output produced by the executed Linux command.
