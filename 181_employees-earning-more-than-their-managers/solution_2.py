import pandas as pd

# Create the Employee DataFrame
def create_employee_table()-> pd.DataFrame:
    employee_data = {
        'id': [1, 2, 3, 4],
        'name': ['Joe', 'Henry', 'Sam', 'Max'],
        'salary': [70000, 80000, 60000, 90000],
        'managerId': [3, 4, None, None]
    }
    employee_df = pd.DataFrame(employee_data)
    return employee_df


def find_employees(employee_df: pd.DataFrame)-> pd.DataFrame:
    # Perform a self-merge (equivalent to a self-join) on managerId
    merged_df = pd.merge(employee_df, employee_df, left_on='managerId', right_on='id', suffixes=('_emp', '_mgr'))

    # Filter where employee salary is greater than manager salary
    result = merged_df[merged_df['salary_emp'] > merged_df['salary_mgr']]

    # Select the employee's name
    result_df = result[['name_emp']].rename(columns={'name_emp': 'Employee'})
    return result_df

def main():
    # Create the Employee table
    employee_df = create_employee_table()

    # Find the employees earning more than their managers
    result_df = find_employees(employee_df)

    # Print the result
    print(result_df)

if __name__ == "__main__":
    main()
