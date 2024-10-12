import pandas as pd

# task №2888

def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
    ds = pd.concat([df1, df2], axis=0) 
    return ds
