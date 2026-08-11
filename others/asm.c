int write(int fd, char *s, int len) {
    int read;
    __asm__(
      "syscall\n\t"
      : "=a" (read)
      : "a" (1), "D" (fd), "S" (s), "d" (len)
    );
    return read;
}

int read(int fd, char *s, int len) {
    int read;
    __asm__(
        "syscall\n\t"
        : "=a" (read)
        : "a" (0), "D" (fd), "S" (s), "d" (len)
        );
    return read;
}

int main() {
    char msg[51];
    char st[22] = "Escreva uma mensagem\n";
    write(1, st, 22);

    read(0, msg, 50);

    write(1, msg, 50);
    return 0;
}

