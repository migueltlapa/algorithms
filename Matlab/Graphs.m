%Graphs Functions
INPUTS=5;
N=[0:INPUTS];
C=1;
K=5;

nlineal=C.*N;
n_k=K.*N;
nC2=N.*N;
nFact=C.*factorial(N);
nComb=C.*N.^N;
Log_n=C.*log(N);
n_logC2=(C.*N.*log(N)).*(C.*N.*log(N));
n_log=C.*N.*log(N);
exp_n=exp(N);

plot(N,nlineal,'r-o');
hold on

plot(N,n_k,'b-o');
hold on

plot(N,nC2,'g-o');
hold on;

plot(N,n_log,'c-o');
hold on;

plot(N,Log_n,'k-o')
hold on;

plot(N,n_logC2,'m-*')
hold on;

plot(N,nFact,'k-o'),grid on;
hold on;

plot(N,nComb,'b-*');
hold on;

plot(N,exp_n,'r->');
hold on;

number_inputs=sprintf('[Input:%d ]',INPUTS);
xlabel('n=number of inputs');
ylabel('#of instructions');

lgd =legend('N','N*K','N^2','N*LoG(N)','Log(N)','(N*LOG(N))^2','NFACT','N^N','exp(N)','location','NorthWest');
title(lgd,'Type of Function');
title(number_inputs);

