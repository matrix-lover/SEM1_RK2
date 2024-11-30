#include <iostream>
#include <random>

using namespace std;

int main()
{
    int A_line_B_col;
    int A_columns;
    int B_lines;
    cout << "Размер строк матрицы A и столбцов B" << '\n';
    cin >> A_line_B_col;
    cout << "Размер столбцов A" << '\n';
    cin >> A_columns;
    cout << "Размер строк B" << '\n';
    cin >> B_lines;
    
    int A[A_columns][A_line_B_col];
    int B[A_line_B_col][B_lines];
    int n_matrix[A_columns][B_lines];
    
    cout << "матрица A: " << '\n';
    for(int i = 0; i < A_columns; ++i) // ввод матрицы A
    {
        for(int j = 0; j < A_line_B_col; ++j)
        {
            A[i][j] = rand() % 5;
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    
    cout << "матрица B: " << '\n';
    for(int i = 0; i < A_line_B_col; ++i) // ввод матрицы B
    {
        for(int j = 0; j < B_lines; ++j)
        {
            B[i][j] = rand() % 5;
            cout << B[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    
    cout << "новая матрица: " << '\n';
    for(int i = 0; i < A_columns; ++i) // вывод новой матрицы (умножение матриц A * B)
    {
        for(int j = 0; j < B_lines; ++j)
        {
            for(int k = 0; k < A_line_B_col; ++k)
            {
                n_matrix[i][j] += A[i][k] * B[k][j];
                cout << n_matrix[i][j] << " ";
            }
        }
        cout << '\n';
    }
    
    return 0;
}

