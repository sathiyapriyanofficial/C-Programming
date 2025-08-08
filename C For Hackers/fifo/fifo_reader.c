#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd;
  char *fifo = "myfifo";
  char buffer[128];

  // Open FIFO for reading
  fd = open(fifo, O_RDONLY);
  if (fd < 0)
  {
    perror("open");
    exit(EXIT_FAILURE);
  }

  // Read message
  read(fd, buffer, sizeof(buffer));
  printf("Received: %s\n", buffer);
  close(fd);

  return 0;
}