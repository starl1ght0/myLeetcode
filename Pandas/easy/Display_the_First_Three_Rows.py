import pandas as pd

# task №2879 

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    ds = employees.head(3)
    return ds
