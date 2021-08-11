//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int i,n,a,t,s=0;
//    cin>>t;/// nos of steps
//
//   while()
//        {
//            cin>>n;
//            for(i=1;i<=n;i++)
//        {   a=(i*2)*(i*2);
//            s=s+a;
//        }
//
//
//    }cout<<s;
//
//
//	//code
//	return 0;
//
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	//code
//	int a[100],s,i,t,j;
//	cin>>t;
//	for(j=1;j<=t;j++){
//	cin>>s;
//
//	for(i=1;i<=s;i++){
//	cin>>a[i];}
//	for(i=1;i<=s;i++)
//	cout<<a[i]<<" ";}
//	return 0;
//}
//using namespace std;

#include <iostream>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--){
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        s=s+i;
    cout<<s;
    }
    return 0;
}
