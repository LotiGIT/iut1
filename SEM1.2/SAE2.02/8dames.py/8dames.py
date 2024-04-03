import sys
# renvoie true si mettre une dame dans une case peut etre fait
def possible (N,choix,col , lig):
	if col <= 1 : return True
	coll = 1
	for lastlig in choix:
		if lastlig == lig  : return False
		if col + lig == lastlig + coll : return False
		if col >= lig and coll >= lastlig and col - lig == coll  - lastlig : return False
		if col <= lig and coll <= lastlig and lig  - col==  lastlig- coll : return False

		coll = coll + 1
	return True
	
# affiche une chaine
# def W(string):
# 	sys.stdout.write (string)

# affiche l'echiquier
# def montrer (choix):
# 	N = len(choix)
# 	for C in range(1,N+1):
# 		for L in range(1,N+1):
# 			if L == choix[C-1]:
# 				W ('X')
# 			else : W('#')
# 			W(' ')
# 		print ('\n')
# 	print
# retourne un tableau contenant tous les combinaisons possibles pour resoudre ce probleme pour N dames dans un echiquier de N*N
def dames(N,choix=[],col=1,num=0):
	if col == N+1:
		 #montrer(choix)
		return 1
	for lig in range(1,N+1):
		if possible (N,choix,col , lig):
			choix.append (lig)
			num = num + dames (N ,  choix , col + 1)
			choix.pop ()
	return num

num=dames(8)
print("Nombre de combinaisons possibles : ", num)