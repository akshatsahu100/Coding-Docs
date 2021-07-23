int cnt = 0;
        List<Integer> vec = new ArrayList<Integer>();
        for (int i : A) {
            vec.add(i);
        }

        boolean flag = false;
        for (int j = 0; j < A.length-2 ; j++) {
            if ((vec.get(j) - vec.get(j + 1) > 0) && (vec.get(j + 1) - vec.get(j + 2) < 0)) {
                flag = true;
            } else if ((vec.get(j) - vec.get(j + 1) < 0) && (vec.get(j + 1) - vec.get(j + 2) > 0)) {
                flag = true;
            } else {
                flag = false;
                break;
            }
        }

        if (flag) 
            return 0;
        

        List<Integer> ab = new ArrayList<Integer>();

        for (int i = 0; i < A.length; i++) {
            ab.clear();
            ab.addAll(vec);
            ab.remove(i);
            int f = 0;
            boolean ok = false;
            while (f < A.length - 3) {
                if (!ok && f != 0) {
                    break;
                }
                if ((ab.get(f) - ab.get(f + 1) > 0) && (ab.get(f + 1) - ab.get(f + 2) < 0)) {
                    ok = true;
                } else if ((ab.get(f) - ab.get(f + 1) < 0) && (ab.get(f + 1) - ab.get(f + 2) > 0)) {
                    ok = true;
                } else {
                    ok = false;
                }
                f++;
            }
            if (ok) {
                cnt++;
            }
        }
        
        if (cnt == 0)
            cnt = -1;

        return cnt;