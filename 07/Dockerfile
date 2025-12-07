FROM gcc:latest

WORKDIR /app

COPY app.cpp .

RUN g++ -o app app.cpp

ENV USERNAME="Harry Potter"

CMD ["./app"]
