LabB_Solutions

C_for_x_w = [1 0 0 0];


% compute the gains for the reference system
AA = [	A,			B	;
		C_for_x_w,	0	];
bb = [	0	;
		0	;
		0	;
		0	;
		1	];

N = inv(AA) * bb

Nx = N(1:4);
Nu = N(5);



