#ifndef MAIN_H
#define MAIN_H

ssize read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

char *create_buffer(char *filename);

void close_file(int file_d);

#endif /*MAIN_H*/
