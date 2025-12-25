import java.util.*;

class DisjointSet {
    private List<Integer> parent, rank, size;

    public DisjointSet(int n) {
        parent = new ArrayList<>(n + 1);
        rank = new ArrayList<>(n + 1);
        size = new ArrayList<>(n + 1);

        for (int i = 0; i <= n; i++) {
            parent.add(i);
            rank.add(0);
            size.add(1);
        }
    }

    public int findParent(int node) {
        if (parent.get(node) == node)
            return node;
        int ultimateParent = findParent(parent.get(node));
        parent.set(node, ultimateParent); // Path compression
        return ultimateParent;
    }

    public void unionByRank(int node1, int node2) {
        int root1 = findParent(node1);
        int root2 = findParent(node2);

        if (root1 == root2) return;

        if (rank.get(root1) < rank.get(root2)) {
            parent.set(root1, root2);
        } else if (rank.get(root2) < rank.get(root1)) {
            parent.set(root2, root1);
        } else {
            parent.set(root2, root1);
            rank.set(root1, rank.get(root1) + 1);
        }
    }

    public void unionBySize(int node1, int node2) {
        int root1 = findParent(node1);
        int root2 = findParent(node2);

        if (root1 == root2) return;

        if (size.get(root1) < size.get(root2)) {
            parent.set(root1, root2);
            size.set(root2, size.get(root2) + size.get(root1));
        } else {
            parent.set(root2, root1);
            size.set(root1, size.get(root1) + size.get(root2));
        }
    }
}

public class Main {
    public static void main(String[] args) {
        DisjointSet ds = new DisjointSet(7);

        ds.unionBySize(1, 2);
        ds.unionBySize(2, 3);
        ds.unionBySize(4, 5);
        ds.unionBySize(6, 7);
        ds.unionBySize(5, 6);

        if (ds.findParent(3) == ds.findParent(7)) {
            System.out.println("Same");
        } else {
            System.out.println("Not same");
        }

        ds.unionBySize(3, 7);

        if (ds.findParent(3) == ds.findParent(7)) {
            System.out.println("Same");
        } else {
            System.out.println("Not same");
        }
    }
}
