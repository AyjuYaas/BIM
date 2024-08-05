% Facts
likes(john, ai).
likes(john, cs).
likes(sara, ai).

% Rules
likes(sara, cs) :- false.
likes(jack, X) :- likes(sara, X).

% Steps
% 1. consult('yourfilepath/lab08_knowledge.pl'), Use backward slash /
% 2. Now insert the Queries Below
% a. likes(jack, ai).
% b. likes(jack, cs).
% c. likes(john, cs). 
% d. likes(sara, cs).
% e. likes(jin, cs).