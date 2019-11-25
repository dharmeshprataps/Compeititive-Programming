#include <bits/stdc++.h>
using namespace std;
#define r 7

int n,m;
unordered_map<string,int> present;

int pathrow[8]={1,0,0,1,-1,1,-1,-1};
int pathcol[8]={1,1,-1,-1,1,0,0,-1};
int flag=0;
bool compare(string s1,string s2)
{
    return s1<s2;
}
bool check(string word, string dict[],int n)
{
    if(present.find(word)!=present.end())
        { present.erase(word);
                    return true;}

    return false;
}


bool isvalid(int row,int col,bool visited[8][8],int rowno,int colno)
{
    if((row>=0)&&(row<rowno)&&(col>=0)&&(col<colno)&&(visited[row][col]==false))
    {
        return true;
    }
    else{return false;}
}
void makeword(char board[8][8],bool visited[8][8],int row,int col,string dict[],string word,int p,int rowno,int colno,int x,vector<string>&k)
{
   // cout<<word<<"\n";

    if(check(word,dict,x))
    {flag=1;

       k.push_back(word);
    }

    if(x==word.length())
    {
        return;
    }
    for(int i=0;i<8;i++)
    {
        int rownew=row+pathrow[i];
        int colnew=col+pathcol[i];

        if(isvalid(rownew,colnew,visited,rowno,colno))
        {
            visited[rownew][colnew]=true;
            makeword(board,visited,rownew,colnew,dict,(word)+(board[rownew][colnew]),p,rowno,colno,x,k);
            visited[rownew][colnew]=false;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	   string dict[x];
	   int maxlen=0;
	    for(int i=0;i<x;i++)
	    {
	        cin>>dict[i];
	        int len=dict[i].length();
	        if(len>maxlen)
	        {
	            maxlen=len;
	        }

	    }

	    for(int i=0;i<x;i++)
	    {

	        present[dict[i]]=1;
	    }

	  	  vector<std::string>k;

	 cin>>n;
	   cin>>m;
	    char board[8][8];
 for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>board[i][j];
	        }
	    }



	    string word="";
	    bool visited[8][8];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            visited[i][j]=false;
	        }
	    }
	    int len=m*n;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            visited[i][j]=true;
	            makeword(board,visited,i,j,dict,word+board[i][j],len,n,m,maxlen,k);
	            visited[i][j]=false;}
}

if(flag==1)
{
     sort (k.begin(),k.end(), compare);
     for(int i=0;i<k.size();i++)
     {
         cout<<k[i]<<" ";

     }
}
if(flag==0)
{cout<<"-1";}
cout<<endl;
}
}
