import pandas as pd

# Drop duplicates based on the 'email' column, keeping the first occurrence (i.e., the one with the smallest 'id')
def delete_duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    # Sort the rows based on id (Ascending order)
    person.sort_values(by='id',ascending=True,inplace=True)
    # Drop the duplicates based on email.
    return person.drop_duplicates(subset='email', keep='first', inplace=True)

# Create a DataFrame to simulate the 'Person' table
data = {'id': [1, 2, 3],
        'email': ['john@example.com', 'bob@example.com', 'john@example.com']}

person_df = pd.DataFrame(data)

print("Original DataFrame:")
print(person_df)

person_df_cleaned = delete_duplicate_emails(person_df)
print("\nDataFrame after removing duplicates:")
print(person_df_cleaned)
