echo "Enter Base Number: "
read base

echo "Enter Power of the Power: "
read power

result=1

for ((i=1; i<=power; i++))
do
    result=$((result * base))
done

echo "Result: $result"
