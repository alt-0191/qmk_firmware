# PH60 Rev3 RGB Matrix 配置

## 概述
这个配置为PH60 Rev3键盘的每个按键底下都配置了RGB LED，总共61个LED。

## 硬件连接
- RGB LED数据引脚: GP16
- LED类型: WS2812
- LED数量: 61个 (对应60%键盘的所有按键)

## RGB控制
通过Fn层（按住右GUI键位置的Fn键）可以控制RGB效果：

### RGB控制键位
- **Fn + Q**: 开关RGB
- **Fn + W**: 切换RGB效果模式
- **Fn + E/R**: 调节色调 (Hue +/-)
- **Fn + T/Y**: 调节饱和度 (Saturation +/-)
- **Fn + U/I**: 调节亮度 (Value/Brightness +/-)
- **Fn + S**: 调节动画速度

### 启用的RGB效果
1. **基础效果**:
   - 呼吸灯 (Breathing)
   - 循环彩虹 (Cycle All/Left Right/Up Down)
   - 彩虹V形 (Rainbow Moving Chevron)
   - 双重彩虹 (Dual Beacon, Rainbow Beacon)
   - 雨滴效果 (Raindrops, Jellybean Raindrops)

2. **反应式效果** (响应按键):
   - 简单反应 (Solid Reactive Simple)
   - 反应波纹 (Solid Reactive Wide/Cross)
   - 彩虹溅射 (Splash, Multisplash)

## RGB指示器
- **Caps Lock**: 开启时Caps键显示红色
- **Fn层激活**: Fn键显示蓝色，相关功能键显示不同颜色
  - 切换键 (Q/W): 橙色
  - 色调键 (E/R): 绿色  
  - 饱和度键 (T/Y): 黄色
  - 亮度键 (U/I): 紫色
  - 速度键 (S): 青色

## LED映射
LEDs按照以下顺序排列：
- 第0-13行: 数字行 (` 1 2 3 4 5 6 7 8 9 0 - = Backspace)
- 第14-27行: Tab行 (Tab Q W E R T Y U I O P [ ] \)
- 第28-40行: Caps行 (Caps A S D F G H J K L ; ' Enter)
- 第41-52行: Shift行 (Shift Z X C V B N M , . / RShift)
- 第53-60行: 底部行 (Ctrl GUI Alt Space Alt Fn Menu Ctrl)

## 默认设置
- 默认效果: Cycle Left Right (从左到右的彩虹循环)
- 默认亮度: 120/255
- 最大亮度: 200/255 (保护LED寿命)
- 自动关闭: 20分钟无操作后关闭

## 编译固件
```bash
qmk compile -kb phdesign/ph60/rev3 -km default
```

## 注意事项
1. 确保RGB LED正确连接到GP16引脚
2. 如果LED数量或排列有变化，需要修改`keyboard.c`中的`g_led_config`
3. 可以通过修改`config.h`来调整默认设置和启用/禁用特定效果