K at(K x,K y);
K promote(K a);
K demote(K a);
K ci(K a);
K collapse(K x);
K delist(K x);
K *EVP(K e);
K cd(K a);
K kap(K *a,V v);
extern S LS;
K newE(S s,K k);
I VA(V p);
K newK(I t,I n);
K Kv();
K kcloneI(K a,const char*f,int n);
#define kclone(a)   kcloneI(a,__FILE__,__LINE__)
