template<Class E>;


Matrix<E>:: ~Matrix(){
for(int i=0;i<row;i++)
	delete[] A[i];
delete [] A;
}
Matrix<E>::Matrix(int c,int r){
        col=c;
        row=r;
        data=new E*[r];
        for (int i=0;i<row;i++) 
        data[i]=new E[c];
    }
    
template<Class E>;
Matrix<E>:: Matrix(){
		col=0;
        row=0;
        data=new E[1];
        data[0]=new E[1];}
        
        
template<Class E>;
Matrix<E>::  operator +(const Matrix<E> & summ ){
    if(row == summ.row && col==summ.col){
        Matrix <E> aux(row,col);
        for (int i=0;i<row;i++)
            for (int j=0;j<col;j++)
              aux[i][j] += data[i][j] + summ.data[i][j];  

     }
	 return aux;         
}
void Matrix<E>::llenar(){
	for (int i=0;i<row;i++)
            for (int j=0;j<col;j++)
            	data[i][j]=0;
}

Matrix<E>::  operator * (const Matrix<E> & summ ){
	 if(col == summ.row){
		E help;
        Matrix <E> aux(row,summ.col);
        aux.llenar();
        for (int i = 0 ; i < aux.row ; i++)
            for (int j = 0 ; j < aux.col ; j++)
             	for(int k = 0 ; k < col ; k++)
              		aux[i][j] += data[i][k] * summ.data[k][j];
}
		return aux;  
}
template<Class E>;
Matrix<E>:: & operator << (E & v){
		for (int i = 0 ; i < aux.row ; i++)
            for (int j = 0 ; j < aux.col ; j++)
	
}
template<Class E>;
friend ostream Matrix<E>:: & operator << (ostream & os; const matrix <T> & m);
