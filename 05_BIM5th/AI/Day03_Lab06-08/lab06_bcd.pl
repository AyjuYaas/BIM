% b. Factorial using recursion
% Base case: factorial of 0 is 1
factorial(0, 1).

% Recursive case: factorial of N is N * factorial(N-1)
factorial(N, Result) :-
    N > 0,
    N1 is N - 1,
    factorial(N1, Result1),
    Result is N * Result1.

% c. Fibonacci Series upto user defined number
% Base case: When limit is less than the current Fibonacci number, return an empty list
fibo_up_to(Limit, Series) :-
    fibo_up_to(Limit, 0, 1, Series).

% Recursive case to generate the Fibonacci series up to the limit
fibo_up_to(Limit, A, B, [A|Series]) :-
    A =< Limit,
    C is A + B,
    fibo_up_to(Limit, B, C, Series).

% Base case: When A exceeds the limit, the series ends
fibo_up_to(Limit, A, _, []) :-
    A > Limit.


% d. Tower of Hanoi
% Move N disks from Source to Destination using Auxiliary as a helper
hanoi(0, _, _, _) :-
    !.  % Base case: no disks to move

hanoi(N, Source, Destination, Auxiliary) :-
    N > 0,
    N1 is N - 1,
    hanoi(N1, Source, Auxiliary, Destination), 
    move(Source, Destination), 
    hanoi(N1, Auxiliary, Destination, Source).  

% Print the move
move(Source, Destination) :-
    format('Move disk from ~w to ~w~n', [Source, Destination]).


% In prolog query run:
% consult('yourfilepath/lab06_factorial.pl').
% ?- factorial(5, Result).
% ?- fibo_up_to(10, Series).