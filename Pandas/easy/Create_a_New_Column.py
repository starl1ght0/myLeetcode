import pandas as pd

# task №2881 

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees = employees.assign(bonus = employees['salary'] * 2)
    return employees
