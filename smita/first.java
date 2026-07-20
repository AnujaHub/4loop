//To print a pattern O(n^2)
class Main{
    public void patt(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        System.out.print(" ");
    }
    for(int k=0;k<2*i+1;k++){
        System.out.print("*");
    }
    for(int l=0;l<n-1-i;l++){
        System.out.print(" ");
    }
System.out.println();
}
    }
    public static void main(String args[]){
     Main m=new Main();
     m.patt(3);
    }
}
