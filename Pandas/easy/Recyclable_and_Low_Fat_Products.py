import pandas as pd

# task №1757

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    ds = products[(products['low_fats'] == 'Y') & (products['recyclable'] == 'Y')]
    return ds[['product_id']]
