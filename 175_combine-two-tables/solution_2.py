import pandas as pd

# Create the Person DataFrame
def create_person_table() -> pd.DataFrame:
    person_data = {
        'personId': [1, 2],
        'lastName': ['Wang', 'Alice'],
        'firstName': ['Allen', 'Bob']
    }
    person_df = pd.DataFrame(person_data)
    return person_df

# Create the Address DataFrame
def create_address_table() -> pd.DataFrame:
    address_data = {
        'addressId': [1, 2],
        'personId': [2, 3],  # Note: personId 1 is missing here (as in the example)
        'city': ['New York City', 'Leetcode'],
        'state': ['New York', 'California']
    }
    address_df = pd.DataFrame(address_data)
    return address_df


# Function to combine Person and Address tables
def combine_two_tables(person_df: pd.DataFrame, address_df: pd.DataFrame) -> pd.DataFrame:
    # Perform a LEFT JOIN using merge on the 'personId' column
    merged = pd.merge(person_df, address_df, on='personId', how='left')

    # Select only the relevant columns
    selected = merged[['firstName', 'lastName', 'city', 'state']]
    return selected



if __name__ == "__main__":
    # Create the tables
    person_df = create_person_table()
    address_df = create_address_table()

    # Combine the tables
    result_df = combine_two_tables(person_df, address_df)

    # Print the result
    print(result_df)
