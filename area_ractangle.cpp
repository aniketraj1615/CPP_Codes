#include<bits/stdc++.h>
using namespace std;
struct point{
    int x;
    int y;
};
struct ractangle{
    struct point left_upper_point;
    struct point right_lower_point;
};
int area(struct ractangle r){
    int length=r.right_lower_point.x-r.left_upper_point.x;
    int width=r.left_upper_point.y-r.right_lower_point.y;
    cout<<"length"<<length<<endl;
    cout<<"width"<<width<<endl;
    return length*width;
}
int main(){struct ractangle r;
r.left_upper_point.x=12;
r.left_upper_point.y=14;
r.right_lower_point.x=14;
r.right_lower_point.y=12;
cout<<"area of ractangle is"<<endl;
cout<<area(r)<<endl;
    return 0;
}