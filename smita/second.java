//following striver sheet pattern,pattern no.8 , time complexity : O(n^2)
class second {
    public void patt(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
                System.out.print("*");
            }
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
second s = new second();
s.patt(3);
    }
}

