#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HEX_ADDR_MAXLEN (((int) (sizeof (size_t) * 2)) + 2)

void mem_dump (void *arr, size_t size, int row_width);

void mem_dump (void *arr, size_t size, int row_width)
{
  int rows_count = ((size - 1) / row_width) + 1;
  unsigned char *end = arr + size;

  int row, col;
  for (row = 0; row < rows_count; ++row)
    {
      unsigned char *row_p = arr + (row * row_width);
      unsigned char byte = *row_p;
      printf ("%-*p %02x", HEX_ADDR_MAXLEN, row_p, byte);

      size_t bytes_left = end - row_p;
      int current_row_width = (bytes_left < row_width) ? bytes_left : row_width;
 
      for (col = 1; col < current_row_width; ++col)
        {
          byte = *(row_p + col);
          printf (" %02x", byte);
        }

      printf ("\n");
    }
}

int main() {
    char *text = "I love to break free";
    
    int array[] = { 7, 3, 2, 10, -5 };
    size_t size = sizeof(array) / sizeof(int);
    
    mem_dump(text, strlen(text) + 1, 5);
    
    printf("\n");
    
    mem_dump(array, size * sizeof(int), 4);
    
    return (EXIT_SUCCESS);
}

