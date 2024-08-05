% Facts
edge(s, a).
edge(s, b).
edge(a, c).
edge(a, e).
edge(b, e).
edge(e, g).

% Rules
path(X, Y) :- edge(X, Y).
path(X, Y) :- edge(X, Z), path(Z, Y).

% Queries (Use the following Queries in the prolog)
% consult('yourfilepath/lab09_knowledge.pl').
% a. edge(s, a).
% edge(b, e).
% edge(a, b).
% b. path(s, g).
% path(a, g).
% path(b, g).
% path(b, c).