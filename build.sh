echo "FROM alpine:latest
RUN apk add apt git ruby strace g++ valgrind vim gcc cmake clang make" > Dockerfile

docker rmi cc
docker build -t cc .
docker run --rm -it -v $PWD:/home cc