echo "Enter n: "
read n

for ((i=1; i<=n; i++))
do 
    for ((j=1; j<=n; j++))
    do
        if [ $i -eq 1 -o $j -eq 1 -o $i -eq $n -o $j -eq $n ]; then
            printf "* "
        else printf "  "
        fi
    done
    echo ""
done