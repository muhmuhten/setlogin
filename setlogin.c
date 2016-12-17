/* Copyright (c) 2016, Michael Zuo. ISC License. */

#include <unistd.h>
#include <sys/param.h>
#include <err.h>

int main(int const argc, char **argv) {
	if (argc < 3)
		errx(2, "usage: %s name prog...", *argv);

	if (setlogin(argv[1]) == -1)
		err(1, "setlogin");

	execvp(argv[2], argv+2);
	err(1, "%s", argv[2]);
}
