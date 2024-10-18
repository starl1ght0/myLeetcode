import pandas as pd

# task №2885

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
    ds = students.rename(columns={'id':'student_id', 'first': 'first_name', 'last':'last_name','age':'age_in_years'})
    return ds
