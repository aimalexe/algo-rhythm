import pandas as pd

def rising_temperature(weather: pd.DataFrame) -> pd.DataFrame:
    # Ensure the 'recordDate' column is a datetime type
    weather['recordDate'] = pd.to_datetime(weather['recordDate'])
    
    # Create a copy of the weather DataFrame with a 1 day shift 
    weather_shifted = weather.copy()
    weather_shifted['recordDate'] = weather_shifted['recordDate'] + pd.to_timedelta(1, unit='D')
    
    # Merging the DataFrames on the 'recordDate' column to find consecutive dates
    merged_df = pd.merge(weather, weather_shifted, on='recordDate', suffixes=('_today', '_yesterday'))
    
    # Finding rows where the temperature is greater on the current day compared to the previous day
    result = merged_df[merged_df['temperature_today'] > merged_df['temperature_yesterday']][['id_today']].rename(columns={'id_today': 'Id'})
    
    return result


# Example Usage
data = {
    'id': [1, 2, 3, 4],
    'recordDate': ['2015-01-01', '2015-01-02', '2015-01-03', '2015-01-04'],
    'temperature': [10, 25, 20, 30]
}

weather_df = pd.DataFrame(data)
weather_df['recordDate'] = pd.to_datetime(weather_df['recordDate'])

# Calling the function
result = rising_temperature(weather_df)
print(result)
