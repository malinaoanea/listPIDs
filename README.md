# listPIDs


# **ListPIDs**
Implementation of a syscall in OpenBSD kernel which returns info about the descendants of a given process ( DFS order ).

```bash
syscall(331, currentPID);
```

## **Preparation**

Add the declaration of the new syscall at the end of kern/syscalls.master and define it in kern/sys_generic.c.



## **How it works**
- user.c tests the functionality of the system function by creating a process and calling the process function for the parent process
- at the end of sys_generic.c are implented the new sys calls:
- void DFS(struct process *p, int n) iterates in DFS order and prints the information for each process

 


