FROM gcc:latest

WORKDIR /
COPY app.cpp .

RUN mkdir /home/filedir
RUN g++ -o app app.cpp

ENTRYPOINT ["./app"]
