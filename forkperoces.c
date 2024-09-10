// #include<stdio.h>
// #include<windows.h>
// int main()
// {
//     printf("heloo");
//     CreateProcess();
//     printf('aditya');
// }
#include <stdio.h>
#include <windows.h>

int main() {
  STARTUPINFO si;
  PROCESS_INFORMATION pi;

  ZeroMemory(&si, sizeof(si));
  si.cb = sizeof(si);

  // Create a child process with the same executable
  if (!CreateProcess(NULL,  // No application name specified (current executable)
                     "yourprogram.exe", // Replace with the actual program name
                     NULL,           // No security attributes for child process
                     NULL,           // No security attributes for thread
                     FALSE,          // Inherit handles
                     0,              // Default creation flags
                     NULL,           // Use parent's environment
                     NULL,           // Use parent's current directory
                     &si,            // Startup information
                     &pi             // Process information
                    )) {
    printf("CreateProcess failed (%d)\n", GetLastError());
    return 1;
  }

  // Wait for the child process to finish (optional)
  WaitForSingleObject(pi.hProcess, INFINITE);

  // Close handles
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);

  printf("Parent process finished.\n");
  return 0;
}
