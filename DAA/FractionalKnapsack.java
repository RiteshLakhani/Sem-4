import java.util.*;

class Item implements Comparable<Item> {
    double weight;
    double value;
    double valuePerWeight;

    public Item(double weight, double value) {
        this.weight = weight;
        this.value = value;
        this.valuePerWeight = value / weight;
    }

    @Override
    public int compareTo(Item other) {
        // Sort in descending order of value per weight ratio
        return Double.compare(other.valuePerWeight, this.valuePerWeight);
    }
}

public class FractionalKnapsack {

    public static double fractionalKnapsack(double[] weights, double[] values, double capacity) {
        int n = weights.length;
        Item[] items = new Item[n];

        // Create Item objects and calculate value per weight ratio
        for (int i = 0; i < n; i++) {
            items[i] = new Item(weights[i], values[i]);
        }

        // Sort items based on value per weight ratio
        Arrays.sort(items);

        double totalValue = 0;
        double remainingCapacity = capacity;

        // Iterate through sorted items
        for (Item item : items) {
            if (remainingCapacity >= item.weight) {
                // If capacity is enough, add the whole item
                totalValue += item.value;
                remainingCapacity -= item.weight;
            } else {
                // If not, add a fraction of the item
                totalValue += (item.valuePerWeight * remainingCapacity);
                break;
            }
        }

        return totalValue;
    }

    public static void main(String[] args) {
        double[] weights = {10, 20, 30, 40, 50 };
        double[] values = {20, 30, 66, 40, 60 };
        double capacity = 100;

        double maxTotalValue = fractionalKnapsack(weights, values, capacity);
        System.out.println("Maximum value: " + maxTotalValue);
    }
}
