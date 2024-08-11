echo "Enter a number: "
read a

factorial=1
counter=$a

while [ $counter -gt 0 ]
do
    factorial=$((factorial * counter))
    counter=$((counter - 1))
done

echo "Factorial of $a is: $factorial"
