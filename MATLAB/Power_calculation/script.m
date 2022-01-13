VL = input('Input VL: ');
disp(VL);
ZLoad = input('Input Z Load: ');
disp(ZLoad);
ZLine = input('Input Z Line: ');
disp(ZLine);

disp('input for a = r1 / r2');
r1 = input('input r1: ');
r2 = input('input r2: ');

RLine = input('input RLine: ');


a = r1 / r2;

Z_dash_Load = (a * a) * ( ZLoad);
%disp(Z_dash_Load);

Zeq = (ZLine + Z_dash_Load);
%disp(Zeq);

Zeq_abs = abs(Zeq);
Zeq_deg = rad2deg(angle(Zeq));
%disp(Zeq_abs);
%disp(Zeq_deg);

aRev = r2 / r1;

Z_dash_eq = (aRev * aRev) * (ZLine + Z_dash_Load);
%disp(Z_dash_eq);


IG = VL / Z_dash_eq;
%disp(IG);


ILine = (aRev) * IG;
%disp(ILine);


ILoad = a * ILine;
%disp(ILoad);



ILoad_abs = abs(ILoad);
ILoad_deg = rad2deg(angle(ILoad));
%disp(ILoad_abs);
%disp(ILoad_deg);


ZLoad_abs = abs(Z_dash_eq);
ZLoad_deg = rad2deg(angle(Z_dash_eq));
%disp(ZLoad_abs);
%disp(ZLoad_deg);





VLoadReal = (ILoad_abs * ZLoad_abs);
VLoadDeg = (ILoad_deg + ZLoad_deg);
%disp(VLoadReal);
%disp(VLoadDeg);

fprintf('VLoad: %d V, %d deg\n', VLoadReal,VLoadDeg);



ILineReal = abs(ILine);
%disp(ILineReal);
PLoss = (ILineReal * ILineReal) * RLine;
fprintf('PLoss: %f', PLoss);








