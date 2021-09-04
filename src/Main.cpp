#include "../include/Hearder.hpp"

// *? ctrl + k + u will uncomment the code | ctrl + k + c comment the code

int main()
{
    int dim = 50;

    // do
    // {
    //     cout << "\nEnter the vector size ( dim > 0 ) => ";
    //     cin >> dim;
    // } while (dim <= 0);

    int vec[dim], choise;
    //system("cls");

    vec_in(vec, dim);
    cout << "\n\t| Ordered Vector |" << endl;
    display(vec, dim);

    cout << "\n\n\tPRESS A KEY TO CONTINUE ..." << endl;
    getch();
    system("cls");

    do
    {
        cout << "\n\tMAKE YOUR CHOISE =>\n"
             << endl;
        cout << "\t(1) Selection Sort" << endl;
        cout << "\t(2) Bubble Sort" << endl;
        cout << "\t(3) Optimazed Bubble Sort" << endl;
        cout << "\t(4) Exchange Sort" << endl;
        cout << "\t(5) Insertion Sort" << endl;
        cout << "\t(6) Merge Sort" << endl;
        cout << "\t(7) Exit" << endl;

        cin >> choise;
        system("cls");

        if (choise != 7)
        {
            vec_random(vec, dim);
            cout << "\n\t| Shuffle Vector |" << endl;
            display(vec, dim);
        }

        switch (choise)
        {
        case 1:
            selection_sort(vec, dim);
            cout << "\n\t| Ordered Vector with Selection Sort (Time Complexity: O(n^2)|" << endl;
            display(vec, dim);
            break;

        case 2:
            bubble_sort(vec, dim);
            cout << "\n\t| Ordered Vector with Bubble Sort (Time Complexity: O(n^2)|" << endl;
            display(vec, dim);
            break;

        case 3:
            optimazed_bubble_sort(vec, dim);
            cout << "\n\t| Ordered Vector with Optimazed Bubble Sort (Time Complexity: O(n^2)|" << endl;
            display(vec, dim);
            break;

        case 4:
            exchange_sort(vec, dim);
            cout << "\n\t| Ordered Vector with Exchange Sort (Time Complexity: O(n^2)|" << endl;
            display(vec, dim);
            break;

        case 5:
            insertion_sort(vec, dim);
            cout << "\n\t| Ordered Vector with Insertion Sort (Time Complexity: O(n^2)|" << endl;
            display(vec, dim);
            break;

        case 6:
            merge_sort(vec, 0, dim - 1);
            cout << "\n\n\t| Ordered Vector with Merge Sort (Time Complexity: O(n*log(n))|" << endl;
            display(vec, dim);
            break;

        case 7:
            break;

        default:
            cout << "\n\t! WRONG CHOISE !";
            break;
        }

        cout << "\n\n\tPRESS A KEY TO CONTINUE ..." << endl;
        getch();
        system("cls");

    } while (choise != 7);

    return 0;
}
