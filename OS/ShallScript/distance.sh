echo "Enter initial Velocity(u): ";
read u;

echo "Enter Accalration(a): ";
read a;

echo "Enter Time(t): ";
read t;

d=$(awk "BEGIN { printf \"%.2f\", ($u*$t) + (0.5*$a*$t*$t) }") 
echo "Distance = $d"