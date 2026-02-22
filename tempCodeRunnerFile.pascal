program Mutal;
var
  X, Y, P, Q: real;
begin
  write('X: ');
  readln(X);
  write('Y: ');
  readln(Y);
  
  P := X + Y;
  
  if P >= 10 then
    Q := X * Y
  else
    Q := X / Y;
  
  writeln('Q = ', Q:0:2);
end.