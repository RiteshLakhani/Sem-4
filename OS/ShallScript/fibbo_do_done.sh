echo "Enter the value of n: "
read n

echo "First $n Fibonacci numbers are:"

a=0
b=1
count=0

while [ $count -lt $n ]
do
    echo -n "$a "

    next=$((a + b))
    a=$b
    b=$next

    ((count++))
done

echo
