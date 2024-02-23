def is_safe(board, row, col):
    # VÃ©rifie si placer une reine sur board[row][col] est sÃ»r
    # VÃ©rification de la ligne
    for i in range(col):
        if board[row][i] == 1:
            return False
    
    # VÃ©rification de la diagonale supÃ©rieure gauche
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    
    # VÃ©rification de la diagonale infÃ©rieure gauche
    for i, j in zip(range(row, len(board), 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    
    return True

def solve_n_queens_util(board, col):
    # Cas de base : toutes les reines sont placÃ©es
    if col >= len(board):
        return True
    
    # Placez cette reine dans chaque rangÃ©e de cette colonne et vÃ©rifiez si c'est sÃ»r
    for i in range(len(board)):
        if is_safe(board, i, col):
            board[i][col] = 1
            
            # RÃ©cursion pour placer le reste des reines
            if solve_n_queens_util(board, col + 1):
                return True
            
            # Si placer la reine ici ne mÃ¨ne pas Ã  une solution, backtrack
            board[i][col] = 0
    
    return False

def solve_n_queens(n):
    # CrÃ©ez un Ã©chiquier vide de taille n x n
    board = [[0] * n for _ in range(n)]
    
    # Appel Ã  la fonction utilitaire pour rÃ©soudre le problÃ¨me
    if not solve_n_queens_util(board, 0):
        print("Pas de solution possible.")
        return
    
    # Afficher la solution
    for row in board:
        print(row)

# Exemple d'utilisation pour un Ã©chiquier 8x8
solve_n_queens(8)