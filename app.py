import pandas as pd
import plotly.express as px
import plotly.graph_objects as go
from dash import Dash, dcc, html
import dash_bootstrap_components as dbc

# Ler o arquivo CSV
df = pd.read_csv('data.csv')

# Filtrar dados para Python e C
df_python = df[df['linguagem'] == 'Python']
df_c = df[df['linguagem'] == 'C']

# Criar o gráfico de linhas
fig_line = px.line(df, x='entrada', y=['tempo 1', 'tempo 2'], color='algoritmo', facet_col='linguagem', 
                   title='Comparação de Algoritmos de Ordenação em Diferentes Linguagens',
                   labels={'entrada': 'Tamanho da Entrada', 'value': 'Tempo', 'variable': 'Tempo'})

# Criar o gráfico de barras para o tempo médio de execução
df_mean = df.groupby(['algoritmo', 'linguagem']).mean().reset_index()
fig_bar = px.bar(df_mean, x='algoritmo', y='tempo 1', color='linguagem', barmode='group',
                 title='Tempo Médio de Execução dos Algoritmos',
                 labels={'tempo 1': 'Tempo Médio', 'algoritmo': 'Algoritmo'})

# Criar o gráfico de box plot para a distribuição do tempo de execução em Python
fig_box_python = px.box(df_python, x='algoritmo', y='tempo 1', color='algoritmo',
                        title='Distribuição do Tempo de Execução dos Algoritmos em Python',
                        labels={'tempo 1': 'Tempo', 'algoritmo': 'Algoritmo'})

# Criar o gráfico de box plot para a distribuição do tempo de execução em C
fig_box_c = px.box(df_c, x='algoritmo', y='tempo 1', color='algoritmo',
                   title='Distribuição do Tempo de Execução dos Algoritmos em C',
                   labels={'tempo 1': 'Tempo', 'algoritmo': 'Algoritmo'})

# Inicializar o aplicativo Dash com o tema Bootstrap
app = Dash(__name__, external_stylesheets=[dbc.themes.BOOTSTRAP])

# Layout do aplicativo
app.layout = dbc.Container([
    dbc.Row([
        dbc.Col(html.H1('Comparação de Algoritmos de Ordenação em Diferentes Linguagens'), width=12)
    ]),
    dbc.Row([
        dbc.Col(dcc.Graph(id='line-graph', figure=fig_line), width=12)
    ]),
    dbc.Row([
        dbc.Col(dcc.Graph(id='bar-graph', figure=fig_bar), width=12)
    ]),
    dbc.Row([
        dbc.Col(dcc.Graph(id='box-graph-python', figure=fig_box_python), width=6),
        dbc.Col(dcc.Graph(id='box-graph-c', figure=fig_box_c), width=6)

    ]),
], fluid=True)

# Executar o servidor
if __name__ == '__main__':
    app.run_server(debug=True)