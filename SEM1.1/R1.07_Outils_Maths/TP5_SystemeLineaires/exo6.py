A=np.array([[5. , 0, -3. ], [ 3., 4, 1.], [ 1. , -1., -1.]])
B=np.array([[-4.], [2.], [2]])
alg.det(A)


alg.inv(A)
matrix([[-5. , 0., 3. ],
[ 3. , 2.]])

X=np.dot(alg.inv(A),B)
array([[31.],[19.]])