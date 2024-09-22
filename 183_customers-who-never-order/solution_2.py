import pandas as pd

# Function to create the Customers and Orders DataFrames
def create_customers_orders_table() -> pd.DataFrame:
    customers_data = {
        'id': [1, 2, 3, 4],
        'name': ['Joe', 'Henry', 'Sam', 'Max']
    }
    orders_data = {
        'id': [1, 2],
        'customerId': [3, 1]
    }
    
    customers_df = pd.DataFrame(customers_data)
    orders_df = pd.DataFrame(orders_data)
    
    return customers_df, orders_df

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    # Perform a left join between customers and orders on customerId
    merged_df = pd.merge(customers, orders, how='left', left_on='id', right_on='customerId')

    # Filter where order id is NaN (indicating no order was placed)
    no_order_df = merged_df[merged_df['id_y'].isna()]

    # Select only the customer names who never placed orders
    result_df = no_order_df[['name']].rename(columns={'name': 'Customers'})
    
    return result_df


def main():
    # Create the Customers and Orders tables
    customers_df, orders_df = create_customers_orders_table()

    # Find customers who never ordered
    result_df = find_customers(customers_df, orders_df)

    # Print the result
    print(result_df)

if __name__ == "__main__":
    main()
