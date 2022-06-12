#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::BasicCalc::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        this->Title(L"Basic Calc");
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    double firstNum, secondNum, result;

    void MainWindow::conversions()
    {
        firstNum = stod(to_string(txtFirst().Text()));
        secondNum = stod(to_string(txtSecond().Text()));
    }

    void MainWindow::output() { lblResult().Text(L"Result: " + to_hstring(result)); }

    void MainWindow::Button_Click(winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        conversions();
        result = firstNum + secondNum;
        output();
    }

    void MainWindow::subtract(winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        conversions();
        result = firstNum - secondNum;
        output();
    }

    void MainWindow::multiply(winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        conversions();
        result = firstNum * secondNum;
        output();
    }

    void MainWindow::divide(winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        conversions();
        result = firstNum / secondNum;
        output();
    }
}
