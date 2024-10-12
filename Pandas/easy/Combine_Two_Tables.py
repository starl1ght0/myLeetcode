import pandas as pd

''' task №175 '''

def combine_two_tables(person: pd.DataFrame, address: pd.DataFrame) -> pd.DataFrame:
    df = pd.merge(left=person, right=address, how='left',on='personId')[['firstName','lastName','city','state']]
    
    return df

    '''- how='left': Это определяет способ объединения DataFrame. Когда вы указываете how='left', это означает, что вы хотите выполнить левое соединение (left join).
        Левое соединение включает все строки из левого DataFrame и только те строки из правого DataFrame, которые соответствуют по указанному ключу. 
        Если нет соответствующей строки в правом DataFrame, будут заполнены значения NaN.

        on='personId': Этот параметр указывает, по какому столбцу (или столбцам) вы хотите выполнить операцию объединения. 
        В данном случае это столбец personId. Это означает, что объединение будет происходить на основе значений, находящихся в этом столбце,
        находящемся как в левом, так и в правом DataFrame.
    '''
