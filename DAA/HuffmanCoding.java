import java.util.*;

class HuffmanNode {
    char data;
    int frequency;
    HuffmanNode left;
    HuffmanNode right;

    HuffmanNode(char data, int frequency) {
        this.data = data;
        this.frequency = frequency;
        left = null;
        right = null;
    }
}

class MyComparator implements Comparator<HuffmanNode> {
    public int compare(HuffmanNode x, HuffmanNode y) {
        return x.frequency - y.frequency;
    }
}

public class HuffmanCoding {

    public static void printCodes(HuffmanNode root, String code) {
        if (root == null) {
            return;
        }
        if (root.data != '\0') {
            System.out.println(root.data + ": " + code);
        }
        printCodes(root.left, code + "0");
        printCodes(root.right, code + "1");
    }

    public static int huffmanCodes(char[] data, int[] frequency) {
        PriorityQueue<HuffmanNode> pq = new PriorityQueue<>(data.length, new MyComparator());

        for (int i = 0; i < data.length; i++) {
            HuffmanNode hn = new HuffmanNode(data[i], frequency[i]);
            pq.add(hn);
        }

        HuffmanNode root = null;

        while (pq.size() > 1) {
            HuffmanNode x = pq.poll();
            HuffmanNode y = pq.poll();

            HuffmanNode newNode = new HuffmanNode('\0', x.frequency + y.frequency);
            newNode.left = x;
            newNode.right = y;
            root = newNode;
            pq.add(newNode);
        }

        System.out.println("Huffman Codes are : ");
        printCodes(root, "");

        int totalBits = calculateTotalBits(root, 0);
        return totalBits;
    }

    public static int calculateTotalBits(HuffmanNode root, int depth) {
        if (root == null) {
            return 0;
        }
        if (root.left == null && root.right == null) {
            return root.frequency * depth;
        }
        return calculateTotalBits(root.left, depth + 1) + calculateTotalBits(root.right, depth + 1);
    }

    public static void main(String[] args) {
        char[] data = { 'a', 'b', 'c', 'd' };
        int[] frequency = { 50, 20, 15, 30 };

        int totalBits = huffmanCodes(data, frequency);
        System.out.println("Total Bits: " + totalBits);
    }
}
