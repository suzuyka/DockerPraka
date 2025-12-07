FROM gcc:latest

COPY filedir/ /home/filedir/
COPY app.cpp /app/

WORKDIR /app

RUN g++ -o app app.cpp

CMD ["/app/app"]
