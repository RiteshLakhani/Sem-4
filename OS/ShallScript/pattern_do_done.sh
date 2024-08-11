echo "Enter Number Of Line:- "
read n

for ((i=1; i<=n; i++))
do
    for ((j=1; j<=n; j++))
    do
        printf "* "
    done
    echo ""
done
