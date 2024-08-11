echo "Enter No: "
read n

finaln=$n
i=0
sum=0

while [ $n -gt 0 ]
do
    r=$((n % 10))
    n=$((n / 10))
    i=$((i + 1))
done

n=$finaln
while [ $n -gt 0 ]
do
    r=$((n % 10))
    pow=$(echo "$r**$i")
    sum=$((sum + pow))
    n=$((n / 10))
done

if [ $finaln -eq $sum ]
then
    echo "Armstrong"
else
    echo "Not Armstrong"
fi
