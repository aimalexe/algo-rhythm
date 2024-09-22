import pandas as pd

# Function to create the Person DataFrame
def create_person_table() -> pd.DataFrame:
    person_data = {
        'id': [1, 2, 3],
        'email': ['a@b.com', 'c@d.com', 'a@b.com']
    }
    person_df = pd.DataFrame(person_data)
    return person_df

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    # Group by email and filter where count is greater than 1
    duplicate_email_df = person.groupby('email').filter(lambda x: len(x) > 1)

    # Select the email column and remove duplicates
    result_df = duplicate_email_df[['email']].drop_duplicates()

    return result_df

def main():
    # Create the Person table
    person_df = create_person_table()

    # Find duplicate emails
    result_df = duplicate_emails(person_df)

    # Print the result
    print(result_df)

if __name__ == "__main__":
    main()
