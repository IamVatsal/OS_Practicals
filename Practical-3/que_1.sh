echo "Enter Cost Price: "
read cost_price
echo "Enter Selling Price: "
read selling_price
loss=`expr $cost_price - $selling_price`
loss=`expr $loss \* 100`
loss_percent=`expr $loss / $cost_price`
loss_percent1=`echo "scale=2; $loss / $cost_price" | bc`
echo "Loss Percentage: $loss_percent1% By bc"
echo "Loss Percentage: $loss_percent% By expr"