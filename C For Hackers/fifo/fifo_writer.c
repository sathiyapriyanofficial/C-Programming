#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd;
  char *fifo = "myfifo";

  // Open FIFO for writing
  fd = open(fifo, O_WRONLY);
  if (fd < 0)
  {
    perror("open");
    exit(EXIT_FAILURE);
  }

  // Write a message
  write(fd, "Hello from writer!", 19);
  close(fd);

  return 0;
}