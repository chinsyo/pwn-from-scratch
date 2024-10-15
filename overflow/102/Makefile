vuln: vuln.c
	cc -fno-stack-protector -z execstack -m32 -o vuln vuln.c

.PHONY: clean
clean:
	rm -rf vuln