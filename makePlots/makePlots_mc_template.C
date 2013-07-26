void makePlots() {

  gROOT->LoadMacro("analyze_mc.C+");

  TStopwatch ts;
  ts.Start();

  TString input = "FILE_TO_RUN";
  bool addMC = true;
  int intLumi = 19789;

  for(int i = 0; i < 7; i++) {
    analyze(input, addMC, i, intLumi);
  }  

  ts.Stop();

  std::cout << "RealTime : " << ts.RealTime()/60.0 << " minutes" << std::endl;
  std::cout << "CPUTime  : " << ts.CpuTime()/60.0 << " minutes" << std::endl;

}