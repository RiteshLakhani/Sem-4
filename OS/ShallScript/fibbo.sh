read -p "Enter the number of terms for Fibonacci sequence: " n

a=0
b=1
count=0

echo "Fibonacci sequence up to $n terms:"

while [ $count -lt $n ]; do
    echo -n "$a "

    next_term=$((a + b))
    a=$b
    b=$next_term

    count=$((count + 1))
done

echo