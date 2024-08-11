echo "Enter a number (N): "
read N

sum=0

for ((i = 1; i <= N; i++))
do
    square=$((i * i))
    sum=$((sum + square))
done

echo "Sum of squares from 1 to $N: $sum"
