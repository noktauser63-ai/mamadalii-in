# Christmas Toast Demo

Bu, Android Studio + Android NDK ile derlenen bağımsız bir test uygulamasıdır.
Açıldığında JNI üzerinden `Merry Christmas!` Toast bildirimi gösterir.

## Hedef mimari
- `armeabi-v7a` (32-bit ARM)
- `minSdk`: 24 (Android 7.0+)
- Native kütüphane adı: `libtoastdemo.so`

## Derleme
1. Android Studio'da bu klasörü açın.
2. Android SDK Platform 35, NDK ve CMake 3.22.1 bileşenlerinin kurulu olduğundan emin olun.
3. Gradle senkronizasyonunu tamamlayın.
4. Build > Build Bundle(s) / APK(s) > Build APK(s) seçeneğini kullanın.

APK'yı ARMv7 Android cihazda kurup çalıştırdığınızda Toast gösterilir.

**Not:** Bu proje bağımsız demo içindir. `libpairipcore.so` yerine geçmez ve World Soccer Champs'ın koruma veya bütünlük kontrollerini değiştirmez. Başka bir uygulamanın native kütüphanesinin yerine kopyalanması amaçlanmamıştır.
