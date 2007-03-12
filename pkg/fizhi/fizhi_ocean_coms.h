C $Header$
C $Name$

c Ocean Parameters
c -------------------
      common /ocean_params/sstclim,sstfreq,siceclim,sicefreq,ksst,kice
      logical sstclim,sstfreq,siceclim,sicefreq
      integer ksst, kice

c Ocean Exports
c -------------------
      common /ocean_exports/ sst, sice
      _RL sst(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nsx,Nsy)
      _RL sice(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nsx,Nsy)

