FROM alpine:latest
RUN apk add apt git ruby strace g++ valgrind vim gcc cmake clang make
