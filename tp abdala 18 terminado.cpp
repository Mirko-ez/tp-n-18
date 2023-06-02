#include <bits/stdc++.h>

using namespace std;

vector <int> GenerarVector (vector <int> V, int n);
void MostrarVector(vector <int> v);
vector <int> GenerarVectorB (vector <int> V, int n);
int main()

   {
   	 vector<int> A,B;
   	 
   	 
   	 A=GenerarVector(A,10);
   	 B=GenerarVectorB(A,10);
   	 MostrarVector(A);
   	 MostrarVector(B);
   	 
   	 return 0;
   }
   
   vector<int>GenerarVector(vector<int>V, int n)
   
   {
   	//srand(time(NULL));
   	
   	int e,i;
   	  
   	  for(i=0;i<n;i++)
   	  {
   	  	 e=rand()%100;
   	  	 V.push_back(e);
		 }
		 
		 return V;
   }
   
   void MostrarVector(vector <int> V)
   
   {
   	 int i;
   	    for(i=0;i<V.size();i++)
   	    {cout<<V[i]<<"/";}
   	    
   	    cout<<endl;
   }
    
    vector<int>GenerarVectorB(vector<int> V, int n)
    
     {
     	int i;
     	vector <int> suma;
     	for(i=0;i<n;i++)
     	{if (V[i]%2==0){
         suma.push_back(V[i]);
		 }
		 }
		 return suma;
	 }

