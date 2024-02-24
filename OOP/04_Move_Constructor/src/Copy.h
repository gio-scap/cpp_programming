class Copy {
 private:
  int* data;

 public:
  // constructor
  Copy(int d);
  Copy(const Copy& source);
  ~Copy();
};