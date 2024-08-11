echo "Enter n: "
read n

i=2
isPrime=true

while [ $i -le $((n/2)) ]; do
    if [ $((n%i)) -eq 0 ]; then
        isPrime=false
        break
    fi
    i=$((i+1))
done

if [ $isPrime = true ]; then
    echo "Prime"
else
    echo "Not Prime"
fi

i=2;
isPrime=false

while [ $i -le $((n/2))];
do
    if [ $((n%i)) -eq 0 ];then
        isPrime = false
        break
    fi
    i=$((i+1))
done

if [ $isPrime = true ]; then
    echo "Prime"
else
    echo "Not Prime"
