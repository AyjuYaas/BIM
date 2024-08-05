% Prolog Fact: A fact in Prolog is a basic statement that declares something to be true. It’s a way to store simple knowledge in the program.
% Syntax: fact_name(argument1, argument2, ...).

% Prolog Query: A query in Prolog is how you ask the program questions based on the facts and rules defined in the program. 
% When you run a query, Prolog tries to find answers that satisfy the query by searching through the facts and applying rules.
% Syntax: query(argument1, argument2, ...).

% Prolog List: A list in Prolog is a way to store multiple items in a sequence. 
% Lists are a fundamental data structure in Prolog and are used extensively in various operations.
% Syntax: [Element1, Element2, Element3, ...].

% ----------------------------------------------------------------------------------------------------

% A prolog program with 5 facts, rules, queries
% Facts
likes(alice, pizza).
likes(bob, burger).
likes(carol, pizza).
likes(dave, sushi).
likes(eve, salad).

% Rules: 
% X and Y are friends if they both like the same food.
friends(X, Y) :- likes(X, Z), likes(Y, Z), X \= Y.

% X is a foodie if X likes at least one type of food.
foodie(X) :- likes(X, _).

% X and Y have different tastes if X likes one food and Y likes another.
different_tastes(X, Y) :- likes(X, A), likes(Y, B), A \= B.


% In Prolog use the following Queries 
% consult('yourfilepath/lab06_a_knowledge.pl'), Use backward slash /

% To find all friends of Alice
% friends(alice, X).

% To check if Bob is a foodie
% foodie(bob).

% To find out who has different tastes from Carol
% different_tastes(carol, X).

% -------------------------------------------------------------------------------------------

% Now All LIST Operations
% Membership check
% ?- member(banana, [apple, banana, cherry, date]).
% ?- member(grape, [apple, banana, cherry, date]).

% Length of a list
% length([apple, banana, cherry, date], Length).

% Concatenation of two lists
% append([pizza, burger], [sushi, salad], Result).

% Insert an element into a list
% insert_at_beginning(apple, [banana, cherry], Result).

% Delete an element from a list
% delete([pizza, burger, sushi], sushi, Result).

% Append an element to a list
% append_element(apple, [banana, cherry], Result).

