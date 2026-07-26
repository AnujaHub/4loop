// It is cycle detection problem, based on LL and mainly figuring out about first node where the cycle starts,this is BF approach, need to learn the application of tortoise and hare algo

import java.util.*;

class node{
    int val;
    node next;
    node(int x){
        val=x;
        next=null;
    }

}

class test{
    public node detect(node head){
               Set<node> visited=new HashSet<>();
               while(head != null){
                if(visited.contains(head)){
                    return head;
                }
                visited.add(head);
                head = head.next;
               }
               return null;
    }
    public static void main(String args[]){
        node start=new node(1);
        start.next=new node(2);
        start.next.next=new node(3);
        start.next.next.next=new node(4);
        start.next.next.next.next=new node(5);
        start.next.next.next.next.next=start.next;
        test te=new test();
        node startnode=te.detect(start);
        if(startnode != null){
            System.out.print("node:"+startnode.val);

        }
else{
    System.out.println("no cycle");
}

    }
}
