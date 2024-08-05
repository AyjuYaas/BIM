% Facts
parent_of(jamesI, charlesI).
parent_of(jamesI, elizabeth).
parent_of(charlesI, catherine).
parent_of(charlesI, charlesII).
parent_of(charlesI, jamesII).
parent_of(elizabeth, sophia).
parent_of(sophia, gorgeI).

male(jamesI).
male(charlesI).
male(charlesII).
male(jamesII).
male(georgeI).

female(elizabeth).
female(catherine).
female(sophia).


% Rules
sibling_of(X, Y) :- parent_of(Z, X), parent_of(Z, Y), X \= Y.
sister_of(X, Y) :- sibling_of(X, Y), female(X).
brother_of(X, Y) :- sibling_of(X, Y), male(X).

% Queries (Use the following Queries in the prolog)
% a. parent_of(georgeI, charlesI).
% b. parent_of(charlesI, catherine).
% c. parent_of(charlesI, georgeI).
% d. sister_of(X, Y).
% e. brother_of(X, Y)
% f. sibling_of(X, Y)

