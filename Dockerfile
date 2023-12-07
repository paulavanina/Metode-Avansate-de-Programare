FROM gcc:latest
WORKDIR /usr/src/map
COPY map.c .
RUN gcc -o map map.c -lstdc++
CMD ["./map"]
