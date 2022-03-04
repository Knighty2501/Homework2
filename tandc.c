#if SYSTEM_1
# include "matrix_dynamic.h"
#elif SYSTEM_2
# include "matrix_static.h"
#endif

matrix transpose(matrix A_in) {
	int i,j;
	matrix A_out;
	A_out = create_empty(A_in.col_dim, A_in.row_dim);
	for(i=0; i<A_in.row_dim; i++) { 
		for(j=0; j<A_in.col_dim; j++) {
			A_out.element[i][j] = A_in.element[j][i];
		}
	}
	return A_out;
}
matrix convert(matrix A_in) {
	int i, j;
	matrix mint;
	mint = create_empty(A_in.row_dim, A_in.col_dim);
	for(i=0; i<A_in.row_dim; i++) {
		for(j=0; j<A_in.col_dim; j++) {
		int	k = (int)A_in.element[i][j];
	    mint.element[i][j] = k;
     // 	printf("\n%d", k);
	//		printf("\n%d", mint.element[i][j]);
//			printf(FORMAT, mint.element[i][j]);
		}
	}
	return mint;
}
void mint_print(matrix A_in) {
	int i, j; 
//	convert(A_in);
	printf("\n");
	for(i=0; i<A_in.row_dim; i++){
	  printf("\n");
	  for(j=0; j<A_in.col_dim; j++){
		  printf(FORMAT2, (int)A_in.element[i][j]);
        }
	printf("\n");
	}
}
