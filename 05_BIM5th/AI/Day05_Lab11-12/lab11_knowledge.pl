gender(pam, female).
gender(tom, male).
gender(bob, male).
gender(liz, female).
gender(mary, female).
gender(ann, female).
gender(pat, male).
gender(sue, female).
gender(jim, male).
gender(dave, male).
gender(angela, female).

% parents
parent(pam, bob).
parent(tom, bob).
parent(tom, liz).
parent(bob, mary).
parent(bob, ann).
parent(bob, pat).
parent(bob, sue).
parent(sue, dave).
parent(sue, angela).
parent(pat, jim).

% For QUery Run These in prolog
% consult('yourfilepath/lab11_knowledge.pl').
% 1>
% iii. parent(tom, jim).
% iv. gender(angela, male).
% v.parent(bob, pat).
% vi. parent(liz, pat).

% 2>
% i. gender(X, male).
% ii. female(X.female).
% iii. parent(X, liz).
% iv. parent(bob, Y).
% v. parent(X, Y).
% vi. parent(X, Y), parent(Y, jim).
% vii. parent(tom, X), parent(X, Y), gender(Y, female).
% viii. parent(X, ann), parent(X, pat).
% ix. parent(P, ann), parent(P, Y), Y \= ann.
% x. parent(P, pat), parent(P, X), gender(X, female), X \= pat.
% xi. parent(X, angela), parent(Y, X), parent(Y, Z), gender(Z, male), Z \= X.
