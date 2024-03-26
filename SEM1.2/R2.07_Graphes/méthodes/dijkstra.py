import sys
from heapq import heapify, heappop,heappush

def dijsktra(graph,src,dest):
    inf = sys.maxsize
    node_data = {
        'A':{'cost':inf,'pred':[]},
        'B':{'cost':inf,'pred':[]},
        'C':{'cost':inf,'pred':[]},
        'D':{'cost':inf,'pred':[]},
        'E':{'cost':inf,'pred':[]},
        'F':{'cost':inf,'pred':[]}
    }


    node_data [src]['cost'] = 0
    temp = src
    visited = []  
        
   
    for i in range(5) :
                if i not in visited : # verifie que le node na pas Ã©tÃ© visitÃ©
                    visited.append(temp) # si c est le cas il devient visited
                    min_heap=[] # valeur minimal de distance entre deux nodes
                    for j in graph[temp] : # parcours le graph avec temp = clÃ© (a,b,c ..)
                        if j not in visited : # si non, on le visite
                            cost = node_data[temp]['cost'] + graph[temp][j] # calculer le cout de la distance entre node src et ses voisins
                            if cost < node_data[j]['cost']: # si cost initial plus petit que cost calculÃ©
                                node_data[j]['cost'] = cost # on rÃ©assigne le cost au node voisin
                                node_data[j]['pred'] = node_data[j]['pred'] + list(temp) # on trouve les prédécesseurs 
                            heappush(min_heap,(node_data[j]['cost'],j)) # pousse la valeur dans min_heap
                heapify(min_heap) # reception de la valeur minimal (b ou c par ex)
                temp = min_heap[0][1] # assigner Ã  temp 
                
    print("distance plus courte : " + str((node_data[dest]['cost']))) # destination + prix
    print("chemin le plus court : " + str((node_data[dest]['pred']) + [dest])) # destination + chemin pris
            
                    
if __name__ == "__main__" :
    graph = {
        'A':{'B':2, 'C':4, },
        'B':{'A':2, 'C':3, 'D':8},
        'C':{'A':4, 'B':3, 'E':5, 'D':2},
        'D':{'B':8, 'C':2, 'E':11, 'F':22},
        'E':{'C':2, 'D':11, 'F':1},
        'F':{'D':22, 'E':1},
    }  
    source ='A'
    destination = 'F' 
        
    dijsktra(graph,source,destination)     
                    
        
        
        
        
