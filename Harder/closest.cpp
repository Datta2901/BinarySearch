#include<bits/stdc++.h>
using namespace std;

class Point{
    public:
        int x,y;
        Point(int xx,int yy){
            x = xx;
            y = yy;
        }
};

double getDistance(Point p1,Point p2){
    double dis = sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
    return dis;
}

double bruteForce(vector<Point>&points,int  n){
    double minimum = FLT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            double dis = getDistance(points[i],points[j]);
            if(dis <= minimum){
                cout << points[i].x << " " << points[i].y << " -- " << points[j].x << " " << points[j].y << endl; 
                minimum = dis;
            }
        }
    }
    return minimum;
}

double closest_list(vector<Point>&list,int size,int k){
    int minimum = k;
    for(int i = 0; i < size; i++){
        int j = i + 1;
        while(j < size && (list[j].y - list[i].y) < minimum){
            minimum = getDistance(list[i],list[j]);
            j++;
        }
    }
    return minimum;
}

bool cmp(Point &p1,Point &p2){
    return p1.y <= p2.y;
}

bool cmp2(Point &p1,Point &p2){
    return p1.x <= p2.x;
}

double find_closest(vector<Point>&points,vector<Point>&points_close,int n){
    if(n <= 3){
        return bruteForce(points,n);
    }
    int mid = n / 2;
    Point midpoint = points[mid];
    vector<Point> pointsleft(points.begin(),points.begin() + mid);
    vector<Point> pointsright(points.begin() + mid,points.end());
    
    double kleft = find_closest(pointsleft,points_close,mid);
    double kright = find_closest(pointsright,points_close,n - mid);

    double k = min(kleft,kright); 
    vector<Point>list_points,list_close;
    vector<Point> lr(pointsleft.begin(),pointsleft.end());
    lr.insert(lr.end(),pointsright.begin(),pointsright.end());

    for(int i = 0; i < n; i++){
        if(abs(lr[i].x - midpoint.x) < k){
            list_points.push_back(lr[i]);
        }
        if(abs(points_close[i].x - midpoint.x) < k){
            list_close.push_back(points_close[i]);
        }
    }

    sort(list_points.begin(),list_points.end(),cmp);

    double mini1 = min(k, closest_list(list_points,list_points.size(),k));
    double mini2 = min(k, closest_list(list_close,list_close.size(),k));
    return min(mini1,mini2);
} 

double closest(vector<Point>&points,int n){
    vector<Point>xsorted,ysorted;
    xsorted = points;
    ysorted = xsorted;
    sort(xsorted.begin(),xsorted.end(),cmp2);
    sort(ysorted.begin(),ysorted.end(),cmp);
    return find_closest(xsorted,ysorted,n);
}

int main(){
    int size;
    cin >> size;
    vector<Point>points;
    for(int i = 0; i < size; i++){
        int x,y;
        cin >> x >> y;
        Point a(x,y);
        points.push_back(a);
    }
    cout << closest(points,points.size()) << endl;
    return 0;
}