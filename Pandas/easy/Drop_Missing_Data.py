import pandas as pd

# task №2883

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    ds = students.dropna(subset=['name'])
    return ds
