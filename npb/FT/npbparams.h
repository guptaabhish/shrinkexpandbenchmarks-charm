c NPROCS = 4096 CLASS = A
c  
c  
c  This file is generated automatically by the setparams utility.
c  It sets the number of processors and the class of the NPB
c  in this directory. Do not modify it by hand.
c  
        integer nx, ny, nz, maxdim, niter_default, ntdivnp, np_min
        parameter (nx=256, ny=256, nz=128, maxdim=256)
        parameter (niter_default=1000)
        parameter (np_min = 4096)
        parameter (ntdivnp=((nx*ny)/np_min)*nz)
        double precision ntotal_f
        parameter (ntotal_f=1.d0*nx*ny*nz)
        logical  convertdouble
        parameter (convertdouble = .false.)
        character*11 compiletime
        parameter (compiletime='17 Jul 2013')
        character*3 npbversion
        parameter (npbversion='3.3')
        character*46 cs1
        parameter (cs1='$(CHARMDIR)/bin/charmc -language ampif -mem...')
        character*9 cs2
        parameter (cs2='$(MPIF77)')
        character*17 cs3
        parameter (cs3='-L$(CHARMDIR)/lib')
        character*21 cs4
        parameter (cs4='-I$(CHARMDIR)/include')
        character*24 cs5
        parameter (cs5='-O0 -qfixed -swapglobals')
        character*31 cs6
        parameter (cs6='-lckf -swapglobals $(MEMORYOPT)')
        character*6 cs7
        parameter (cs7='randi8')
