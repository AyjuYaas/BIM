% Facts
likes(john, ai).
likes(john, cs).
likes(sara, ai).
not(likes(john, cs)).

% Rules
likes(john, X) :- likes(sara, X).