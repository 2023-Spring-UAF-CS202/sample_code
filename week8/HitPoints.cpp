class HitPoints {

public:
  HitPoints(int max_points)
    : value{max_points}
    , max_value{max_points}
  {

  }

  

private:
  int value;
  int max_value;

};


int main() {

  HitPoints h{10};

  --h;
  h--;
  h-=1;

  cout << h << endl;
  
  return 0;
}
