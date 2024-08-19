# Use an official GCC image to compile the application
FROM gcc:latest

# Set the working directory
WORKDIR /usr/src/matrix_multiplication

# Copy the current directory contents into the container
COPY . .

# Build the application
RUN gcc -o main main.c

# Run the test suite
#RUN gcc -o test_multiplication test_multiplication.c

# Run the executable
CMD ["./main"]
