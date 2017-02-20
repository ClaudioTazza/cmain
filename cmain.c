#include <stdio.h>

int main(){
  FILE *f = fopen("main.c", "w");
  fprintf(f, "#include <stdio.h>\n\nint main(){\n\n\n  return 0;\n}");
  fclose(f);

  return 0;
}
