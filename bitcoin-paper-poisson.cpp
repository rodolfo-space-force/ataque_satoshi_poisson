//Rodolfo Milhomem
//https://github.com/rodolfo-space-force/


#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
 {

 double  q, z;
 
    cout<<"q= ";cin>>q;
    cout<<"z= ";cin>>z;
 
 double p = 1.0 - q;
 double lambda = z * (q / p);
 double sum = 1.0;
 int i, k; for (k = 0; k <= z; k++)
 {
 double poisson = exp(-lambda);
 for (i = 1; i <= k; i++)
 poisson *= lambda / i;
 sum -= poisson * (1 - pow(q / p, z - k));
  }
 
    cout <<"Sum = "<< sum << endl;
 	system("PAUSE");
	return 0;
}

// Licença
//Este projeto está licenciado sob a **Licença MIT**.  
//Você pode usar, modificar e redistribuir este código livremente, **desde que mencione o autor original**.


