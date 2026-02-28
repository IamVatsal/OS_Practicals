cost_price=$1
selling_price=$2
loss=$((($cost_price - $selling_price) * 100 / $cost_price))
echo "Loss Percentage: $loss%"