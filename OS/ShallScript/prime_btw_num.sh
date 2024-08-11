echo "Enter range from i : "
read i
echo " to j : "
read j

while [ $i -le $j ]; do
    l=2
    isPrime=true
    while [ $l -le $((i/2)) ]; do
        if [ $((i%l)) -eq 0 ]; then
            isPrime=false
            break
        fi
        l=$((l+1))
    done
    if [ $isPrime = true ]; then
        echo "$i is Prime"
    fi
    i=$((i+1))
done