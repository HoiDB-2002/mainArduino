#pragma once
#include "Lib.h"


class DisplayScreen
{
  public:
    MCUFRIEND_kbv tft;
    DisplayScreen();
    
    // Khởi tạo màn hình LCD
    void initLCD();

    void displayScreenTest();
    void displayScreenDefault();

    // Hiển thị màn hình bắt đầu
    void displayScreen_Welcome();

    // Hiển thị màn hình nhập OTP hoặc quét mã QR 
    void displayScreen_ScanOTP();

    // Hiển thị màn hình thiết bị đang sạc
    void displayScreen_ChargingVehicle();

    // Hiển thị màn hình thiết bị đã sạc xong
    void displayScreen_CompletedCharging();

    void showCharging();
    // void drawTitleBox(string strTitle);
    void drawQRCodeBox();
    void drawQRCode(String qrData);
    void drawBattery(int nPinPercent);
    void drawLightning(int nVolteNum, int nAmpeNum);
    void drawClock(int nTimeCharge);
    void drawPower(int nPower);
    void showButtonPlay();
    void showButtonPause();
    void showButtonEnd();
};

