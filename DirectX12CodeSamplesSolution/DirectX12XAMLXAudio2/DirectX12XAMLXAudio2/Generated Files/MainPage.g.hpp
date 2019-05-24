﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::DirectX12XAMLXAudio2::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::DirectX12XAMLXAudio2::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->swapChainPanel = safe_cast<::Windows::UI::Xaml::Controls::SwapChainPanel^>(__target);
            }
            break;
        case 2:
            {
                this->contentPanel = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(__target);
            }
            break;
        case 3:
            {
                this->soundPlayer = safe_cast<::Windows::UI::Xaml::Controls::MediaElement^>(__target);
            }
            break;
        case 4:
            {
                this->checkBoxNormalMape = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(this->checkBoxNormalMape))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::NormalMapeOnClick);
            }
            break;
        case 5:
            {
                this->checkBoxCubeMape = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(this->checkBoxCubeMape))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::CubeMapeOnClick);
            }
            break;
        case 6:
            {
                this->checkBoxParallaxMape = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(this->checkBoxParallaxMape))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::ParallaxMapeOnClick);
            }
            break;
        case 7:
            {
                this->buttonforward = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->buttonforward))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::MoveForward);
            }
            break;
        case 8:
            {
                this->buttonbackward = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->buttonbackward))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::MoveBackward);
            }
            break;
        case 9:
            {
                ::Windows::UI::Xaml::Controls::Button^ element9 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element9))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::ResetButton);
            }
            break;
        case 10:
            {
                this->buttonLeft = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->buttonLeft))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::MoveLeft);
            }
            break;
        case 11:
            {
                this->buttonRight = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->buttonRight))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::MoveRight);
            }
            break;
        case 12:
            {
                this->checkBox = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(this->checkBox))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::AroundOnClick);
            }
            break;
        case 13:
            {
                this->sliderX = safe_cast<::Windows::UI::Xaml::Controls::Slider^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Slider^>(this->sliderX))->ValueChanged += ref new ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs^))&MainPage::HandleXChanged);
            }
            break;
        case 14:
            {
                this->sliderY = safe_cast<::Windows::UI::Xaml::Controls::Slider^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Slider^>(this->sliderY))->ValueChanged += ref new ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs^))&MainPage::HandleYChanged);
            }
            break;
        case 15:
            {
                this->sliderZ = safe_cast<::Windows::UI::Xaml::Controls::Slider^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Slider^>(this->sliderZ))->ValueChanged += ref new ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs^))&MainPage::HandleZChanged);
            }
            break;
        case 16:
            {
                this->SliderVolume = safe_cast<::Windows::UI::Xaml::Controls::Slider^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Slider^>(this->SliderVolume))->ValueChanged += ref new ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler(this, (void (::DirectX12XAMLXAudio2::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs^))&MainPage::VolumeChanged);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::DirectX12XAMLXAudio2::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


