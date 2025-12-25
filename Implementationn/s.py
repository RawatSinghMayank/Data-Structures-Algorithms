import pandas as pd

df = pd.read_csv('filtered_dense_words.csv')
sampled = df.sample(n=10000, random_state=42)
sampled.to_csv('crossword_10k_sample.csv', index=False)
