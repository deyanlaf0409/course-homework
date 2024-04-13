#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#define BUF_SIZE 1024
int i;
typedef struct Total{ //stores the Total count of lines words and bytes
  int lines;
  int words;
  int bytes;
} Total;

Total* new_Total(int lines, int words, int bytes){ //constructor function for Total
  Total* t = (Total*)malloc(sizeof(Total));
  t->lines = lines;
  t->words = words;
  t->bytes = bytes;
  return t;
}

void updateTotal(Total *t, int lines, int words, int bytes){ //updates Total counters
  t->lines += lines;
  t->words += words;
  t->bytes += bytes;
}

void readStdin(Total* t, char c){ //reads from stdin, counts and prints
  int lines = 0, words = 0, bytes = 0, startWord = 0;
  char ch;
  while((ch=fgetc(stdin)) != EOF){//count the bytes, lines and words
    bytes++;
    if (ch == '\n'){
      lines++;
    }
    if (ch != ' ' && ch != '\n' && ch != '\r' && ch != '\t'){ //if there's a visible char, there's a word
      startWord = 1;
    }
    if ((ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t') && startWord == 1){ //when the word ends
      words++; //increment the word coutner
      startWord = 0; //reset word finder
    }
  }
  updateTotal(t, lines, words, bytes);
  if (c == '\0'){ //if the command was called with no arguments
    printf ("%d %d %d\n", lines, words, bytes);
  }
  else{
    printf ("%d %d %d %c\n", lines, words, bytes, c);
  }
}

void readFile(Total *t, char* filename, FILE* fp){
  int lines = 0, words = 0, bytes = 0, startWord = 0;
  char ch;
  if (fp == NULL){
    printf("%s: No such file or drectory\n", filename);
    exit(1);
  }
  while ((ch=fgetc(fp)) != EOF){ //count the bytes, lines and words
    bytes++;
    if (ch == '\n'){
      lines++;
    }
    if (ch != ' ' && ch != '\n' && ch != '\r' && ch != '\t'){
      startWord = 1;
    }
    if ((ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t') && startWord == 1){
      words++;
      startWord = 0;
    }
  }
  updateTotal(t, lines, words, bytes);
  printf("%d %d %d %s\n", lines, words, bytes, filename);
}

void readArgs(Total* t, int argc, char* argv[]){
  FILE* fp;
  for (i=1; i<argc; i++){
    if (*argv[i] == '-'){//if a '-' is found, read from stdin
      readStdin(t, '-');
      clearerr(stdin);
    }
    else { //tries to read the file in argv[i]
      fp = fopen(argv[i], "r");
      readFile(t, argv[i], fp);
      fclose(fp);
    }
  }
  if (argc > 2){ //if there's more than one file, print the total in the end
    printf("%d %d %d total\n", t->lines, t->words, t->bytes);
  }
  else {
    exit(0);
  }
}

int main(int argc, char* argv[]){
  Total* t = new_Total(0,0,0);
  if (argc<2){ //no arguments
    readStdin(t,'\0'); //pass /0 to readstin because as it is the only time it is called, there's no need to append the name of the argument
    return 0;
  }
  readArgs(t, argc, argv);
  free(t);
  return 0;
}
