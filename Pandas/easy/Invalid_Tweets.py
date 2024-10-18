import pandas as pd

# task №1683

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    ds = tweets[(tweets['content'].str.len() > 15)]
    return ds[['tweet_id']]
    
