//#!/usr/bin/env node
class Item {
    constructor(name, value, weight) {
        this.name = name;
        this.value = value;
        this.weight = weight;
    }
    toString() {
        return 'Item  name: ${this.name} value: ${this.value} weight: ${this.weight}';
    }
}

function knapsack(capacity, items) {
    // initialize the table with an extra row and column to avoid index out of bounds issues in the code below
    const table = [];
    for (let i = 0; i <= items.length; i++) {
        table.push(Array(capacity + 1).fill(0));
    }

    // create the dynamic programming table 
    items.forEach((item, index) => {
        // initialized at 1 because capacity 0 is the extra column added above. 
        for (let currentCapacity = 1; currentCapacity <= capacity; currentCapacity++) {
            // because an extra row was added to the table, the index variable (from iterating over the items) will be the previous row in the table
            // index + 1 will be the current row in the table
            const valueForCapacityInPreviousRow = table[index][currentCapacity];
            if (item.weight <= currentCapacity) {
                table[index + 1][currentCapacity] = Math.max(valueForCapacityInPreviousRow, (item.value + table[index][currentCapacity - item.weight]));
            } else {
                table[index + 1][currentCapacity] = valueForCapacityInPreviousRow;
            }
        }
    });

    // use the table to find the items that fit in the knapsack and give the most value
    var solution = [];
    var currentCapacity = capacity;
    // start with the last item because the last cell in the table will contain the max value the knapsack can hold.
    for (let i = items.length; i > 0; i--) {
        // note: table[i] is the current row, and table[i-1] is the previous row, because i is initialized to items.length
        if (table[i][currentCapacity] !== table[i - 1][currentCapacity]) {
            // items[i-1] is the current item, because i is initialized to items.length. 
            solution.push(items[i - 1]);
            currentCapacity -= items[i - 1].weight;
        }
    }
    return solution;
}

const items = [new Item("item 1", 5, 2),
new Item("item 2", 3, 1),
new Item("item 3", 4, 5),
new Item("item 4", 12, 6)];

const result = knapsack(10, items);
console.log(result);