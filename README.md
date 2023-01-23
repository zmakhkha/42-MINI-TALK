# MINI-TALK

`<img src="Subject/en.subject-1.jpg"/>`
`<img src="Subject/en.subject-2.jpg"/>`
`<img src="Subject/en.subject-3.jpg"/>`
`<img src="Subject/en.subject-4.jpg"/>`
`<img src="Subject/en.subject-5.jpg"/>`
`<img src="Subject/en.subject-6.jpg"/>`
`<img src="Subject/en.subject-7.jpg"/>`
`<img src="Subject/en.subject-8.jpg"/>`
`<img src="Subject/en.subject-9.jpg"/>`


# Signal Communication

This project demonstrates the use of signals for inter-process communication between a client and a server. The client program sends a message to the server using signals, and the server receives and processes the message.

## Parsing_Utils

### ft_print_error(char *c)

This function is used to display an error message and exit the program. The message to be displayed is passed as an argument to the function.

### parse_it(int n, char **c)

This function is used to check that the number of command-line arguments passed is 3 and that the first argument is a positive integer. If either of these conditions is not met, the program calls the ft_print_error() function to display an error message and exit.

### ft_isnumber(char *number)

This function is used to check if the second argument passed is a valid number. If not, the program calls the ft_print_error() function to display an error message and exit.

## Client program

### ft_send_char(int pid, unsigned char c)

This function is used to send a single character to the server process. It takes the pid of the receiving process and the character to be sent as arguments. The character is sent one bit at a time using the kill() function to send the SIGUSR1 or SIGUSR2 signal, depending on the value of the bit.

### f(char *a, int pid)

This function is used to send a message to the server process. It takes the message to be sent and the pid of the receiving process as arguments. The function uses a loop to iterate through the message, calling the ft_send_char() function to send each character of the message.

### main(int c, char **v)

The main function of the client program first calls the parse_it() and ft_isnumber() functions to check the command-line arguments passed. If the arguments are valid, the program continues to call the ft_atoi() function to convert the first argument to an integer, which is used as the process ID (pid). The f() function is then called, passing the second command-line argument as the message to be sent and the pid of the receiving process.


## Server program

### ft_send_char(int pid, unsigned char c)

This function is used to send a single character to the server process. It takes the pid of the receiving process and the character to be sent as arguments. The character is sent one bit at a time using the kill() function to send the SIGUSR1 or SIGUSR2 signal, depending on the value of the bit.

### signal_handler1(int signum, siginfo_t *info, void *ptr)

This function is the signal handler for the SIGUSR1 signal. It is triggered every time a SIGUSR1 signal is received. The function prints a message "VU !!\n"

### f(char *a, int pid)

This function is used to send a message to the server process. It takes the message to be sent and the pid of the receiving process as arguments. The function uses a loop to iterate through the message, calling the ft_send_char() function to send each character of the message.

### main(int c, char **v)

The main function of the server program sets up a signal handler for the SIGUSR1 signal using the sigaction() function. Then it calls the parse
