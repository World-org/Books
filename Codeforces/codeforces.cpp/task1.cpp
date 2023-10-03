void help(vector<vector<int>>&image,int &n,int &m){

    if(x>=n || y>=m || image[x][y]==nc)return;

    int oc=image[x][y];

    image[x][y]=nc;

    if(x+1<n && image[x+1][y]==oc){

        help(image,x+1,y,nc,n,m);

    }

    if(x-1>=0 && image[x-1][y]==oc){

        help(image,x-1,y,nc,n,m);

    }

    if(y-1>=0 && image[x][y-1]==oc){

        help(image,x,y-1,nc,n,m);

    }

    if(y+1<m && image[x][y+1]==oc){

        help(image,x,y+1,nc,n,m);

    }

}

int solution(int **A, int N, int M){


}
