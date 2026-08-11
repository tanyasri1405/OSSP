# Session 1 - Program 3

## Parent and Child Process States Using fork()

### Objective
Develop a C program using `fork()` that creates a parent and child process and displays the Process ID (PID), Parent Process ID (PPID), and process states at different stages of execution.

### Process States Demonstrated
- **Child:** Running → Terminated
- **Parent:** Waiting → Running after the child completes

### Compile
```bash
gcc fork_process_states.c -o fork_process_states
```

### Run
```bash
./fork_process_states
```

### Main System Calls Used
- `fork()` - creates the child process.
- `getpid()` - obtains the current process ID.
- `getppid()` - obtains the parent process ID.
- `sleep()` - keeps the child running for a short period.
- `wait()` - makes the parent wait for the child to finish.
