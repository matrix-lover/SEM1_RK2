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
    
    int** A = new int*[A_columns]; // матрица A
    for(int i = 0; i < A_columns; ++i)
    {
        A[i] = new int[A_line_B_col];
    }
    
    int** B = new int*[A_line_B_col]; // матрица B
    for(int i = 0; i < A_line_B_col; ++i)
    {
        B[i] = new int[B_lines];
    }
    
    int** n_matrix = new int*[A_columns]; // новая матрица
    for(int i = 0; i < A_columns; ++i)
    {
        n_matrix[i] = new int[B_lines](); // инициализируем нулем каждый элемент с помощью ()
    }
    
    cout << "матрица A: " << '\n';
    for(int i = 0; i < A_columns; ++i) // ввод и вывод матрицы A
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
    for(int i = 0; i < A_line_B_col; ++i) // ввод и вывод матрицы B
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
    for(int i = 0; i < A_columns; ++i) // умножение матриц A * B и вывод получившейся матрицы
    {
        for(int j = 0; j < B_lines; ++j)
        {
            for(int k = 0; k < A_line_B_col; ++k)
            {
                n_matrix[i][j] += A[i][k] * B[k][j];
            }
            cout << n_matrix[i][j] << " ";
        }
        cout << '\n';
    }
    
    for(int i = 0; i < A_columns; ++i)
    {
        delete[] A[i];
    }
    delete[] A;
    
    for(int i = 0; i < A_line_B_col; ++i)
    {
        delete[] B[i];
    }
    delete[] B;
    
    for(int i = 0; i < A_columns; ++i)
    {
        delete[] n_matrix[i];
    }
    delete[] n_matrix;
    
    return 0;
}
