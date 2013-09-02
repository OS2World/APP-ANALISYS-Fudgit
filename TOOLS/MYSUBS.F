ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c    Everything has to be double precision
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
       double precision function myfunc(x, y)
       double precision x, y

       myfunc = x + y
       return
       end
cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c     Try with a vector
cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
       subroutine mysub(vec, dn)
       double precision dn
       double precision vec(*)
       integer i, top

       top = int(dn)
       do 12 i = 1, top
            vec(i) = dreal(i) + sin(dreal(i))
12     continue
       return
       end

