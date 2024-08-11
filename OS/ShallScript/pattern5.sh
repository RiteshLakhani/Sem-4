echo "Enter Number Of Line:- "
read n

for ((i=1; i<=n; i++))
do  
    for((j=1;j<=(n-i)/2;j++))
    do
        printf " "
    done
    for ((k=1;k<=i;k++))
    do
        printf "* "
    done
    echo ""
done