% Steps
% 1. consult('yourfilepath/knowledge.pl'), Use backward slash /
% 2. Now insert the Queries Below
% i. pass(anish).
% ii. pass(X). [when prompted use ; instead of enter]
% iii. studied(rekha).
% iv. not_studied(X). [when prompted use ; instead of enter]


% Known Facts
studied(radha).
studied(rakesh).
studied(anish).
not_studied(rekha).
not_studied(bibek).

% Rules
pass(X):-studied(X).
happy(X):-pass(X).
