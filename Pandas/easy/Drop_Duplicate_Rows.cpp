import pandas as pd

# task №2882

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    ds = customers.drop_duplicates(subset=['email'])
    return ds
    
