FROM app:1

WORKDIR /app
COPY app2.cpp .

RUN g++ -o app2 app2.cpp

CMD ["./app2"]
