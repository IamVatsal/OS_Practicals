num=$1
if [ $num ]
then
sum=$(($num * ($num + 1) / 2))
echo "Sum till $num is: $sum"
else
sum=$((50 * (50 + 1) / 2))
echo "Sum till 50 is: $sum"
fi