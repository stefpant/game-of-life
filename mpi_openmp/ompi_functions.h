void getInputData(char* text,int* result,int n);
void makeArrayInBlocks(int* in,int* out,int sq_of_P,int k);
void makeRandomWorld(int* a,int n);
void findNeighbors(int rank,int sq_of_P,int P,int* U,int* D,int* L,int* R,int* Ul,int* Ur,int* Dl,int* Dr);
void checkInside(int *a,int *b,int n);
int find_new_a(int x,int neighbors);
void checkPerimeter(int *a,int n,int ul,int ur,int dl,int dr,int *u,int *d,int *l,int*r,int *b);
void swapArrays(int **a,int **b);
int world_changed(int *world,int *newWorld,int N);
void printWorld(int *world,int sq,int k);
