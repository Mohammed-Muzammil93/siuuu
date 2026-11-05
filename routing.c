import 'package:flutter/material.dart';
void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        appBar: AppBar(
          title: const Text("Image Widget Example"),
          backgroundColor: Colors.blue,
        ),
        body: Center(
          child: Image.asset(
            'images/flower.jpg',
            height: 300,
            width: 300,
          ),
        ),
      ),
    );
  }
}




flutter:
  uses-material-design: true

  assets:
    - images/flower.jpg




        experiment2/
 ├── images/
 │    └── flower.jpg
 ├── lib/
 │    └── main.dart
 └── pubspec.yaml



   


flutter create experiment2
cd experiment2
code .
     flutter pub get
flutter run -d chrome
