//
// Created by Dino on 2 Jan 2023.
//

#include <iostream>
#include <vector>
#include <fstream>

struct Point {
    int x;
    int y;
    Point() : x{0}, y{0} {}
    Point(int a, int b) : x{a}, y{b} {}
};

std::ostream& operator<< (std::ostream& os, const Point& p);
std::istream& operator>> (std::istream& is, Point& p);
bool operator!= (const Point& a, const Point& b);
void printInput(const std::vector<Point>& points);

int ch10_drill() {
    std::vector<Point> original_points;
    int xCoord, yCoord;

    std::cout << "Please input points seperated by a space, for example [3 1], '|' to stop:\n";

    while (std::cin >> xCoord >> yCoord) {
        Point tempP {};
        tempP.x = xCoord;
        tempP.y = yCoord;
        original_points.push_back(tempP);
    }
    // printInput(original_points);

    // I/O streams

    std::string file = "mydata.txt";

    std::ofstream outputStream {file};
    if (!outputStream) throw std::runtime_error("Can't open file");

    for (Point p : original_points) {
        outputStream << p << '\n';
    }

    outputStream.close();

    std::ifstream inputStream {file};
    if (!inputStream) throw std::runtime_error("Can't open file");

    std::vector<Point> processed_points;
    Point temp;

    while (inputStream >> temp) {
        processed_points.push_back(temp);
    }

    inputStream.close();

    // print both vectors
    for (Point p : processed_points) std::cout << "processed p: " << p << '\n';
    for (Point p : original_points) std::cout << "original p: " << p << '\n';

    // compare
    if (original_points.size() != processed_points.size()) throw std::runtime_error("Something went wrong!");
    for (int i = 0; i < original_points.size(); ++i) {
        if (original_points[i] != processed_points[i]) throw std::runtime_error("Something went wrong!");
    }

    return 0;
}

std::ostream& operator<< (std::ostream& os, const Point& p) {
    return os << p.x << ' ' << p.y;
}

std::istream& operator>> (std::istream& is, Point& p) {
    int x, y;
    is >> x >> y;
    if (!is) {
        is.unget();
        is.clear(std::ios_base::failbit);
        return is;
    }
    p = Point(x, y);
    return is;
}

bool operator!= (const Point& a, const Point& b) {
    return a.x != b.x || a.y != b.y;
}

void printInput(const std::vector<Point>& points) {
    for (Point p : points) {
        std::cout << "output: " << p << '\n';
    }
}
