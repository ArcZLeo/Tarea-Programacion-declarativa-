sumaLista([], 0).
sumaLista([N|L], S) :- sumaLista(L, SL), S is N + SL.