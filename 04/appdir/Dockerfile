FROM gcc:latest

WORKDIR /
COPY . /home/

RUN g++ -o /home/appdir/app /home/appdir/app.cpp

CMD ["/home/appdir/app"]
