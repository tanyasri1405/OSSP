# Session 1 - Program 4

## Multiple Child Processes Using wait() and waitpid()

### Objective
Write a C program where a parent process creates multiple child processes and synchronizes their completion using `wait()` and `waitpid()`. Compare the behavior of both functions.

## wait()

`wait(NULL)` makes the parent wait for any one child process to terminate. The program calls it three times so that all three child processes are collected.

Compile:
```bash
gcc wait_example.c -o wait_example
```

Run:
```bash
./wait_example
```

## waitpid()

`waitpid(child[i], NULL, 0)` makes the parent wait for a specific child process identified by its PID.

Compile:
```bash
gcc wait_vs_waitpid.c -o wait_vs_waitpid
```

Run:
```bash
./wait_vs_waitpid
```

## Comparison

| Function | Behavior |
|---|---|
| `wait()` | Waits for any child process to terminate. |
| `waitpid()` | Waits for a specific child process identified by its PID. |
